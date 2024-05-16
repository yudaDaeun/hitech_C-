#include<stdio.h>
#include<windows.h>
int suma(int a1,int b1);
int suba(int a1,int b1);

int main(void){
	int k1,k2;
k1=	suma(30,40);

if(k1>0 && k1<10){
printf("Level 1 k1=%d\n",k1);
}

 else if(k1>=10 && k1<20);{
 printf("Level 2 k1=%d\n",k1);
}

 else if(k1>20 && k1<30);{
 printf("Level 3 k1=%d\n",k1);
}

 else{
  printf("Level 4 k1=%d\n",k1);
 }

/*int suma(int a1,int b1){
	int sum;
	sum=a1+b1;
	printf("a1=%d,b1=%d,sum=%d\n",a1,b1,sum);
	return a1;
}

int suba(int a1,int b1){
	int sub;
	sub=a1-b1;
	printf("a1=%d,b1=%d,sub=%d\n",a1,b1,sub);
    return b1;
}
/*
void multya(void){
	multy=a*b;
	printf("a=%d,b=%d,multy=%d\n",a,b,multy);
}
void divda(void){
	float diva;
	diva=(float)a/b;
	printf("a=%d,b=%d,divd=%4.2f\n",a,b,diva);

}*/
