#include<iostream>
using namespace std;
//hourGlass pattern
/*

Input Format: N = 5
Result:
ABCDEFGHI
 BCDEFGH
  CDEFG
   DEF
    E
   DEF
  CDEFG
 BCDEFGH
ABCDEFGHI

*/
void pattern22(int n){
    // upper half
    for(int i = 1; i<=n; i++){
        char ch = 64+i;
       for(int j =1; j<=i-1; j++)
            cout<<" ";
        for(int j =1; j <= 2*n-(2*i-1); j++)
            cout<<ch++;
       cout<<endl;
    }
    //lower half
    for(int i = 1; i<n; i++){
        char ch = 64+n-i;
       for(int j =1; j<n-i; j++)
            cout<<" ";
        for(int j =1; j <= (2*i+1); j++)
            cout<<ch++;
       cout<<endl;
    }
}

int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    pattern22(n);
    
    return 0;
}
