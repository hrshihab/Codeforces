#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long w,h,t,n,sheet;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        sheet = 1;
        cin>>w>>h>>n;

        if(w%2!=0 && h%2!=0) sheet=1;
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }


        while(w%2==0)
        {
            w=w/2;
            sheet*=2;
        }
        while(h%2==0)
        {
            h=h/2;
            sheet*=2;
        }
        if(sheet>=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;


}
