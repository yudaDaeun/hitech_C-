#include<stdio.h>
 int main(void){
  int kor[5]={80,85,88,90,95};
  int eng[5]={87,88,88,99,89};
  int math[5]={77,78,98,99,89};
  char test[5]={'1','a','3','&','*'}; //6행,7행 모두가능  
  char test1[]="1a3&*";
  int sum[5];
  float avr[5];
  int i = 0;
  for(i=0;i<5;i++){

  printf("test[%d]=%c,%d\n",i,test[i],test[i]);
    printf("test[%d]=%c,%d\n",i,test1[i],test1[i]);
}
 }
