#include<iostream>
#include<cmath>
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
       int t;cin>>t;
while(t--){
	int n,ones=0;
	cin>>n;
		while(n>0)
		{
		ones+= (n%2);
		n/=2;	
		}
		int dec=0;
		for(int i=0;i<ones;i++){
			dec+=pow(2,i);
		}
	cout<<dec<<"\n";	
	}
 
  
    return 0;
}

   
