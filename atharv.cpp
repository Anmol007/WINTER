#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
	int a,b;
	cin>>a>>b;
	if(b==0)
	{
		cout<<1<<endl;
		continue;
	}
	if(a%10==0 || a%10==1 || a%10==5 || a%10==6)
	{
	cout<<(a%10)<<endl;
	continue;
	}
	switch(b%4)
	{
		case 0:
		 if(a%10==2 || a%10==4 || a%10==8)cout<<6<<endl;
			else if(a%10==3 || a%10==7 || a%10==9)cout<<1<<endl;
		break;	
		case 1:
		cout<<a%10<<endl;
		break;	
		case 2:
		 cout<<(a*a)%10;
		break;			
		case 3:
			cout<<(a*a*a)%10<<endl;
		break;	
	}	
	}	
	return 0;
}
