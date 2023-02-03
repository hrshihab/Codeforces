//test
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{

   lli n;
   cin>>n;
   string a;
   for (size_t i = 0; i < n; i++)
   {
     cin>>a;
     cout<<a[0];
     for (size_t j = 1; j < (a.size()); j+=2)
     {
        cout<<a[j];
     }
  
     cout<<endl;
     
   }
   
  
}