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
    int X1 = -1, X2 = 1, X, Y;
    cin >> Y;
    do{
        X = X1 + X2;
        cout << X << " ";
        X1 = X2;
        X2 = X;
        Y--; 
    }while(Y >= 1);
   
  
    return 0;
}

   
