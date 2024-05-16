#include<stdio.h>

struct point{
	float x;
	float y;
};


int main(void){
	//struct point a,b;
	float sum1,sum2;
	struct point a={3.0,3.3};
	struct point b={4.1,4.0};
 
/*	a.x=3.0;
	a.y=3.3;
	b.x=4.1;
	b.y=4.0;*/
	
	sum1=a.x+a.y;
	sum2=b.x+b.y;
	
	printf("sum1=%3.1f,sum2=%3.1f\n",sum1,sum2);
}
