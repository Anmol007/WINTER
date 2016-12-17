#include<bits/stdc++.h>
using namespace std;
long long int arr[10000001];

long long int bytecoin(long long int n){
	if(n<=10000000) return arr[n];
	else return bytecoin(n/2)+bytecoin(n/3)+bytecoin(n/4);
}

int main(){
	freopen ("input.txt","r",stdin);
	//freopen ("output.txt", "w", stdout);
	long long int n;
	for(int i=0; i<=10000000; i++){
		if(i<=11) arr[i]=i;
		else arr[i]=arr[i/2]+arr[i/3]+arr[i/4];
	}
	while(cin>>n){
		cout<<bytecoin(n)<<endl;
	}
	return 0;
}

