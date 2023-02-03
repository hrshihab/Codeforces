#include<iostream>
using namespace std;
int main()
{
    int n,k,remTime,solveTime=0,count=0;
    cin>>n>>k;
    remTime=240-k;
    for(int i=1; i<=n; i++)
    {
        if(remTime<5)
            break;

        solveTime+=(5*i);
        if(solveTime<=remTime) count++;
        else break;
    }
    cout<<count;

}
