//test
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int test,n;
  cin>>test;
  multiset<int>st;
  while (test--)
  {
    cin>>n;
    st.insert(n);

  }
  for(auto it:st)
  {
    cout<<it<<" ";
  }
  
}