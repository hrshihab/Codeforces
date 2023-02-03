//test
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{

 lli n,k,count=0,y;
 cin>>n>>k;
 lli a[n];
 for (size_t i = 0; i < n; i++)
 {
  cin>>y;
  a[i] = y;
 }
 sort(a,a+n);
 lli i = 0;
 for (size_t j = 0; j < n/3; j++)
 {
  if((5 - a[i+2])>=k) {count++; i = i+3; }
  else break;
   
 }
 cout<<count<<endl;

 
 

  
}