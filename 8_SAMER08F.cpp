#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen ("input.txt","r",stdin);
//	freopen ("output.txt", "w", stdout);
	int n;
	int ans;
	cin>>n;
	while(n!=0){
		ans=0;
		for(int i=1; i<=n; i++){
			ans += i*i;
		}
		cout<<ans<<endl;
		cin>>n;
	}
	return 0;
}

