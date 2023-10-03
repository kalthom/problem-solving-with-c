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
    double x, y;
    cin >> x >> y;
    if(x == 0 && y == 0)
      cout<<"Origem"<<endl;
    else if(x!= 0 && y == 0)
     cout<<"Eixo X"<<endl;
    else if(x == 0 && y != 0)
     cout<<"Eixo Y"<<endl;
    else if(x > 0 && y > 0)
      cout << "Q1" << endl;
    else if(x < 0 && y > 0)
      cout << "Q2" << endl;
    else if(x < 0 && y < 0)
      cout << "Q3" << endl;
    else if(x > 0 && y < 0)
      cout << "Q4" << endl;
   
   
  
    return 0;
}

   
