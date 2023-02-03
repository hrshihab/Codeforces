//test
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int test,n,count=0;
  cin>>test;
  vector <int> vec;
  while (test--)
  {
    cin>>n;
    vec.push_back(n);
    
  }
  for (size_t i = 0; i < vec.size(); i++)
  {
    if(vec[i]!=vec[i+1]) count++;
  }
  
  cout<<count<<endl;
  
}