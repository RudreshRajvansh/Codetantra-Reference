#include<stdio.h>
void main(){
	int l=0,n=0;
	scanf("%d %d",&l,&n);
	if(l<=23 && (n>=500 && n<=1000)){
		printf("Take Medicine");
	}else{
		printf("Don't take Medicine");
	}
}

