#include<iostream>
using namespace std;
int main()
{
    int arr[1001],num=1,test,input;
    cin>>test;
    for(int i=1; i<=1000; i++)
    {
        if(num%3==0 || num%10==3)
        {
            num++;
            if(num%3==0 || num%10==3) num++;
            arr[i]=num;
            num++;

        }
        else
        {
            arr[i]=num;
            num++;
        }
    }

    for(int i=1;i<=test;i++ )
    {
        cin>>input;
        cout<<arr[input]<<endl;

    }
    return 0;
}
