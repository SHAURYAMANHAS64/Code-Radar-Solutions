#include<stdio.h>
int main(){
    int a ,b;
    scanf("%d %d",&a ,&b);
    if(a+b>0){
        printf("Same Sign");
    }else if(a+b<0){
        printf("Same Sign");

    }else if(b+a>0){
        printf("Different Sign");
    }
    else{
        printf("Different Sign");
    }
    return 0;
}