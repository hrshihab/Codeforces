//test
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    lli test,n,count;
    cin>>test;
    for (size_t i = 0; i < test; i++)
    {
      count = 0;
      cin>>n;
      lli res = log2(n);
      if(n%2!=0) {
        cout<<"YES"<<endl;
        continue;
      }

     else if(n != pow(2,res) ) {
      cout<<"YES"<<endl;
     }
     else  cout<<"NO"<<endl;
      
      
    }
    
 
  
}