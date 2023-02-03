#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i=0,total=0,minTotal=0,count=0;
cin>>n;
int arr[n];
while(i<n)
{
    cin>>arr[i];
    total+=arr[i];
    i++;
}
sort(arr,arr+n,greater<int>());
for(int i=0;i<n;i++)
    {
       total-=arr[i];
       minTotal+=arr[i];
       count++;
       if(minTotal>total) break;

    }
    cout<<count<<endl;
    return 0;
}

