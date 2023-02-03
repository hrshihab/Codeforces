//test
#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
 lli n,k,l,c,d,p,nl,np;
 cin>>n>>k>>l>>c>>d>>p>>nl>>np;
 lli totDrinks ,totDrinkToast,totLimeToast,totSaltToast;
 totDrinks = k*l;
 totDrinkToast = totDrinks / nl;
 totLimeToast = c*d;
 totSaltToast = p/np;
 vector<lli>vec;
 vec.push_back(totDrinkToast);
 vec.push_back(totLimeToast);
 vec.push_back(totSaltToast);

lli result = *min_element(vec.begin(),vec.end());
 cout<<result/n<<endl; 
 

 
  
}