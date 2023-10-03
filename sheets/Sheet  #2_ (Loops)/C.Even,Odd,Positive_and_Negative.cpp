#include<iostream>
using namespace std;

#define ll long long
#define PI 3.141592653

void Kalthum_Muftah(){
  ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
  #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}

int main()
{   Kalthum_Muftah();
    int t,odd=0,even=0,pos=0,neg=0;
  cin >>t;
  while(t--){
   int x; cin>>x;
   if(x%2==0)even++;
   else odd++;
   if(x>0)pos++;
   else if(x<0)neg++;
  }
cout<<"Even: "<<even<<"\n"<<"Odd: "<<odd<<"\n"<<"Positive: "<<pos<<"\n"<<"Negative: "<<neg;
    return 0;
}

   
