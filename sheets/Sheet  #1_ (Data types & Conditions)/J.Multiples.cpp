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
    int A, B;
    cin >> A >> B;
    if((A % B == 0)||(B % A == 0))
      cout << "Multiples" << endl;
    else
      cout << "No Multiples" << endl;
  
    return 0;
}

   
