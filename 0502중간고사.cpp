#include<stdio.h>

int younghee[3]={98,87,78};
int chelsu[3]={78,85,67};
int jaesuck[3]={68,95,87};
int youngja[3]={95,80,67};
int i;
int class_avr();

int main(void){
	
	//////////////////�л��� ���/////////////// 
	int sum = younghee[0]+younghee[1]+younghee[2];
	float avr = sum/3;
	printf("������ ����� %3.1f �Դϴ�\n",avr);
	
	int sum1 = chelsu[0]+chelsu[1]+chelsu[2];
	float avr1 = sum1/3;
	printf("ö���� ����� %3.1f �Դϴ�\n",avr1);
	
	int sum2 = jaesuck[0]+jaesuck[1]+jaesuck[2];
	float avr2 = sum2/3;
	printf("�缮�� ����� %3.1f �Դϴ�\n",avr2);
	
	int sum3 = youngja[0]+youngja[1]+youngja[2];
	float avr3 = sum3/3;
	printf("������ ����� %3.1f �Դϴ�\n",avr3);
	
	printf("\n");
	//////////////���� ���//////////////////
	
	for(i=0;i<3;i++){
	int sum4 = younghee[i]+chelsu[i]+jaesuck[i]+youngja[i];
	float avr4 = sum4 /4;
  
}
	printf("\n");
	
	int class_avr();
	printf("������� %3.1f �Դϴ�\n",class_avr());
	return 0;
	
} 

	///////////////����� (�迭 �� �Լ�)////////// 
	
	int class_avr(){
		
	float avr_younghee = (younghee[0] + younghee[1] + younghee[2]) / 3;
    float avr_chelsu = (chelsu[0] + chelsu[1] + chelsu[2]) / 3;
    float avr_jaesuck = (jaesuck[0] + jaesuck[1] + jaesuck[2]) / 3;
    float avr_youngja = (youngja[0] + youngja[1] + youngja[2]) / 3;

    float class_avr = (avr_younghee + avr_chelsu + avr_jaesuck + avr_youngja)/ 4;
    
    return avr_younghee;

	} 
	
	 
