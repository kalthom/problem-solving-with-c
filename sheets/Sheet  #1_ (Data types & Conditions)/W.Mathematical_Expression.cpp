#include<iostream>
using namespace std;
 
void Kalthum_Muftah(){
  #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}
 
 
int main()
{   Kalthum_Muftah();
    int a,b,d;
    int result;
    char c,q;
    cin>>a>>c>>b>>q>>d;
 
    switch(c)
    {
      case '+': result=a+b ; (result == d ? cout<<"Yes" : cout<<result) ;
      break;
      case '-': result=a-b ; (result == d ? cout<<"Yes" : cout<<result) ;
      break;
      default : result=a*b ; (result == d ? cout<<"Yes" : cout<<result) ;
      break;
     
 
    }
  
    return 0;
}