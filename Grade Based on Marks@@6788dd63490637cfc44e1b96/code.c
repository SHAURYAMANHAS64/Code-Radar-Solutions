// Your code here.
#include<stdio.h>
int main(){
    int marks;
    scanf("%d",&marks);
    if(marks>=90){
        printf("A");
    }else if(80<=marks && marks<90){
        printf("B");
    }else if (70<=marks && marks<90){
        printf("C");
    }else if (60<=marks && marks<70){
        printf("D");
    }else{
        printf("F");
    }
    return 0;
}