#include<iostream>

using namespace std;

int reverse(int num){
	int rev=0;
	while(num!=0){
		rev=rev*10 + num%10;
		num=num/10;
		
	}
	return rev;
}

int main(){
	freopen ("input.txt","r",stdin);
	freopen ("output.txt", "w", stdout);
	
	int test;
	cin>>test;
	int num1, num2;
	int sum;
	while(test--){
		sum=0;
		cin>>num1>>num2;
		sum = reverse(num1)+ reverse(num2);
		cout<<reverse(sum)<<"\n";
	}
	return 0;	
}
