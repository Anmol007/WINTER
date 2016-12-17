#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen ("input.txt","r",stdin);
	//freopen ("output.txt", "w", stdout);
	int n;
	cin>>n;
	int rect=0;
	for(int length=1; length<=n; length++){
		for(int width=length; width<=n; width++){
			if(length*width<=n) rect++;
			else break;
		}
	}
	cout<<rect;
	return 0;
}

