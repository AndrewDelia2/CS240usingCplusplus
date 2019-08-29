//Program asks the tester to input the number of rows in columns of both matrices.
//Then, they input the numbers in each row and column of each matrices.
//Finally, the program outputs the sum of the two matrix to make a new matrix.
//Written by Andrew Delia
//June 2017
//Language: C++ 98 (g++ target)
//Code Blocks

#include <iostream>

using namespace std;

int main()
{
    int m, n, c, d, first[10][10], second[10][10], sum[10][10];

   cout << "Enter the number of rows of matrix ";
   cin >> m;
   cout << "Enter the number of columns of matrix ";
   cin >> n;
   cout << "Enter the elements of first matrix\n";

   for (  c = 0 ; c < m ; c++ )
      for ( d = 0 ; d < n ; d++ )
         cin >> first[c][d];

   cout << "Enter the elements of second matrix\n";

   for ( c = 0 ; c < m ;c++ )
      for ( d = 0 ; d < n ; d++ )
            cin >> second[c][d];

   for ( c = 0 ; c < m ; c++ )
      for ( d = 0 ; d < n ; d++ )
         sum[c][d] = first[c][d] + second[c][d];

   cout << "Sum of entered matrices:\n";

   for ( c = 0 ; c < m ; c++ )
   {
      for ( d = 0 ; d < n ; d++ )
         cout << sum[c][d] << "\t";

      cout << endl;
   }
    return 0;
}
