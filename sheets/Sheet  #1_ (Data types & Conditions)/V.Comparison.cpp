#include<iostream>
using namespace std;
 
void Kalthum_Muftah(){
  #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}
 
 
int main()
{   Kalthum_Muftah();
    int a,b;
    char c;
    cin>>a>>c>>b;
     
    switch(c)
{
    case '>':cout<<(a>b ? "Right" : "Wrong");
    break;
    case '<':cout<<(a<b ? "Right" : "Wrong");
    break;
    default :cout<<(a == b ? "Right" : "Wrong");
}
  
    return 0;
}

   
