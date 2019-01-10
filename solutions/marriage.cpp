#include<iostream>

using namespace std;

int main(){
	
	int a=0,b=0;
	cin>>a>>b;
	if(a>b){
		cout<<a-b;
	}else if(a<b){
		cout<<b-a;
	}else{
		cout<<0;
	}
	return 0;
}