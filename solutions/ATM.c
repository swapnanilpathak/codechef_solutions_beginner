# include <stdio.h>

int main()
{
	int x;
	float y,reste;
	scanf("%d %f",&x,&y);
	if(x%5 == 0 && x+0.5<=y){
		reste = y-x-0.5;
		printf("\n %.2f",reste);
	}
	else
	{
		printf("\n %.2f",y);
		
	}
	return 0;
}
