#include<stdio.h>
#include<stdlib.h>
#

int main(void){
	
	/*char a ='1';
    char b[2]={'1','2'}; 
    char c[]="12";
    
	printf("ascii=%d,%c,%x\n",a,a,a);
	printf("ascii=%d,%c,%x\n",b[1],b[1],b[1]);
	printf("ascii=%d,%c,%x\n",c[1],c[1],c[1]);*/
	
	char a[] = "12";
	char b[] = "34";
	char d[20];
	int a1,b1,c;
	
	a1=atoi(a);
	b1=atoi(b);
	c=a1*b1;
	
	itoa(c,d,3);
	
	printf("a1=%d,b1=%d,cc=%d\n",a1,b1,c);
	printf("%c,%c,%c,%c\n",d[0],d[1],d[2],d[3]);
	
	
}
