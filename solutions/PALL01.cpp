#include <iostream>
using namespace std;
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
	int T;
    cin>>T;
    while(T--){
        int n=0;
        cin>>n;
        int r = reverseNum(n);
        (n==r)?(cout<<"wins"<<endl):(cout<<"losses"<<endl);
    }
    return 0;
}