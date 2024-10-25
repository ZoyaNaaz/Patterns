#include<iostream>
using namespace std;
/*

Input Format: N = 5
Result:
A
A B
A B C
A B C D
A B C D E

*/

void pattern13(int n){
    for(int i = 1; i <= n; i++){
        char ch = 'A';
        for(int j =1; j <= i; j++)
            cout<<ch++<<" ";
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    pattern13(n);
    return 0;
}