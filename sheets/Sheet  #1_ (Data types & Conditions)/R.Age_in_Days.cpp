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
    int ageDays;
    cin >> ageDays;
    
    int years = ageDays / 365; //370-365=1;
    ageDays %= 365;
    int monuth = ageDays / 30;
    ageDays %= 30;
     cout << years << " years" << endl;
     cout << monuth << " months" << endl;
     cout << ageDays <<" days" << endl;

   
  
    return 0;
}

   
