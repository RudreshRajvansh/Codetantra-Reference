#include<stdio.h>
int main(){
	int wt=0;
	float ht =0.00;
	scanf("%d",&wt);
	scanf("%f",&ht);
	float bmi =wt/(ht*ht);
	printf("%0.2f",bmi);
}