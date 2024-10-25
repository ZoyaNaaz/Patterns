#include<iostream>
using namespace std;
/*

Input Format: N = 5
Result:   
*
**
*** 
****
*****
****
***
**
*

*/

void pattern10(int n){
    // upper half
    for(int i = 1; i <= n; i++){
        // stars
        for(int j = 1; j <= i; j++)
            cout<<"*";
        cout<<endl;
    }
    // lower half
    for(int i = 1; i < n; i++){
        // stars
        for(int j = 1; j <= n-i; j++)
            cout<<"*";
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    pattern10(n);
    return 0;
}