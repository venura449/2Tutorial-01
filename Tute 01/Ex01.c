#include<stdio.h>

int main(){
	
	int mark1,mark2;
	
	printf("Enter mark 01 :");
	scanf("%d",&mark1);
	printf("Enter mark 02 :");
	scanf("%d",&mark2);
	
	printf("Averange of two marks is :%.2f",(float)(mark1 + mark2)/2);
}
