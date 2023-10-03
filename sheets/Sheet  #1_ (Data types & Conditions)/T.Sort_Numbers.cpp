#include<iostream>
using namespace std;

void Kalthum_Muftah(){
  #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  #endif
}


int main()
{   Kalthum_Muftah();
    
    int num1,num2,num3;
    cin>>num1>>num2>>num3;

    if(num1 <= num2 && num1 <= num3)
    {
      cout<<num1<<"\n";
      cout<<min(num2,num3)<<"\n"<<max(num2,num3)<<"\n";
    }
    else if(num2 <= num1 && num2 <= num3)
    {
      cout<<num2<<"\n";
      cout<<min(num1,num3)<<"\n"<<max(num1,num3)<<"\n";
    }
    else if(num3 <= num1 && num3 <= num2)
    {
        cout<<num3<<"\n";
        cout<<min(num1,num2)<<"\n"<<max(num1,num2)<<"\n";
    }
    
    cout<<"\n"<<num1<<"\n"<<num2<<"\n"<<num3<<"\n";
    
    return 0;
}