#include<stdio.h>
int main(){
	int d=0,h=0,m=0,s=0;
	scanf("%d",&d);
	scanf("%d",&h);
	scanf("%d",&m);
	scanf("%d",&s);
	printf("%d seconds",(d*24*60*60+h*60*60+m*60+s));
	
}