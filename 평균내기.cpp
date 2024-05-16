#include<stdio.h>
#include<windows.h>
void avra(float kor,float math,float eng){
	void prt (float avr);
	int main(void);
	avra(80,90,70);
	avra(50,61,45);
	avra(78,80,70);
	return 0;
}
 void avra(float kor,float math,float eng){
 	float sum;
 	sum=(kor+math+eng)/3;
 	printf("kor=%d,math=%d,eng=%d\n",kor,math,eng,sum)
 	prt(sum)
 }

void prt(float avr){
if(average>=90 && average<100){
printf("Level SU , average=%d\n",average);
}

 else if(average>=80 && average<90){
 printf("Level Uoo , average=%d\n",average);
}

 else if(average>=70 && average<80){
 printf("Level Mi , average=%d\n",average);
}

 else if(average>=60 && average<70){
 printf("Level Yang , average=%d\n",average);
}
 else{
  printf("Level Ga , average=%d\n",average);
 }

}
int avr(int kor,int math, int eng){
	int avr;
	avr= (kor+math+eng)/3;
	printf("kor=%d,math=%d,eng=%d\n",kor,math,eng,avr);
	return avr;
}

