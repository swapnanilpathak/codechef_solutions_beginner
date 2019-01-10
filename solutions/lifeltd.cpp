#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		char logo[3][3]={};
		
		for(int i = 0;i<3;i++){
			for(int j = 0; j<3;j++){
				cin>>logo[i][j];
			}
		}
		if(logo[0][0]=='l'&&logo[1][0]=='l'&&logo[1][1]=='l'){
		cout<<"yes"<<endl;
	}else if(logo[0][1]=='l'&&logo[1][1]=='l'&&logo[1][2]=='l'){
		cout<<"yes"<<endl;
	}else if(logo[1][0]=='l'&&logo[2][0]=='l'&&logo[2][1]=='l'){
		cout<<"yes"<<endl;
	}else if(logo[1][1]=='l'&&logo[2][1]=='l'&&logo[2][2]=='l'){
		cout<<"yes"<<endl;
	}else{
		cout<<"no"<<endl;
	}
	}
	
	
	return 0;
}