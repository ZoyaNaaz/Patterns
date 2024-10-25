#include<iostream>
using namespace std;
/*

Input Format: N = 5
Result:
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1  

*/

void pattern6(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n+1-i; j++)
            cout<<j<<" ";
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    pattern6(n);
    return 0;
}