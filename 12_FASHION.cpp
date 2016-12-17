#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen ("input.txt","r",stdin);
	//freopen ("output.txt", "w", stdout);
	
	int test;
	cin>>test;
	int n;
	while(test--){
		cin>>n;
		int answer=0;
		int male[n];
		int female[n];
		for(int i=0; i<n; i++) cin>>male[i];
		for(int i=0; i<n; i++) cin>>female[i];
		sort(male, male+n);
		sort(female, female+n);
		for(int i=0; i<n; i++) answer+= male[i]*female[i];
		cout<<answer<<endl;
	}
	return 0;
}

