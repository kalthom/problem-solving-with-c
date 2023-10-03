#include<iostream>
#include <algorithm>
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
    int t,x,y;
cin>>t;
while(t--){
    cin>>x>>y;
    int sum=0;
for(int i=min(x,y)+1;i<max(x,y);i++)
{
    if(i%2!=0)
    sum+=i;
}
cout<<sum<<"\n";
}
    
   
  
    return 0;
}

   
