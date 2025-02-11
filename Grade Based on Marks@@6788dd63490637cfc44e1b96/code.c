// Your code here...
int main(){
    int marks;
    scanf("%d",&marks);
    if(marks>=90){
        printf("A");
    }else if(80<=marks&& marks<90){
        printf("B")
    }else if (70<=marks && marks<90){
        printf("C");
    }else if (60<=marks && marks<70){
        printf("d")
    }else{
        printf("F")
    }
    return 0;
}