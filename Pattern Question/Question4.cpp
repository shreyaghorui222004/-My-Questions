
/*
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n :" << endl;
    cin >> n;
    int row = 1;
    while(row<=n){

        int col=1;
        int value = row;
        while(col<=row){
            cout<<value<<" ";
            value = value +1;
            col = col +1;
        }
        cout<<endl;
        row = row + 1;
    }
}