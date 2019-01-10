#include<iostream>

using namespace std;

int main(){
	int n = 0,even = 0, odd = 0;
	cin>>n;
	int soilders[n];
	for(int i = 0;i<n;i++){
		cin>>soilders[i];
	}
	for(int i = 0 ; i <n;i++){
		if(soilders[i]%2==0)
			even++;
		else{
			odd++;
		}
	}
	
	if(even > odd){
		cout<<"READY FOR BATTLE";
	}else{
		cout<<"NOT READY";
	}
	
	return 0;
}