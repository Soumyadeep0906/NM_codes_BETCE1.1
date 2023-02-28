#include<stdio.h>
#include<math.h>
float f(float x){
    return pow(x,3);
}
float bis(float a,float b){
    return (a+b)/2;
}
int main() {
    int n,i=0;
    float a,b,x;
    printf("Enter max iteration : ");
    scanf("%d",&n);
    do{
        printf("\nStarting boundary : ");
        scanf("%f %f",&a,&b);
        if(f(a)*f(b)>0){
            printf("\nRoots are invalid.");
            continue;
        }
        else{
            printf("\nRoots are between %f and %f",a,b);
            break;
        }
    }while(1);
    x=bis(a,b);
    while (i<n)
    {
        if(f(x)*f(a)<0){
            b=x;
        }
        if(f(x)*f(b)<0){
            a=x;
        }
        printf("\nIteration = %d  Root = %f",i,x);
        i++;
    }
    printf("\nRoot = %f   Iteration = %d",x,--i);
    return 0;
}