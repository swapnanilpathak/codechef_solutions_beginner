#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		long long int a,b,flag=0,result=0;
		cin>>a>>b;
		for(long long int i = 1;i<=b;i++){
			if(i%a==0&&b%i==0){
				flag=1;
				result=i;
				break;
			}
		}
		if(flag==1){
			cout<<result<<endl;
		}else{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}