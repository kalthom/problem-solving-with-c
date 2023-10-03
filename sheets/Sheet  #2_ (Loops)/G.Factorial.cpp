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
    int t;
    ll fact ;
    cin >> t;
    while(t--)
    {
      int n;
      cin >> n;
      fact = 1;
      for(int i = 1; i <= n; i++)
      { 
         fact *= i;
      }
      cout << fact << "\n";
    }
     
  
    return 0;
}

   
