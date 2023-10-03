
#include<iostream>
using namespace std;
 
void Kalthum_Muftah(){
  #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}
 
 
int main()
{   Kalthum_Muftah();
    
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
     cout<<i<<endl;
  
    return 0;
}