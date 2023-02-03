//test
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
 lli count,n,tot=0,sum = 0;
 cin>>count;
 lli a[count];
 for (size_t i = 0; i < count; i++)
 {
  cin>>n;
  a[i] = n;
 }
 for (size_t i = 0; i < count; i++)
 {
  if(a[i]==-1) {
    if(sum==0) tot++;
    else sum--;
  }
  else {
    sum+=a[i];
  }
 }
 cout<<tot<<endl;
 
  
}