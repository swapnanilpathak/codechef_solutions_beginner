#include<iostream>
#include<cstdio>
#include<math.h>
#include<string.h>
#include <cstring>

using namespace std;

int main(){
	int T;
	cin>>T;
    cin.ignore(1000, '\n');
	while(T--){
		
            string quote;int flag =0;
           getline(cin , quote);
            string n = "101";
            string n2 = "010";
            int length = quote.size();
            if((length==3&&quote[0]=='1'&&quote[1]=='0'&&quote[2]=='1')||length==3&&quote[0]=='0'&&quote[1]=='1'&&quote[2]=='0'){
                flag =1;
            }


            if (quote.find(n) != string::npos||quote.find(n2) != string::npos) {
               
                flag = 1;
            }


        if(flag==1){
			cout<<"Good"<<endl;
		}else{
			
            cout<<"Bad"<<endl;
		}
		}
		
	return 0;	
	}
	
	
	
