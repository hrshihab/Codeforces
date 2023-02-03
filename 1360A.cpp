//test
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
   lli test,a,b,min,max,res;
   cin>>test;
   for (size_t i = 0; i < test; i++)
   {
     cin>>a>>b;
     if(a<b){
      min = a;
      max = b;
     }
     else {
      min = b;
      max = a;
     }
     if(min*2>=max) {
      res = min*2;
      cout<<pow(res,2)<<endl;
     }
     else cout<<pow(max,2)<<endl;
   }
   
 
  
}