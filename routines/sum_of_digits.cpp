#include<iostream>

using namespace std;

int main(){
	int n = 123,digit=0,sum=0;
	
	do{
		digit = n % 10;
		n = n/10;
		sum = sum + digit;
		
	}while(n!=0);
	
	cout<<sum;
	
	return 0;
}