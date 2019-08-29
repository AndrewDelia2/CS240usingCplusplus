//Program asks the user to enter a series of characters, then
// it will determine whether the characters formed a Palindrome
// or not
//Written by Andrew Delia
//August 2017
//Language: C++ 98 (g++ target)
//Code Blocks


#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main ()
 {
  int i, length;
  string letter;
  char c, st, qu;
  queue <char> q;
  stack <char> s;

  cout<<"Please enter a series of characters."<<endl;
  getline(cin, letter);
  length = letter.length();

  for (i = 0; i != length; i++)
   {
        c = letter[i];
        s.push(c);
        q.push(c);
   }

  i = 0;

  while (!s.empty())
   {
    st = s.top();
    qu = q.front();
    if (st == qu)
     {
        i++;
     }
    s.pop();
    q.pop();
   }

  if (i == length)
   {
    cout<<"The tested string " << letter << " was determined to be a palindrome"<<endl;
   }

  else
   {
    cout<<"The tested string "<< letter << " is not a palindrome"<<endl;
   }

  return 0;

 }
