//test
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{

 lli x,res,rem,sum=0;
 cin>>x;
 res = x;
 while (res!=0)
 {
 rem = res%2;  // 0 0 1 0 0  1 1
 if(rem!=0) sum++;
 res = res/2;  //50 25 12 6 3 1 0
 }
 cout<<sum<<endl;
 
  
}