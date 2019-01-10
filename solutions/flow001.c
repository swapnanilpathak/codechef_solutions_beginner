#include<stdio.h>
int main(){
	int n,a[1000],b[1000];
	scanf("%d",&n);
	int i = 0;
	for(i =0 ;i< n; i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i =0 ;i< n; i++){
		printf("%d\n",a[i]+b[i]);
	}
}
