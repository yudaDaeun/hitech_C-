#include<stdio.h>

int younghee[3]={98,87,78};
int chelsu[3]={78,85,67};
int jaesuck[3]={68,95,87};
int youngja[3]={95,80,67};
int[] avg(void);

int main(void){
    int i;
	int j;
	int sum[i];
	float avr;
	char* subject[3]={'kor','eng','math'};
	
	int avg[] = avg();
	for(j=0;j<3;j++){
		 printf("%s의 평균은 %3.1f 입니다\n",subject[j],avg[j]);
		}
}

 int[] avg(void){
 	int i;
	int j;
	int sum[i];
	int avr[i];
	
	for(i=0;i<3;i++){
		sum[i]=younghee[i]+chelsu[i]+jaesuck[i]+youngja[i];
		avr[i]=sum[i]/4;
      }
      
      return avr;
  }
		/*for(j=0;j<3;j++){
		 printf("%s의 평균은 %3.1f 입니다\n",subject[j],avr[i]);
		}*/
	

