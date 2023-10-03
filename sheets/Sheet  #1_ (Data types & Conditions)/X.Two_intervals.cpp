
#include<iostream>
using namespace std;
 
void Kalthum_Muftah(){
  #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}
 
 
int main()
{   Kalthum_Muftah();
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
 
   int x =max(l1,l2), y=min(r1,r2);
   
 
   if(x>y)
     cout<<-1;
   else
     cout<< x <<" " << y ;
  
    return 0;
}