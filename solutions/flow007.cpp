#include <iostream>
using namespace std;
long long reverseNum(long long num){
	int digit;
	long long rev =0;
	do{
	
		digit = num%10;
		
		rev = (rev*10) + digit;
		num = num/10;
	}while(num!=0);
	
	return rev;
}
int main(){
	int T;
    cin>>T;
    while(T--){
        long long n=0;
        cin>>n;
        cout<<reverseNum(n)<<endl;
    }
    return 0;
}