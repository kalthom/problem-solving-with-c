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
    int n, x=1;
    cin >> n;
    for(int i=1; i <= n; i++)
    {
      cout << x << " " << x+1 << " " << x+2 <<" " << "PUM" << endl;
      x = x+4;
      
    }
   
  
    return 0;
}

   
