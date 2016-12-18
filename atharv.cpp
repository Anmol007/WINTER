#include <iostream>
using namespace std;

int main() {
	int a,b,c,d;
	cin>>a>>b>>c;
	while(!(a==0 && b==0 && c==0))
	{
		if((b-a)==(c-b))
		{
			d=c+(b-a);
			cout<<"AP "<<d<<endl;
		}
		else if((b/a)==(c/b))
		{
			d=c*(b/a);
			cout<<"GP "<<d<<endl;
		}
		
		cin>>a>>b>>c;
	}
	// your code goes here
	return 0;
}
