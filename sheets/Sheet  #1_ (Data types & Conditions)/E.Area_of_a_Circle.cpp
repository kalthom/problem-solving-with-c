#include<iostream>
#include<iomanip>
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
    double r, area;
    cin >> r;
    area = 3.141592653*r*r;
    cout << fixed << setprecision(9);
    cout << area << endl;
   
  
    return 0;
}

   
