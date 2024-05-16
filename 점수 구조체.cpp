#include<stdio.h>
#include<string.h>

struct stscore{//아이디,이름,국영수 점수 저장 
int id;
char name[10];
int eng;
int math;
int kor;
int avr;
};


int main(void){
int i ;

struct stscore s[3]={ 
	12345,"chelsu",90,88,80,////아이디,이름,점수
	12346,"younghee",44,85,98,
	12347,"minsu",78,98,58
};


for(i=0;i<3;i++){
	s[i].avr=[i].kor+s[i].math+s[i].eng;
}

for(i=0;i<3;i++){
if(strcmp("younghee"==s[i].name)==0){
	printf("younghee,avr=%f",s[i].avr);
}
}
}
