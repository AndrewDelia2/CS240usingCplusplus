//Program scans through a matrix to find if a certain number
// is in the matrix. If it is, it prints that the item
// was found. If not, it prints that the item wasn't found
//Written by Andrew Delia
//June 2017
//Language: C++ 98 (g++ target)
//Code Blocks

#include <iostream>

using namespace std;

int main ( void )
{
    int n = 3;
    int mat [3][3] = {{45, 77, 93},{78, 79, 85},{72, 96, 77}};
    int item;
    cout << "Pick a number to see if it is in the Matrix: ";
    cin >> item;

    int row;
    int col;

     bool found;
    found = false;

    row = 0;
    col = 0;
    while ((row < n) && (!found))
    {
        while ((col < n) && (!found))
        {
            if (mat [row][col] == item)
                found = true;
            else
                col++;
        }
        row++;
        col = 0; //Reset column
    }

    if (found)
        cout << "item found\n";
    else
        cout << "item not found\n";


    return 0;
}
