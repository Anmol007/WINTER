#include<iostream>
using namespace std;

int main(){
	freopen ("input.txt","r",stdin);
	//freopen ("output.txt", "w", stdout);
	
	int test;
	cin>>test;
	int n;
	while(test--){
		cin>>n;
		int denom=5;
		int ans=0;
		while(denom<=n){
			ans += n/denom;
			denom *= 5; 
		}
		cout<<ans<<endl;
	}
	return 0;
}

