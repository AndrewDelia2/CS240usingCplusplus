//Program asks the user to enter a file name of choice,
//then it will read all the letters in the file, and
//determines how many vowels are in the file.
//It then outputs the number of vowels in the file.
//July 2017
//Language: C++ 98 (g++ target)
//Code Blocks

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
//#include <cassert>

using namespace std;



int main()
{
    char q;
    //int i, n;
    int pNum = 0;


    cout << "Enter the file name: ";
    string fileName;
    cin >> fileName;
    //getline(cin, fileName);

    ifstream inputFile;
    inputFile.open(fileName.data());
    //assert(inputFile.is_open());


    //inputFile.open(fileName.c_str());

    if(inputFile.fail())
    {
        cerr << "Error Opening File" << endl;
        return(1);
    }

    while(!inputFile.eof())
    {
        inputFile.get(q);
        if (q == 'a' || q == 'e' ||  q == 'o' ||  q == 'i' || q == 'u')
            pNum++;
        if (q == 'A' || q == 'E' ||  q == 'O' ||  q == 'I' || q == 'U')
            pNum++;
    }

    cout << "The number of vowels in this file is " << pNum << endl;
    inputFile.close();
    return 0;
}
