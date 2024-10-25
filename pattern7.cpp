#include<iostream>
using namespace std;
/*

Input Format: N = 5
Result:
     *     
    ***    
   *****   
  *******  
 ********* 

*/

void pattern7(int n){
    for(int i = 1; i <= n; i++){
        // spaces
        for(int s = 1; s <= n-i;s++)
            cout<<" ";
        // stars
        for(int j = 1; j <= 2*i-1; j++)
            cout<<"*";
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    pattern7(n);
    return 0;
}