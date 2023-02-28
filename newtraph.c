#include<stdio.h>
#include<math.h>
float f(float x){
    return (x*x-9*x);
}
float fder(float x){
    return (2*x-9);
}
int main(){
    int n,i;
    float x[200];
    printf("enter max iterations : ");
    scanf("%d",&n);
    printf("\nEnter x0 : ");
    scanf("%f",&x[0]);
    for(i=1;i<=n;i++){
        x[i]=x[i-1]-f(x[i-1])/fder(x[i-1]);
        printf("\nIteration : %d  x%d=%.2f",i,i,x[i]);
    }

    printf("\nFinal root = %f",x[n]);
    return 0;
}
