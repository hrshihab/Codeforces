#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int arr[4] ;
  cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
  sort(arr,arr+4);
  long long int a,b,c;
  c = arr[3]-arr[0];
  b = arr[1] - c;
  a = arr[3] - b - c ;
  cout<<a<<" "<<b<<" "<<c<<endl;


}