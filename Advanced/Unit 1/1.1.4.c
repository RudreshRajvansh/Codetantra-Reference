#include<stdio.h>
#include<math.h>
int main(){
    float side1=0,side2=0,side3=0;
    scanf("%f",&side1);
    scanf("%f",&side2);
    scanf("%f",&side3);
    float t=(side1+side2+side3)/2;
    float t2=t*(t-side1)*(t-side2)*(t-side3);
    float area = pow(t2,0.5);
    printf("%0.2f",area);
   
}