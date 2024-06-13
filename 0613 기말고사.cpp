#include<stdio.h>

int younghee[3]={98,87,78};
int chelsu[3]={78,85,67};
int jaesuck[3]={68,95,87};
int youngja[3]={95,80,67};

int kor[4]={98,78,68,95};
int engilsh[4]={87,95,95,80};
int math[4]={78,67,87,67};

float cla_avr;
int class_avr();
int sor;


int main(void){
	
	//////////////////학생별 평균/////////////// 
	int sum = younghee[0]+younghee[1]+younghee[2];
	float avr = sum/3;
	printf("영희의 평균은 %3.1f 입니다\n",avr);
	
	int sum1 = chelsu[0]+chelsu[1]+chelsu[2];
	float avr1 = sum1/3;
	printf("철수의 평균은 %3.1f 입니다\n",avr1);
	
	int sum2 = jaesuck[0]+jaesuck[1]+jaesuck[2];
	float avr2 = sum2/3;
	printf("재석의 평균은 %3.1f 입니다\n",avr2);
	
	int sum3 = youngja[0]+youngja[1]+youngja[2];
	float avr3 = sum3/3;
	printf("영자의 평균은 %3.1f 입니다\n",avr3);
	
	printf("\n");
	


	//////////////과목별 평균//////////////////
	
	
	int subject_sum = kor[0]+kor[1]+kor[2]+kor[3];
	float subject_avr = subject_sum/4;
	printf("국어의 평균은 %3.1f 입니다\n",subject_avr);
	
	
	int subject_sum1 = engilsh[0]+engilsh[1]+engilsh[2]+engilsh[3];
	float subject_avr1 = subject_sum1/4;
	printf("영어의 평균은 %3.1f 입니다\n",subject_avr1);
	
	
	int subject_sum2 = math[0]+math[1]+math[2]+math[3];
	float subject_avr2 = subject_sum2/4;
	printf("수학의 평균은 %3.1f 입니다\n",subject_avr2);
	
	printf("\n");
	
    class_avr();
    printf("반평균은 %3.1f 입니다\n",cla_avr);
    
  /*  sor(kor[0]);
    printf("level is c",result);*/
  
} 

	///////////////반평균 (배열 및 함수)////////// 
	
	int class_avr(){

	float class_sum = (younghee[0] + younghee[1] + younghee[2]+chelsu[0] + chelsu[1] + chelsu[2]+jaesuck[0] + jaesuck[1] + jaesuck[2]+youngja[0] + youngja[1] + youngja[2]);
    float cla_avr = class_sum/12;
    
    return cla_avr;

	} 
	
	
	
	////// 점수에 따른 과목별 등급 계산  
/*	
	int sor(int a){
			
	if(a=90 && a<100){
		printf("level is A");
}

 else if(a>=80 &&a<90){
printf("level is B");
}

 else if(a>=70 && a<80){
printf("level is C");
}

 else if(a>=60 && a<70){
 printf("level is D");
}
 else{
  printf("level is E");
 }

return result;

}*/
		



	
	 
