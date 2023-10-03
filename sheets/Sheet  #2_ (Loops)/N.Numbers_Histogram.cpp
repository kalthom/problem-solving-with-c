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
    char s;
    int num;
    cin >> s >> num;
    for(int i = 1; i <= num; i++){
      int n;
      cin >> n;
     while(n--)
      {
        cout << s;
      }
      cout << "\n";

    }
  
    return 0;
}

   
