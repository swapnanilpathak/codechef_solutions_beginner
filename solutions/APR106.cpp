#include<iostream>
using namespace std;
int main(){
	int N=0,count=0;
	cin>>N;
	long long int A[N];
	for(int i =0; i<N;i++){
		cin>>A[i];
	}
	
	for(int j = N-1;j>0;j--){
	//	cout<<A[j]<<""<<A[j-1]<<endl;
		if(A[j]-A[j-1]>2){
			
			count++;
		}
	}
	
	if(count==1){
		cout<<"True"<<endl;
	}
	else {
		cout<<"False"<<endl;
	}

	return 0;
}