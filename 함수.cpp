#include<stdio.h>
void test1(void);
int test2(int a, int b);

int main(void){
	int sum;
	test1();
	sum=test2(2,3);
	printf("sum=%d\n",sum);
	return 0;
}

void test1(void){
	int i;
	for(i=0;i<10;i++){
	printf("answer is %d\n",i);
}
}

int test2(int a,int b){
	int sum;
	sum = a+b;
	return sum;
}
/*void test1(void);
void test2(int k);
int test3(int k);

int main(void){
	
	printf("test1\n");
	test1();
	test2(3);
	test2(4);
	test2(5);
	printf("sum=%d\n",test3(10));
	return 0;
}
void test1(void){
	int i=0;
	printf("i=%d\n",i);

}

void test2(int k){
	int i;
		for(i=1;i<10;i++)
		printf("%d*%d=%d\n",k,i,i*k);
	}

int test3(int k){
	int sum=10;
	sum=k*sum;
	return sum;
}*/
