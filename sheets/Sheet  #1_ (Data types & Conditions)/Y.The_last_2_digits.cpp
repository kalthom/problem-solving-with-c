#include<iostream>
#include<algorithm>
 
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
    
    ll v = ((a%100)*(b%100)*(c%100)*(d%100))%100;
    if(v<10)
     cout<<0<<v;
    else
     cout<<v;
  
    return 0;
}