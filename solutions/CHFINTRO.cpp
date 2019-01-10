#include<iostream>

using namespace std;

int main(){
	int N=0, r=0;
	int rating = 0;
	cin>>N>>r;
	for(int i = 0; i< N; i++){
		cin>>rating;
		if(rating<r){
			cout<<"Bad boi"<<endl;
		}else{
			cout<<"Good boi"<<endl;
		}
	}
	return 0;
}