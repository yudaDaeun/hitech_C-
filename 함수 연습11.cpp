#include<stdio.h>
 int main(void){
 	int a1=1,a2=2,a3=3,a4=4;
 	int a10[10];//a10[0]~a10[9]
 	int a20[10]={1,2,3,4,5,6,7,8,9,0};//a20[0]=1,a20[1]=2 ~ s20[9]=0
 	int sum,sum1;
	
 	a10[0]=1;
 	a10[1]=2;
 	sum=a10[0]+a10[1];
 	sum=a20[0]+a20[1];
 	printf("sum=%d\n,",sum,sum1);
 }
