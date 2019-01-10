#include <bits/stdc++.h> 
using namespace std; 


int gcdof2(int a, int b) 
{ 
	if (a == 0) 
		return b; 
	return gcdof2(b % a, a); 
} 

 
int gcdofn(int arr[], int n) 
{ 
	int result = arr[0]; 
	for (int i = 1; i < n; i++) 
		result = gcdof2(arr[i], result); 

	return result; 
} 


int main() 
{ 
	int T;
    cin>>T;
    while(T--){
        int n=0;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int gcd = gcdofn(A,n);
        for(int i=0;i<n;i++){
            cout<<A[i]/gcd<<" ";
        }
        cout<<endl;
    } 
    return 0;
} 
