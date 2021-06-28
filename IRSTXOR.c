#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
	int t;
	long int c,a,b,res;
	int d;
	scanf("%d",&t);
	while(t--){
	   scanf("%ld",&c);
	   d = (int)(log10(c)/log10(2) + 1);
	   a = (long int)(pow(2,d-1) - 1);
	   b = a^c;
	   res = (long int)(a*b);
	   printf("%ld",res);
	   printf("\n");
	}
	return 0;
}