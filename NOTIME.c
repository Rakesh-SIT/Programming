#include <stdio.h>
#include<stdbool.h>

int main(void) {
	// your code goes here
	int n,h,x,i;
	int a[100];
	bool flag=0;
	scanf("%d %d %d",&n,&h,&x);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
	    if(a[i]+x>=h){
	        printf("\nYES");
	        flag=1;
	        break;
	    }
	    else{
	        continue;
	    }
    }
    if(flag!=1){
        printf("\n NO");
    }
	return 0;
}