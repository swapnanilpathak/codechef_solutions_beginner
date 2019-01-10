#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        long long a=0,b=0,c=0;
        cin>>a>>b>>c;
        if(a>b&&a>c){
            cout<<max(b,c)<<endl;
        }
        else if(b>a&&b>c){
            cout<<max(a,c)<<endl;
        }
        else if(c>b&&c>a){
            cout<<max(a,b)<<endl;
        }
    }
    return 0;
}