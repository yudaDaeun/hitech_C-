#include<stdio.h>

int main(void){
	int A,B;
	A=1;014
	B=1;
	////////////////////or/////////////
	if(A==0  &&  B==0){
	printf("A=%d,B=%d,A+B=%d\n,",A,B,A|B);
	}
   
   else {
   printf("A=%d,B=%d,A+B=%d\n",A,B,A|B);
   }
////////////////and/////////////////
	if(A==1  &&  B==1){
	printf("A=%d,B=%d,A&B=%d\n,",A,B,A&B);
	}
   
   else {
   printf("A=%d,B=%d,A&B=%d\n",A,B,A&B);
   }
    //////////exor///////////////
   
   	if(A==B){
	printf("A=%d,B=%d,AexB=%d\n,",A,B,0);
	}
   
   else {
   printf("A=%d,B=%d,AexB=%d\n",A,B,1);
   }
    
}
