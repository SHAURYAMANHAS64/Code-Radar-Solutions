 #include <stdio.h>
 
 int main(){
    int i,j,n;
    scanf("%d",n);
    for(int i=1;i<=n;i++){
        if(i%2!=0) a=1;
        else a =0;
        for(int j=1;j<=i;j++){
            printf("%d",a);
            if(a==0)a=1;
            else a = 0;
        }
    }
    return 0;
 }