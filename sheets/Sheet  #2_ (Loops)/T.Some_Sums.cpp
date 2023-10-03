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
    int num, a, b, t_sum=0, sum;
    cin >> num >> a >> b;
    for(int i = 1; i <= num; i++){
      int n = i;
      sum = 0;
      while(n != 0){
        sum += n%10;
        n/=10;
      }
      if(sum >= a && sum <= b)
      t_sum += i;
    }
    cout << t_sum << endl;
   
  
    return 0;
}

   
