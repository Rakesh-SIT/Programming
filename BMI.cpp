#include <stdio.h>

int main(void) {
	// your code goes here
	int t,m,h;
	int BMI;
	scanf("%d",&t);
	while(t>0){
	    scanf("%d %d",&m,&h);
	    BMI = m/(h*h);
	    if(BMI<=18){
	        printf("1");
	    }
	    else if(BMI>=19 && BMI<=24){
	        printf("2");
	    }
	    else if(BMI>=25 && BMI<=29){
	        printf("3");
	    }
	    else{
	        printf("4");
	    }
	    printf("\n");
	    t--;
	}
	return 0;
}