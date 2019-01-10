#include<bits/stdc++.h>

using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n=0,count=0;
        cin>>n;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                count++;
            }
        }
        (count==2)?(cout<<"yes"<<endl):(cout<<"no"<<endl);
    }
    return 0;
}