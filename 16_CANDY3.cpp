#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen ("input.txt","r",stdin);
	//freopen ("output.txt", "w", stdout);
	
	int test, children, i;
	long long  sum, candies;
	cin>>test;
	while(test--){
		cin>>children;
		sum = 0;
		for(i=0;i<children;i++)
		{
			cin>>candies;
			sum = (sum+candies) % children;
		}
		if(sum == 0) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
		
}

