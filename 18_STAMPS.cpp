#include<bits/stdc++.h>
using namespace std;

int bucket[1000001];
int main(){
	freopen ("input.txt","r",stdin);
	//freopen ("output.txt", "w", stdout);
	
	int test;
	cin>>test;
	int stamps, friends;
	int max, min;
	for(int t=1; t<=test; t++){
		max=0; min=1000001;
		memset(bucket, 0, sizeof(bucket));
		cin>>stamps>>friends;
		int x;
		for(int i=0; i<friends; i++){				//input
			cin>>x;
			bucket[x]++;
			if(max<=x) max=x;
			if(min>=x) min=x;
		}
		
		int count=0; int sum=0;
		int success=0;
		for(int i=max; i>=min; i--){		//traversing bucket
			while(bucket[i]>0){
				sum=sum+i;
				bucket[i]--;
				count++;
				if(sum>=stamps) {
					success=1; break;
				}
			}
			if(sum<stamps) continue; else break;
		}
		if(success)
			cout<<"Scenario #"<<t<<":\n"<<count<<endl;
		else
			cout<<"Scenario #"<<t<<":\n"<<"impossible\n";
		
	}
	
	return 0;
}

