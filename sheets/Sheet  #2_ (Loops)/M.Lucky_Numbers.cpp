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
    int a, b, c=0;
    cin >> a >> b;
    for(int num = a; num <= b; num++){
       bool flag = false;
        int n = num;
        while( n!= 0 ){
            int digit = n % 10;
            n /= 10;
            if(digit != 7 && digit != 4)
              flag = true;
        } 
        
        if(flag == 0){
            cout << num << " " ;
            c++;
        }
            
    }
        
    if(c == 0)
     cout << -1;

   
  
    return 0;
}

   
