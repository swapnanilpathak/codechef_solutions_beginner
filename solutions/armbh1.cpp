#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		long long int X =0,N=0,sum =0;
		cin>>X>>N;
		for(long i = X;i<N;i++){
			if(i%X==0){
				sum+=i;
			}
		}
		
		cout<<sum<<endl;
	}
	return 0;
}