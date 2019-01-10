#include<bits/stdc++.h>

using namespace std;

int main(){
  int T;
  cin>>T;
  while(T--){
        long long num =0;
    cin>>num;
    int ld = num%10;
    int fd = 0;
    do{
        fd=num%10;
        num=num/10;
        
    }while(num!=0);


    cout<<ld+fd<<endl;
  }
    return 0;
}