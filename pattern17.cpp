#include<iostream>
using namespace std;
/*

Input Format: N = 5
Result:
     A     
    ABA    
   ABCBA   
  ABCDCBA  
 ABCDEDCBA

*/

void pattern17(int n){
    for(int i = 1; i <= n; i++){
        // spaces
        for(int s = 1; s <= n-i;s++)
            cout<<" ";
        // symbol
        char ch = 'A';
        for(int j = 1; j <= 2*i-1; j++)
            // when i == j, stop increment print and start decrement
            i > j ? cout<<ch++ : cout<<ch--;
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    pattern17(n);
    return 0;
}