#include<bits/stdc++.h>
using namespace std;
int main()
{
  int test ;
  cin>>test;
  while(test--)
  {
   string s;
   cin>>s;
   set<char> st;
   for (size_t i = 0; i < s.size(); )
   {
    if(s[i]!=s[i+1]){
       st.insert(s[i]);
       i++;
    }
    else if(s[i]==s[i+1])
    {
      i+=2;
    }
   }
   for(auto it :st)
   {
    cout<<it;
   }
   cout<<endl;


  }
}