#include<stdio.h>
int main(){
    int a=0,b=0,c=0;
    scanf("%d %d %d",&a,&b,&c);
    int s2=0,t=0;
    for(int i=1;i<=b;i++){
        s2= a+(i-1)*c;
        if(s2==b){
            t=1;
            break;
        }
			
        }
       if(t==1){
		   printf("YES");
	   }else{
		   printf("NO");
	   }
    }
    
   

