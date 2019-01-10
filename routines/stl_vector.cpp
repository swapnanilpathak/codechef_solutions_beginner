#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n=0,num=0;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    cout<<v.size()<<endl;

    for(vector<int>::iterator i = v.begin();i != v.end();i++){
        cout<<*i<<endl;
    }
    v.clear();
    cout<<v.size()<<endl;

}