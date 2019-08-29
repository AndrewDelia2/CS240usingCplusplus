//Program asks the user to input 15 words for the program.
// Then, it will use this equation:  ((first_letter) +  (last_letter))%23
// in order to put the words in a random place in a list out of 23 spots,
// some spots will be empty. Finally, it will ask the user to input a word
// to see if it is in the list or press 0 to stop the program. It will tell the user
// either the word is not in the list, or the position of where the word is. The
// program will stop once the user presses 0.
//Written by Andrew Delia
//August 2017
//Language: C++ 98 (g++ target)
//Code Blocks


#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int MAXARRAYSIZE = 23;
class Hasher
{
	public:

        Hasher() : elementarray(MAXARRAYSIZE)
		{
			for(i=0;i<23;i++)
				elementarray.at(i) = "0";
		}

	void hashthis(char firstlet, char lastlet, string hashword)
	{
		sum = (firstlet+lastlet)%23;
		if (elementarray.at(sum) == "0")
			elementarray.at(sum) = hashword;
		else if (elementarray.at(sum) != "0")
		{
			do{
				i = 0;
				if (sum > 21)
					sum = 0;
				else
					sum++;
				if (elementarray.at(sum) == "0")
				{
					elementarray.at(sum) = hashword;
					i++;
				}
			}while (i != 1) ;
		}
	}
	void hashcheck(char firstlet, char lastlet, string hashword)
	{
		sum = (firstlet+lastlet)%23;
		if (elementarray.at(sum) == "0")
			cout<<hashword<<" is not in this list."<<endl;
		else if (elementarray.at(sum) != "0")
        {
            if (elementarray.at(sum) == hashword)
				cout<<hashword<<" was found at position #"<<sum+1<<" on list."<<endl;
			else
			{
				check = 0;
				do{
					i = 0;
				if (sum > 21 && check == 0)
				{
					sum = 0;
					check = 1;
				}
				else
					sum++;
				if (sum > 21 && check == 1)
				{
				cout<<hashword<<" is not in this list."<<endl;
				sum = 0;
				i++;
				}
				if (elementarray.at(sum) == hashword)
				{
					cout<<hashword<<" was found at position #"<<sum+1<<" on list."<<endl;
					i++;
				}
			}while (i != 1) ;
			}
        }

	}

	void display()
	{
		for(i=0;i<23;i++)
		if (elementarray.at(i) == "0")
			cout<<i+1<<". "<<"empty"<< endl;
		else
			cout<<i+1<<". "<<elementarray.at(i)<< endl;
	}

	protected:
		vector<string> elementarray;
		int sum, i, check;
		string hashword;
		char firstlet, lastlet;
};




int main()
{
 Hasher hash;
 char firstletter,lastletter;
 int leng, i;
 string word;

 cout<<"Input 15 different words for the hashing program. " << endl;
 for (i=0;i<15;i++)
	{
	cout<<"#"<<i+1<<" ";
	cin>>word;
	firstletter = word.at(0);
	leng=word.length();
	lastletter = word.at(leng-1);
	hash.hashthis(firstletter,lastletter,word);
	}

	hash.display();

	cout<<endl;
	cout<<"Enter a word to see if it is stored in the program."<<endl;
	cout<<"When you are done enter '0'."<<endl;

do{

	i =0;
	cout<<"Enter word: ";
	cin>>word;
	if (word != "0")
	{
		firstletter = word.at(0);
		leng=word.length();
		lastletter = word.at(leng-1);
		hash.hashcheck(firstletter,lastletter,word);
	}
	else
		i++;

 }while (i != 1);


 }
