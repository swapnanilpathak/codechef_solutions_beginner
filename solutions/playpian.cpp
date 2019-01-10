#include<iostream>
#include<cstdio>
#include<math.h>
#include<string.h>
#include <cstring>

using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		string log;int a=0,b=0,flag=0;
		cin>>log;
		int length = log.size();
		/*for(char c : log){
			if(c=='A'){
				a++;
			}else if(c=='B'){
				b++;
			}
		}*/
		/*for(int i =0;i<length;i++){
			char c = log[i];
			if(c=='A'){
				a++;
			}else if(c=='B'){
				b++;
			}
		}
		if(a==b){
			cout<<"yes"<<endl;
			
		}else{
			cout<<"no"<<endl;
		}*/
		
		for(int i = 0;i< length;i++){
			if(log[2*i]=='A'&&log[2*i+1]=='A'){
				flag = -1;
				break;
			}else if(log[2*i]=='B'&&log[2*i+1]=='B'){
				flag=-1;
				break;
			}
		}
		if(flag==-1){
			cout<<"no"<<endl;
		}else{
			cout<<"yes"<<endl;
		}
		
	}
	
	
	return 0;
}