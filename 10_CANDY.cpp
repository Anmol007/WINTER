#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen ("input.txt","r",stdin);
	//freopen ("output.txt", "w", stdout);
	int packets;
	int sum;
	int moves;
	while(cin>>packets){
		if(packets==-1) break;
		sum=0;
		int candies[packets];
		//if using vector don't use cin>>candies[i]
		//declare vector<int> candies[packets] then above would work
		for(int i=0; i<packets; i++){
			cin>>candies[i];
			sum= sum+candies[i];
		}
		if(sum % packets !=0) cout<<"-1"<<endl;
		else{
			int equal =  sum/packets;
			int moves=0;
			for(int i=0; i<packets; i++){
				moves = moves + (candies[i] > equal ? candies[i]-equal : 0);  	
			}
			cout<<moves<<endl;
		}
		
			
		}
	
	return 0;
}

