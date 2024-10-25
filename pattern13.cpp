#include<iostream>
using namespace std;
/*

Input Format: N = 5
Result:
1
2  3
4  5  6
7  8  9  10
11  12  13  14  15

*/

void pattern13(int n){
    int num = 1;
    for(int i = 1; i <= n; i++){
        for(int j =1; j <= i; j++)
            cout<<num++<<" ";
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