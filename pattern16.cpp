#include<iostream>
using namespace std;
/*

Input Format: N = 5
Result:
A 
B B
C C C
D D D D
E E E E E

*/

void pattern16(int n){
    for(int i = 1; i <= n; i++){
        char ch = 64+i;
        for(int j =1; j <= i; j++)
            cout<<ch<<" ";
        ch++;
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    pattern16(n);
    return 0;
}