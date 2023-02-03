#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long coin,bur1,bur2,res;
    int rem,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>coin;
        res=coin/3;
        bur1=res;
        bur2=res;
        rem=coin%3;
        if(rem==1) bur1++;
        else if(rem==2) bur2++;
        cout<<bur1<<" "<<bur2<<endl;
    }
    return 0;
}
