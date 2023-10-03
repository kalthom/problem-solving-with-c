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
    char a;
    cin >> a;
    int ask = a;
    if(ask >=65 && ask <= 90)
     {
        ask += 32;
     cout << (char)ask << endl;
     }
     else
     {
        ask -= 32;
           cout << (char)ask << endl;
     }
        
    return 0;
}

   
