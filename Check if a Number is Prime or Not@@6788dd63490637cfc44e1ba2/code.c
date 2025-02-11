#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%1==0){
        printf("Prime");
    }else if(a%4==0|a%9==0){
        printf("Not Prime");
    }
    return 0;
}//