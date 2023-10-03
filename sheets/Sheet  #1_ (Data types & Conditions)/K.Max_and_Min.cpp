#include<iostream>
#include<algorithm>
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
    int a, b, c;
    cin >> a >> b >> c;
    cout << min(a,min(b,c)) << " " << max(a, max(b,c));
   
  
    return 0;
}

   
