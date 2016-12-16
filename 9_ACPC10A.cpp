#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen ("input.txt","r",stdin);
	//freopen ("output.txt", "w", stdout);
	long long int a,b,c;
	while(cin>>a>>b>>c){
		if(a==0 && b==0 && c==0) break;
		long long int cd= b-a;
		long long int cr= b/a;
		if(cd== c-b)
			cout<<"AP "<< c+ cd<<endl;
		else
			cout<<"GP "<< c * cr <<endl;
		
	}
	return 0;
}

