
/*
*
**
***
****
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n :" << endl;
    cin >> n;
    int row = 1;

    while (row <= n)
    {
        // space print
        /*int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }*/
        // star print
        int col = 1;
        while (col <= row)
        {

            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}
