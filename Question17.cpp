
/*
    1
   121
  12321
 1234321
123454321
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
        // print space (first triangle)
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // print  second  triangle
        int col = 1;
        while (col <= row)
        {

            cout << col;
            col = col + 1;
        }

        // print third triangle

        int start = row - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }
        cout << endl;
        row = row + 1;
    }
}
