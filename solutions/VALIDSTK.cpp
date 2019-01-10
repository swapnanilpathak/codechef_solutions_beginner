#include <iostream>
#include <stack>
#include <algorithm>


using namespace std;
int main()
{
    long long int n=0;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        int line[n],flag =0;
        stack<int> s;
        for(int i = 0; i< n;i++){
            cin>>line[i];
        }
        for(int i = 0; i< n;i++){
            if(line[i]==1){
                s.push(line[i]);
            }else if(line[i]==0){
                if(s.empty()){
                    flag = 1;
                    break;
                }
                s.pop();
            }
        }
        if(flag == 1){
            cout<<"Invalid"<<endl;
        }else{
            cout<<"Valid"<<endl;
        }
    }
    return 0 ;
}
