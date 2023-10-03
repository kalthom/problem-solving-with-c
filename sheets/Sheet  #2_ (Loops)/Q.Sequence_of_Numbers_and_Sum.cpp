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
    int x, y;
    while(cin>>x>>y){
      if(x <= 0 || y <= 0) return 0;
      int sum = 0;
      if(x>y) swap(x,y);
      for(int i = x; i <= y; i++){
        cout << i << " " ;
        sum += i;
      }
      cout << "sum =" << sum << "\n";
    }
 

   
  
    return 0;
}

   
