//Program asks the user for the trading prices for a 15 day period.
// Then, it shows the range of the prices, and the differences
// between two consecutive days for all 15 days
//Written by Andrew Delia
//August 2017
//Language: C++ 98 (g++ target)
//Code Blocks


#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(void)
{
    int i = 0;
    float num = 0;
    vector<float> prices(15);
    vector<float> differences(15);


    cout << "Please enter the trading prices for the 15 day period:" << endl;

    for(i=0; i<15; i++)
    {
        cout << "Day " << i+1 <<": $";
        cin >> prices.at(i);
    }


    cout << "Below are the results of computation:" << endl << endl;

    adjacent_difference(prices.begin(), prices.end(), differences.begin());
    sort(prices.begin(), prices.end());


    printf("Trading Range: %.2f -- %.2f\n", *prices.begin() , *(prices.end() - 1) );
    cout << endl << "Rise and Fall of prices:" << endl;
    for(i=0; i<15; i++)
        if(differences[i] >= 0)
            printf("Day %d-%d: $%.2f\n", i , i+1, differences[i]);
        else
        {
            num = 0 - differences[i];
            printf("Day %d-%d: -$%.2f\n", i , i+1, num);
        }

    return 0;
}
