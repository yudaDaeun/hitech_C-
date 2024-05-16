#include<stdio.h>

int scores[4][3] = {98, 87, 78},
{85, 92, 88},
{90, 88, 95},
{75, 80, 82}     
    char names[4] = {"영희", "철수", "재석", "영자"};


    
   /* float sum, avr;

    for (int i = 0; i < 4; i++) {
        sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += scores[i][j];
        }
        avr = sum / 3;
        printf("%s의 평균은 %.1f 입니다\n", names[i], avr);
    }

    return 0;
}


*/

int main(void){
	int sum;
	float avr;
	
	     ///각 학생의 평균
	    for(i=0;i<4;i++){
	    	for(j=0;j<3;j++){
	    		sum=score[i,j];
	    		avr= sum/3;
	    		printf("%c의 평균은 %3.1f 입니다\n",name[i],avr)
			}
	    	
		}

}
    	
    /*	//과목별 평균   
     int subject(int a){
     int sum;
	 float avr;
	 	sum=younghee[a]+chelsu[a]+jaesuck[a]+youngja[a];
		avr=(float)sum/4;
		
		return avr;
	 
	 
}
	    //반평균 
     /* void avr(int i){
	    	int sum;
	    	float avr;
    	sum=younghee[i]+chelsu[i]+jaesuck[i]+youngja[i];
		avr=(float)sum/12;
		printf("반평균은 %3.1f 입니다\n",avr);
		}*/
		
		
	
    

	
	/*각학생당 평균
	과목별 평균
	반평균(배열및 함수)
	점수에 따른 등급(배열 및 함수 )*/

