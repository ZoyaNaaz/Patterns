#include<iostream>
using namespace std;
/*

Input Format: N = 5
Result:
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

*/

void pattern4(int n){
    for(int i = 1; i <= n; i++){
        for(int j =1; j <= i; j++)
            cout<<i<<" ";
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    pattern4(n);
    return 0;
}