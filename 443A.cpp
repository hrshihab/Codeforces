#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
 getline(cin,s);
  set<char> st;
  for (size_t i = 1; i < s.length()-1; i++)
  {
    // if(s[i] >= 'a' && s[i]<='z') 
    if(s[i]== ' ' || s[i]==',') continue;
    st.insert(s[i]);
  }
  cout<<st.size();
}