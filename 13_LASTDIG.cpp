#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen ("input.txt","r",stdin);
	//freopen ("output.txt", "w", stdout);
	int a;
	int b;
	int test;
	int ans;
	cin>>test;
	while(test--){
		cin>>a>>b;
		a=a%10;
		if(a==0) cout<<0<<endl;
		else if(b==0) cout<<1<<endl;
		else if(a==5) cout<<5<<endl;
		
		else{
			//cout<<b%4;
			switch(b%4){
				case 0: 
					cout<<(a%2==0? 6 : 1)<<endl; break;
				case 1:
					cout<<a << endl; break;
				case 2:
					cout<<(a*a) %10 <<endl; break;
				case 3:
					cout<<(a*a*a)%10 <<endl; break;
			}
		}
	}
	
	return 0;
}

