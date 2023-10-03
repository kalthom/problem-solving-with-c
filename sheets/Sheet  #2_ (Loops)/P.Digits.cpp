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
   int n; cin>>n; 
for(int i=1;i<=n;i++) {
    int x;
    cin>>x; 
    if(x==0) cout<<0; 
    while(x!=0) {
    cout<<x%10<<" "; x/=10;
    } 
 cout<<endl;
   
}
    return 0;
}

   
