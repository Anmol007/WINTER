#include<bits/stdc++.h>
using namespace std;

int isValid(char a, char b){
	int alpha;
	alpha= 10 * (a-'0') + (b-'0');
	if(alpha>9 && alpha <=26 && a!='0') return 1;
	else return 0;
}

int main(){
	freopen ("input.txt","r",stdin);
	//freopen ("output.txt", "w", stdout);
	char code[5001];
	while(1){
		cin>>code;
		if(code[0]=='0') break;
		int len= strlen(code);
		int dp[len];
		memset(dp, 0, sizeof(dp));
		dp[0]=1; 
		
		for(int i=1; i<len; i++){
				if(code[i]-'0'!=0 ){
					dp[i]=dp[i-1];
				}
				if(isValid(code[i-1], code[i])){
					dp[i]=dp[i]+ dp[i-2<0? 0: i-2];
				}
		
	}
		cout<<dp[len-1]<<endl;
	}
		return 0;
	}
	


