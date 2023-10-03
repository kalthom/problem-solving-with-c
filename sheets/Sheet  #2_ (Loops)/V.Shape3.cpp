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
    int r; cin >> r;
    for(int i = 1; i <= r; i++){
        for(int j = 1; j <= r-i; j++ ){
            cout << " ";
        }for(int k = 1; k <= i*2-1; k++){
            cout << "*";
        }cout << endl;
    }
    for(int i = 1; i <= r; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }for(int k = 1; k <= (r+1-i)*2-1; k++){
            cout << "*";
        }cout<< endl;
    }
   
  
    return 0;
}

   
