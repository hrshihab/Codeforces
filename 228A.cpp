#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long a,b,c,d;
  cin>>a>>b>>c>>d;
  set <int> st;
  st.insert(a); 
  st.insert(b);
  st.insert(c);
  st.insert(d);
  cout<<4-st.size()<<endl;
}