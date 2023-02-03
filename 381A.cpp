//test
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
  lli n,a,serejaTotal = 0, dimaTotal = 0;
  cin>>n;
  vector<lli> vec;
  for (size_t i = 0; i < n; i++)
  {
    cin>>a;
    vec.push_back(a);
  }

  for (size_t i = 0; i < n; i++)
  {
    if(i%2==0) {
      
      if(*vec.begin() > *(vec.end()-1)){
          serejaTotal+=(*vec.begin());
          vec.erase(vec.begin());
      }
      else {
        serejaTotal+= (*(vec.end()-1));
        vec.pop_back();
      }
    }
    else {
     
      if(*vec.begin() > *(vec.end()-1)){
          dimaTotal+=(*vec.begin());
          vec.erase(vec.begin());
      }
       else {
        dimaTotal+= (*(vec.end()-1));
        vec.pop_back();
      }
    }
  }
  cout<<serejaTotal<<" "<<dimaTotal<<endl;
 
  
}