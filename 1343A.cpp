//test
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{

 lli test,n,x,res=-1,rem,a,k;
 cin>>test;
 while (test--)
 {
  cin>>n;
  a = 1; k = 1 ; rem = 9999;
  while(rem!=0){
    k++;
    a= a + pow(2,k-1);
    rem = n % a;
    res = n / a;
    
  }
  cout<<res<<endl;
 }
 
  
}