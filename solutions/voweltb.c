#include<stdio.h>
int main(){
	char C;
	scanf("%C",&C);
	
	switch(C){
		case 'A':printf("Vowel");
		break;
		case 'E':printf("Vowel");
		break;
		case 'I':printf("Vowel");
		break;
		case 'O':printf("Vowel");
		break;
		case 'U':printf("Vowel");
		break;
		default:printf("Consonant");
		break;
	}
}