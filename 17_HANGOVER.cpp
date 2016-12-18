#include<bits/stdc++.h>
using namespace std;

char arr[1000001];

int isPalin(char *arr){
	int len=strlen(arr);
	int flag=-1;
	for(int i=0; i<=len/2; i++){
		if(arr[i] != arr[len-i-1]) {
			flag=0; break;}
	}
	
	if(flag==-1) return 1;
	else return 0;
}

void add(char *arr, int x){
	
	int i=strlen(arr)-1;
	while(1){
		if(arr[i--]<'9') {
		}arr[i++]++;
			
	}
}
int main(){
	freopen ("input.txt","r",stdin);
	//freopen ("output.txt", "w", stdout);
	
	float n;
	while(1){
		cin>>n;
		if(n==0.0) break;
		float count=2.0;
		float sum=0.0;
		while(1){
			sum=sum+1/count;
			if(sum>=n) break;
			count++;
		}
		cout<<count-1<<" card(s)"<<endl;
	}
	return 0;
}

