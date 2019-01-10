#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main(){
	int N;
	cin>>N;
	int A[N],B[N];
	map<int,int> lead;
	lead.insert(make_pair(1,0));
	lead.insert(make_pair(2,0));
	for(int i = 0;i<N;i++){
		cin>>A[i]>>B[i];
	}
	for(int i = 1; i<N;i++){
		A[i]=A[i-1]+A[i];
		B[i]=B[i-1]+B[i];
	}
	
	for(int i =0 ;i<N;i++){
		if(A[i]>B[i]){
			if(lead[1]<A[i]-B[i]){
				lead[1]=A[i]-B[i];
			}
		}
		else if(B[i]>A[i]){
			if(lead[2]<B[i]-A[i]){
				lead[2]=B[i]-A[i];
			}
		}
	}
	//cout<<lead[1]<<endl;
	//cout<<lead[2]<<endl;
	if(lead[1]>lead[2]){
		cout<<1<<" "<<lead[1]<<endl;
	}else{
		cout<<2<<" "<<lead[2]<<endl;
	}
	return 0;
}