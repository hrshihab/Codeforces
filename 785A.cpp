//test
#include<bits/stdc++.h>
#define t "Tetrahedron"
#define c "Cube"
#define o "Octahedron"
#define d "Dodecahedron"
#define i "Icosahedron"
using namespace std;
int main()
{
  int test,sum=0;
  string n;
  cin>>test;
  while (test--)
  {
    cin>>n;
    if(n==t) sum+=4;
    else if(n==c) sum+=6;
    else if(n==o) sum+=8;
    else if(n==d) sum+=12;
    else if (n==i) sum+=20;

  }
  cout<<sum<<endl;
  
}