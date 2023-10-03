#include<iostream>
#include<cmath>
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
    double num1, num2;
    cin >> num1 >> num2;
    cout << "floor(num1 / num2) = " << floor(num1 / num2) << endl;
    cout << "ceil(num1 / num2) = " << ceil(num1 / num2) << endl;
    cout << "round(num1 / num2) = " << round(num1 / num2) << endl;
   
  
    return 0;
}

   
