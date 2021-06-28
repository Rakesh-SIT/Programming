#include<stdio.h>
int main(){
    int flag=0,t;
    long int i=0,count;
    char s[100000];
    scanf("%d",&t);
    while(t--){
        count=0;
        flag=0;
        scanf("%s",s);
        for(i=0;s[i]!='\0';i++){
            if(s[i]=='1'){
                flag=1;
            }
            if(flag==1 && s[i]=='0'){
                count++;
                flag=0;
            }
        }
        if(s[i-1]=='1'){
            count++;
        }
        printf("\n%d",count);
    }
}
