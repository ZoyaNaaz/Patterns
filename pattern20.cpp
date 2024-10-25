#include<iostream>
using namespace std;
/*

Input Format: N = 5
Result:
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/

void pattern20(int n){
    // upper half
    for(int i = 1; i <= n; i++){
        // first half
        for(int j =1; j <= i; j++)
            cout<<"*";
        // spaces
        for(int s = 1; s <= 2*(n-i); s++)
            cout<<" ";
        // second half
        for(int j = 1; j <= i; j++)
            cout<<"*";
        cout<<endl;
    }
    // lower half
    for(int i = 1; i < n; i++){
        // first half
        for(int j =1; j <= n-i; j++)
            cout<<"*";
        // spaces
        for(int s = 1; s <= 2*i; s++)
            cout<<" ";
        // second half
        for(int j = 1; j <= n-i; j++)
            cout<<"*";
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    pattern20(n);
    return 0;
}