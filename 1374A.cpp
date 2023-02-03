#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
long long int x,y,n,res,sum=0;
for(int i=0;i<test;i++)
{
    sum = 0;
   cin>>x>>y>>n;
   res=n/x;

   while(1){
    sum=res*x+y;
    if(y==0) {
        cout<<sum<<endl;
        break;
    }
    else if(sum<=n)
    {
       cout<<sum<<endl;
        break;
    }
    else res--;
   }
}
return 0;

}
