#include<iostream>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int a[n];
    int i =0,sum=0;
    while(n>i)
    {
        cin>>a[i];
        if(a[i]>h) sum+=2;
        else sum+=1;
        i++;
    }
    cout<<sum;

}
