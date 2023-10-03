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
    int t,n,max=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n>=max)
		max = n;
	}
	cout<<max;
  
    return 0;
}

   
