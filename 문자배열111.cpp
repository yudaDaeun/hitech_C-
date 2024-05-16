#include<stdio.h>
#include<stdlib.h>

int main(void){
	char b[6]="123";
	char c[]="123.45";
    int i,sum,sum1;
    float sum2;
    
   sum = (b[0]-48)*100+(b[0]-48)*10+(b[0]-48)*1;
   sum1=atoi(b);
   sum2=atof(c);
   printf("b[0]=%d\n",b[0]);
   printf("b[1]=%d\n",b[1]);
   printf("b[2]=%d\n",b[2]);
   printf("sum=%d\n",sum);
   printf("sum1=%d\n",sum1);
   printf("sum1=%5.2f\n",sum2);
    /*for(i=0;i<5;i++){
    printf("a[%d]=%c,b[%d]=%c\n",i,a[i],i,b[i]);   

 for(i=0;i<4;i++){*/
 	
 
}

