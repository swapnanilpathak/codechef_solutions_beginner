#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		long N = 0,yes=0,no=0;
		cin>>N;
		int voters[N];
		for(long i = 0; i<N;i++){
			cin>>voters[i];
			
		}
		for(long i = 0; i<N;i++){
			if(voters[i]==1){
				yes++;
			}else if(voters[i]==-1){
				no++;
			}
			
		}
		if(yes>=no){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
		
	}
	return 0;
}