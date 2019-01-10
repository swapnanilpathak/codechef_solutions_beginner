#include<stdio.h>

int main(){
	int l,b,a,p;
	scanf("%d %d",&l, &b);
	
	a = l*b;
	p=2*(l+b);
	if(a > p){
		printf("Area\n");
		printf("%d", a);
	}
	else{
			printf("Peri\n");
		printf("%d", p);
	}
}