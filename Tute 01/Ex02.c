#include<stdio.h>



int main(){
	int distance;
	float total;
	
	printf("Enter distance :");
	scanf("%d",&distance);
	
	if(distance <= 30){
		total = distance * 50.00;
	}
	else if(distance >30){
		total = 30 * 50.00;
		total += (distance -30) * 40.00;
	}
	
	printf("Your total Charge is %.2f",total);
	
}
