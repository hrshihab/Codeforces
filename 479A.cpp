#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,sum1=1,sum2=1,sum3=1,sum4=1;
  cin>>a>>b>>c;
  vector<int>mst;
  set<int>st;
  mst.push_back(a);
  mst.push_back(b);
  mst.push_back(c);
  
  sum1 = mst[0]* mst[1] * mst[2] ;
  sum2 = (mst[0]+ mst[1]) * mst[2] ;
  sum3 = mst[0]+ mst[1] + mst[2] ;
  sum4 = mst[0] * (mst[1] + mst[2] );

  st.insert(sum1);
  st.insert(sum2);
  st.insert(sum3);
  st.insert(sum4);

int f =*st.rbegin();
cout<<f<<endl;

  
  

}