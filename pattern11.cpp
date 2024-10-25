#include<iostream>
using namespace std;
/*

Input Format: N = 5
Result:   
1
01
101
0101
10101

*/

void pattern11(int n){
    bool b;
    for(int i = 1; i <= n; i++){
        // set value of b. 0 => even row || 1 => odd row
        i%2 == 0 ? b = 0: b = 1;
        for(int j = 1; j <= i; j++){
            cout<<b;
            b = !b;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    pattern11(n);
    return 0;
}