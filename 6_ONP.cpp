#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen ("input.txt","r",stdin);
	//freopen ("output.txt", "w", stdout);
	
	vector<char> op;
	int test;
	cin>>test;
	char exp[401];
	while(test--){
		cin>>exp;
		int len=strlen(exp);
		for(int i=0; i<len; i++){
			if(exp[i]== ')'){
				cout<<op.back();
				op.pop_back();
		}
		else if(exp[i]>='a' && exp[i]<='z'){
			cout<<exp[i];
		}
		else if(exp[i]!='('){
			op.push_back(exp[i]);
		}
	}
	cout<<"\n";
}
	return 0;
}

