
#include<cstdio>
int main(){
	int t;
	long long a=0,b=0;
	scanf("%d",&t);
	while(t--){
		scanf("%ld %ld",&a,&b);
		if(a==b){
			printf("=\n");
		}else if(a<b){
			printf("<\n");
		}else if(a>b){
			printf(">\n");
		}
		
	}
	return 0;
}