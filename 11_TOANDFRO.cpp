#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen ("input.txt","r",stdin);
	//freopen ("output.txt", "w", stdout);
	int test;
	char msg[201];
	while(cin>>test){
		if(test==0) break;
		
		cin>>msg;
		int len= strlen(msg);
		int cols=test;
		int rows= len/cols;
		char arr[rows][cols];
		int counter=0;
		for(int i= 0; i<rows;i++){
			//even rows ke lie left to right
			if(i%2==0)
				for(int j=0; j<cols; j++) arr[i][j]= msg[counter++];
			//odd rows ke lie right to left
			else
				for(int j=cols-1; j>=0; j--) arr[i][j]= msg[counter++];
		}
		
		//display
		for(int i=0; i<cols; i++) 
			for(int j=0; j<rows; j++) 
				cout<<arr[j][i];
				
		cout<<"\n";
	}
	return 0;
}

