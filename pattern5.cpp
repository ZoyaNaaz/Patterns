#include<iostream>
using namespace std;
/*

Input Format: N = 5
Result:
* * * * * 
* * * * 
* * * 
* * 
* 

*/

void pattern5(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n+1-i; j++)
            cout<<"* ";
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    pattern5(n);
    return 0;
}