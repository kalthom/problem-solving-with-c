#include<iostream>
#include<algorithm>
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
   string s,  reversed;
   cin >> s;
   reversed = s;
   
   reverse(reversed.begin(), reversed.end());
   int rev = stoi(reversed);
   cout << rev << "\n";
   if(reversed == s)
     cout << "YES" ;
   else
     cout << "NO" ;
   


   /* int n, reversed = 0;
    cin >> n; // 159
    for (int i = n; i > 0; i /= 10)
    {
        int rem = i % 10;
        reversed  = reversed * 10 +rem;

    }
    cout << reversed << "\n";
    if(n == reversed)
      cout << "YES" ;
    else 
      cout << "NO" ;
   */

  
    return 0;
}

   
