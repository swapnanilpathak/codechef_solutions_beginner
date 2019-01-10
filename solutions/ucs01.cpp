#include<iostream>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		long long int n;
		cin>>n;
		int boys[n];
		for(long long int i = 0;i<n;i++){
			cin>>boys[i];
		}
		for(long long j = n-2;j>=0;j--){
			if((boys[j+1]+1)<(boys[j])){
				int temp=0;
				temp = boys[j+1];
				boys[j+1]=boys[j];
				boys[j]=temp;
				
			}
		}
		for(long long k=0;k<n;k++){
			cout<<boys[k]<<" ";
		}
		cout<<endl;
		
	}
	return 0;
}