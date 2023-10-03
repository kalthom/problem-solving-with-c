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
    int num, flag = 0;
    cin >> num;
    for(int i = 2; i <= num/2; i++)
    { 
        if(num%i == 0)
        {
           cout << "NO" << endl;
           flag = 1;
           break;
        }
    }
    if(flag == 0)
     cout << "YES" << endl ;
   
  
    return 0;
}

   
