#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen ("input.txt","r",stdin);
	//freopen ("output.txt", "w", stdout);
	int test;
	cin>>test;
	while(test--){
		int god;
		int mecha;
		cin>>god>>mecha;
		int x, y;
		int max_god=0;
		int max_mecha=0;
		int i,j;
		for(i=0; i<god; i++) {
			cin>> x;
			if(max_god<x) max_god=x;
		}
		for(j=0; j<mecha; j++){
			cin>>y;
			if(y>max_mecha) max_mecha=y;
		}
		
			if(max_god>=max_mecha) cout<<"Godzilla\n";
			else
			cout<<"MechaGodzilla\n";
		}
		
	
	return 0;
}

