#include<iostream>

using namespace std;

int main(){
	int T = 0;
	cin>>T;
	while(T--){
	int n,digit=0,sum=0;
	cin>>n;
	do{
		digit = n % 10;
		n = n/10;
		sum = sum + digit;
		
	}while(n!=0);
	
	cout<<sum<<endl;
	}
	
	return 0;
}