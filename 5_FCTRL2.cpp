#include<bits/stdc++.h>
using namespace std;

int ans[10000001];

int multiply(int *ans, int n){
	int carry=0;
	int mul;
	int res;
	int i;
	for(i=0; ans[i]!=-1; i++){
		mul=(n*ans[i]) + carry;
		res= mul%10;
		ans[i]=res;
		carry= mul/10;
	}
	if(carry!=0){
		while(carry!=0){
			ans[i++]=carry%10;
			carry=carry/10;
		}
	}
	return i;
}
int main(){
	freopen ("input.txt","r",stdin);
	//freopen ("output.txt", "w", stdout);
	int test;
	cin>>test;
	int n;
	int end;
	while(test--){
		cin>>n;
		memset(ans, -1, sizeof(ans));
		ans[0]=1;
		for(int i=1; i<=n; i++){
			end = multiply(ans, i);
		}
		
		for(int i=end-1; i>=0; i--){
			cout<<ans[i];
		}
		cout<<endl;
	}
	return 0;
}

