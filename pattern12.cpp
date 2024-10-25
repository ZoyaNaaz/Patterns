#include<iostream>
using namespace std;
/*

Input Format: N = 5
Result:   
1        1
12      21
123    321
1234  4321
1234554321

*/

void pattern12(int n){
    for(int i = 1; i <= n; i++){
        // first half
        for(int j = 1; j <= i; j++)
            cout<<j;
        // spaces
        for(int s = 1; s <= 2*(n-i); s++)
            cout<<" ";
        // secon half
        for(int j = i; j > 0; j--)
            cout<<j;
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    pattern12(n);
    return 0;
}