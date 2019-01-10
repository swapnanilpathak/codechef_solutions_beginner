#include <iostream>
#include <cstdio>
#define ARBITRARY 10;
using namespace std;
bool sexychef(long a , long b);
int main(){
	int T = 0;
	scanf("%d",&T);
		while(T--){
		long a,b;
		
		scanf("%ld %ld",&a,&b);
		
		if(sexychef(a,b)==true){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
}
	return 0;
}

bool sexychef(long a , long b){
	int d = ARBITRARY;
	if(a==b){
		return true;
	}
	else{
		a = a +d;
		b = b + d-1;
	}
	
	if(a == b){
		return true;
	}else{
		sexychef(a,b);
	}
}