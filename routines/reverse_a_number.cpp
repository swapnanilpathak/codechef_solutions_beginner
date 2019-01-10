#include <iostream>
int reverseNum(int num){
	int digit;
	int rev =0;
	do{
	
		digit = num%10;
		
		rev = (rev*10) + digit;
		num = num/10;
	}while(num!=0);
	
	return rev;
}
int main(){
	int a = 123;
	std::cout<<reverseNum(a);
}