#include<stdio.h>
int i;

int main(void){
	int kor[5]={90,75,72,89,51};
	int math[5]={97,65,72,89,42};
	int eng[5]={87,59,71,82,48};
	int sum[5];
	float avr[5];
	
	for(i=0;i<5;i++){
		sum[i]=kor[i]+math[i]+eng[i];
		avr[i]=(float)sum[i]/3;
		printf("sum[%d]=%d,avr[%d]=%3.1f\n",i,sum[i],i,avr[i]);
	}
		printf("\n");
	
	for(i=0;i<5;i++){
	 	if(avr[i]>90 && avr[i]<100){
        printf("avr[%d]=%3.1f,Level is Su\n",i,avr[i]);
        }
      else if(avr[i]>80 && avr[i]<90){
      	printf("avr[%d]=%3.1f,Level is Woo\n",i,avr[i]);
	  }
	  else if(avr[i]>70 && avr[i]<80){
      	printf("avr[%d]=%3.1f,Level is Mi\n",i,avr[i]);
	  }
	  else if(avr[i]>60 && avr[i]<70){
      	printf("avr[%d]=%3.1f,Level is Yang\n",i,avr[i]);
	  }
	  else{
      	printf("avr[%d]=%3.1f,Level is Ga\n",i,avr[i]);
	  }
}
}

	 
	
