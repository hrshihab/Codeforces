#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
  ll n,res,rem,count=0;
  cin>>n;
  int arr[5]={100,20,10,5,1};
  for (size_t i = 0; i < 5; i++)
  {
    if(n/arr[i]>0)
    {
      res=n/arr[i];
      rem= n%arr[i];
      count+=res;
      if(rem==0) {cout<<count;break;}
      n = rem;

      
    }

  }
  
}