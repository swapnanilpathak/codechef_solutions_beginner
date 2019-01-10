#include<iostream>

using namespace std;

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
if(a+b+c==d||a+b+d==c||a+c+d==b||b+c+d==a){
	cout<<1;
}else{
	cout<<0;
}
	return 0;
}