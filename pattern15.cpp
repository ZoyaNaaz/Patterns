#include<iostream>
using namespace std;
/*

Input Format: N = 5
Result:
A B C D E 
A B C D
A B C
A B
A

*/

void pattern15(int n){
    for(int i = 1; i <= n; i++){
        char ch = 'A';
        for(int j = 1; j <= n+1-i; j++)
            cout<<ch++<<" ";
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    pattern15(n);
    return 0;
}