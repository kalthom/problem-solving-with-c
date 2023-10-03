#include<iostream>
#include<cmath>
 
#define ll long long
#define PI 3.141592653
using namespace std;
 
void Kalthum_Muftah(){
  #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}
 
 
int main()
{   Kalthum_Muftah();
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    if(b*log(a) > d*log(c))
      cout<<"YES";
    else
      cout<<"NO";

    return 0;
}