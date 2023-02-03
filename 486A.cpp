//test
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int test;
  cin>>test;
  long long int i=1,sum=0,val=1;
  
   if(test%2==0) sum = test /2;

   else {sum = test/2 + 1;
   sum*= -1;}
  cout<<sum<<endl;
  
}