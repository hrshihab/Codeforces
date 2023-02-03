//test
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
 lli count,a,num;
 cin>>count;
 vector<int>vec;
 for (size_t i = 0; i < count; i++)
 {
    cin>>num; 
    lli res,rem,j=1;
    if(num<=9) { vec.push_back(num);

    }
    else {
      do
      {
        rem = num%10; res = num/10;
        rem*=j; 
            
        if(rem!=0)  vec.push_back(rem);
         j*=10;
        num = res ;

      }while(num!=0);
    }

    cout<<vec.size()<<endl;
    for(auto it : vec)
    {
      cout<<it<<" ";
    }
    cout<<endl;
    vec.clear();
 }
 
  
}