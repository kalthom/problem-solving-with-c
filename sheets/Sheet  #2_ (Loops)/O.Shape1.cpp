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
    int n;
    cin >> n;
    for(int i = n; i > 0; i--){
        for(int j = i; j > 0; j--)
           cout << '*' ;
         cout << endl;
    }
   
  
    return 0;
}

   
