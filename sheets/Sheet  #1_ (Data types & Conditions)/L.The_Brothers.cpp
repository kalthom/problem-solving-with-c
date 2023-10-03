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
    string namePerson1,namePerson2,nameDad1,nameDad2;
    cin>>namePerson1>>nameDad1>>namePerson2>>nameDad2;
    
    if(nameDad1 == nameDad2)
      cout << "ARE Brothers" << endl;
    else
      cout << "NOT" << endl;
   
  
    return 0;
}

   
