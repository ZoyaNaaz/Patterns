#include<iostream>
using namespace std;
/*

Input Format: N = 5
Result:
******
*    *
*    *
*    *
******

*/

void pattern21(int n){
    for(int i = 1; i <= n; i++){
        for(int j =1; j <= n; j++){
            if(i == 1 || i == n || j == 1 || j == n)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    pattern21(n);
    return 0;
}