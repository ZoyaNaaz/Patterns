#include<iostream>
using namespace std;
/*

Input Format: N = 5
Result:
E 
D E 
C D E 
B C D E 
A B C D E

*/

void pattern18(int n){
    for(int i = 1; i <= n; i++){
        char ch = 64+(n+1-i);
        for(int j =1; j <= i; j++)
            cout<<ch++<<" ";
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    pattern18(n);
    return 0;
}