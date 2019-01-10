#include<bits/stdc++.h>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
        long long num =0,count=0;
        int d=0;
    cin>>num;
   
    do{
        d=num%10;
        if(d==4){
            count++;
        }
        num=num/10;
        
    }while(num!=0);


    cout<<count<<endl;
  }
    return 0;
}