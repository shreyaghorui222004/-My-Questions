
/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n :" << endl;
    cin >> n;
    int i = 1;//i -->Row

    while(i<=n){
        int j =1;
        while(j<=i){
            cout<<i-j+1<<" ";
            j= j+1;
        }
        cout<<endl;
        i=i+1;
    }
}