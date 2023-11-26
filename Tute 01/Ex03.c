#include<stdio.h>
int sum(int n);
int main(){
	int n = 0;
	
	printf("Enter number :");
	scanf("%d",&n);
	
	printf("Sum :%d",sum(n));
	
}

int sum(int n){
	if(n>=1){
		return n + sum(n-1);
	}
	else{
		return 0;
	}
}
