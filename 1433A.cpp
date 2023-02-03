//test
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{

 lli n,test;
 cin>>test;
 while (test--)
 {
   cin>>n;
 string num = to_string(n);
 lli numSize = num.size();

 lli rem = n%10;
 lli sum = 0;
 sum = (rem-1)*10;
 for (size_t i = 1; i <= numSize; i++)
sum+=i;

cout<<sum<<endl;
 }
 

 
  
}