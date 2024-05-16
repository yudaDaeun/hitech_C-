#include<stdio.h>

int main(void){
	int kor,math,eng,sum=0;
	float avg;
	kor=77;
	math=95;
	eng=100;
	sum=kor+math+eng;
	avg=(float)sum/3;
	printf("kor=%d,math=%d,eng=%d,sum=%d\n",kor,math,eng,sum);
	printf("average=%f\n",avg);	
	
	if(kor>=90&&kor<=100){
		printf("kor=%d\n",kor);
		printf("Level 'su'\n",kor);
	}
	else if(kor>=80&& kor<90){
		printf("kor=%d\n",kor);
		printf("Level 'u'\n");
     }
     else if(kor>=70&& kor<80){
	 printf("kor=%d\n",kor);
 	printf("Level 'mi'\n");
     }
     else if(kor>=60&& kor<70){
	 printf("kor=%d\n",kor);
	 printf("Level 'Yang'\n");
     }
     else{
	 printf("kor=%d\n",kor);
	 printf("Level 'Ga'\n");
	 }

	///////////////////////math//////////////////
	
		if(math>=90&&math<=100){
		printf("math=%d\n",math);
		printf("Level 'su'\n");
	}
	else if(math>=80&& math<90){
		printf("math=%d\n",math);
		printf("Level 'u'\n");
 }
 else if(math>=70&& math<80){
	printf("math=%d\n",math);
	printf("Level 'mi'\n");
}
 else if(math>=60&& math<70){
	printf("math=%d\n",math);
	printf("Level 'Yang'\n");
}
 else{
	printf("math=%d\n",math);
	printf("Level 'Ga'\n");
	}
	
	//////////////////////eng//////////////////////
	
	
		if(eng>=90&&eng<=100){
		printf("eng=%d\n",eng);
		printf("Level 'su'\n");
	 }
	 else if(eng>=80&& eng<90){
		printf("eng=%d\n",eng);
		printf("Level 'u'\n");
     }
     else if(eng>=70&& eng<80){
	 printf("eng=%d\n",eng);
	 printf("Level 'mi'\n");
     }
     else if(eng>=60&& eng<70){
	 printf("eng=%d\n",eng);
	 printf("Level 'Yang'\n");
     }
     else{
	 printf("eng=%d\n",math);
	 printf("Level 'Ga'\n");
 	}
	
}
