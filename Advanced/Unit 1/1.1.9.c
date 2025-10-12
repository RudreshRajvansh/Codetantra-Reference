#include<stdio.h>
#include<math.h>
int main(){
	float n1=0,n2=0;
	scanf("%f %f", &n1, &n2);
	float t = n1 - n2;
	if(fabs(t)<=0.5){
		printf("Approximate number");
	}else{
		printf("Not an Approximate number");
	}
	return 0;
	
}