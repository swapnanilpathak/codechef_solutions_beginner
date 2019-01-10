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
	
    
        int A[] = {10,20,30,40};
        int n = sizeof(A)/sizeof(int);

        int ans = gcdofn(A,n);

        cout<<ans<<endl;
    
    return 0;
} 
