#include<stdio.h>
int main(){
    float s=0;
    scanf("%f",&s);
    float a=s/3;
    int t = a;
	float g = a-t;
	if(g<1 && g>0){
	    printf("NO");
	}else{
	    printf("YES");
	}
   
}