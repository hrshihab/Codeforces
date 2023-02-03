#include<bits/stdc++.h>
using namespace std;
int main()
{
  int k,r;
  cin>>k>>r;
  int s = k;
  int i=1;
  while(1){
    if(k%10==0 || k%10==r) {cout<<i<<endl;break;}
    else {
      i++;
      k = s+k;
    }
  }
}