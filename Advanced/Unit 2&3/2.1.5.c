#include<stdio.h>
void main(){
	double n1 =0,n2=0;
	char o;
	scanf(" %c",&o);
	scanf("%lf %lf",&n1,&n2);
	switch(o){
		case '+':
		printf("%.1lf",n1+n2);
		break;
		case '-':
		printf("%.1lf",n1-n2);
		break;
		case '*':
		printf("%.1lf",n1*n2);
		break;
		case '/':
		printf("%.1lf",n1/n2);
		break;
		default:
		printf("Invalid");
	}
}