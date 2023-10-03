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
    int n, p;
    cin >>n;
    for(int i = 2; i <= n; i++){
        p = 1;
        for(int j = 2; j < i; j++){
           if(i%j == 0) p = 0; 
        }
        if(p == 1) cout << i << " " ;
      
    }
   
   
  
    return 0;
}

   
