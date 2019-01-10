#include<iostream>

using namespace std;

int main(){
	int N = 0,digit = 0, counter = 0;
	cin>>N;
	
	do{
		
		N = N/10;
		counter++;
	}while(N!=0);
	if(counter == 1){
		cout<<1<<endl;
	}
	else if(counter == 2){
		cout<<2<<endl;
		
	}else if(counter == 3){
		cout<<3<<endl;
	}else{
		cout<<"More than 3 digits";
	}
	
	return 0;
}