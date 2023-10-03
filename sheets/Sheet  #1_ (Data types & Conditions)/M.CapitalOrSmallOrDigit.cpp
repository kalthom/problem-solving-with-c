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
    cin >> a ;
    if(a >= 65 && a <= 90)
       cout << "ALPHA" << "\n" << "IS CAPITAL" << endl;
    else if(a >= 97 && a <= 122)
       cout << "ALPHA" << "\n" << "IS SMALL" << endl;
    else 
       cout << "IS DIGIT" << endl;




   
  
    return 0;
}

   
