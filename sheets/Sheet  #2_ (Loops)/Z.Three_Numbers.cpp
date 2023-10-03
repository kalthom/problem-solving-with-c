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
    int k,s,count = 0;
    cin >> k >> s;
    for(int x = 0; x <= k; x++){
        for(int y = 0; y <= k; y++){
            int z = s-(x+y);
            if(z >= 0 && z <= k) count++;
        }
    }
    cout << count << "\n";
   
   
    return 0;
}

   
