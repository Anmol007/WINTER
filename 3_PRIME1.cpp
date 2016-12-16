#include<bits/stdc++.h>

using namespace std;
void build_sieve(int, int *);
void segmented(int , int, int*);

vector<int> primes;

void build_sieve(int n, int *PRIME){
	for(int i=2; i<=n; i++){
		if(PRIME[i]==0){
			//cout<<i<<"\n";
			primes.push_back(i);
			for(int j=i*2; j<= n/2; j=j+i){
				PRIME[j]=-1;
			}
		}
	}
}

void segmented(int m, int n, int *PRIME){
	
	int upper_cap = floor(sqrt(n) )+ 1;
	int temp[n-m+1];
	memset(temp, 0, sizeof(temp));
	
	
	for(int i=0; ; i++){
		
		int least_multiple;
		if(primes[i]>=upper_cap) break;
		if (primes[i] >= m) least_multiple = primes[i]*2;
            else least_multiple = m + ((primes[i] - m % primes[i]) % primes[i]);
		
		for(int j = least_multiple; j<=n; j=j+primes[i]){
			temp[j-m]=-1;
		}
	}
	
	for(int i= m; i<=n ; i++){
		if(temp[i-m]==0 && i!=1) cout<<i<<endl;
	}
}

int main(){
	int limit= floor(sqrt(1000000000)) + 1;
	int PRIME[limit+1];
	memset(PRIME, 0, sizeof(PRIME));
	PRIME[0]=-1; PRIME[1]=-1;
	build_sieve(limit, PRIME);
	
	freopen ("input.txt","r",stdin);
	//freopen ("output.txt", "w", stdout);
	
	int test;
	cin>>test;
	int n, m;
		
	while(test--){
		
		cin>>m>>n;
//		if(n<=limit){
//			for(int i=m; i<=n; i++){
//				if(PRIME[i]==0) cout<<i<<endl;
//			}
//		}
//		
//		else if(n>limit && m<=limit){
//			for(int i=m; i<=limit; i++){
//				if(PRIME[i]==0) cout<<i<<endl;
//			}
//			
//			segmented(limit+1, n, PRIME);
//		}
//		else {
			segmented(m, n, PRIME);
		//}
		
		if(test) cout<<endl;
	}
	return 0;
}
