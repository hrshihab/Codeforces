//test
#include<bits/stdc++.h>
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));

using namespace std;
#define lli long long int
int main()
{
  fastread();
lli n,res;
cin>>n;
if(n%2==0) {
  res = n/2;
  cout<<res<<endl;
  for (size_t i = 0; i < res; i++)
  {
    cout<<"2 ";
  }
cout<<endl;
  
}
else {
  n = n-3;
  res = n/2;
  cout<<res+1<<endl;
  for (size_t i = 0; i < res; i++)
  {
    cout<<"2 ";
  }
  cout<<"3"<<endl;
  
}
 
  
}
