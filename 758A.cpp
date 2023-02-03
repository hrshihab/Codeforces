//test
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{

 lli n,a,sum=0;
 cin>>n;
lli arr[n];
 for (size_t i = 0; i < n; i++)
 {
    cin>>a;
    arr[i] =a;
 }

 if(n == 1) cout<<"0"<<endl;
 else 
{ sort(arr,arr+n,greater<int>());
 
for (size_t i = 1; i < n; i++)
{
  sum+=arr[i];
}


lli res = (arr[0] * (n-1)) - sum ;
cout<<res<<endl;
}
 
  
}