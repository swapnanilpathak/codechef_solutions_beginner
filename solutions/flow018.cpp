#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        unsigned long long int n=0,f=1;
        cin>>n;
        for(long long int i = 1; i<=n; i++){
            f*=i;
        }

        cout<<f<<endl;
    }
}