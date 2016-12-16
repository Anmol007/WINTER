#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen ("input.txt","r",stdin);
	//freopen ("output.txt", "w", stdout);
	
	int test;
	cin>>test;
	
	int x, y;
	while(test--){
		cin>>x>>y;
		if(x==y){
			if(x%2==0) cout<<x*2<<endl;
			else cout<<x*2-1<<endl;
		}
		else if((x-y)==2){
			if(x%2==0) cout<<x+y<<endl;
			else cout<<x+y-1<<endl;
		}
		else{
			cout<<"No Number"<<endl;
		}
	}
	return 0;
}

