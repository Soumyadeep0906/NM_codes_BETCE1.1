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
    float a,b,e,x,c;
    printf("Enter max iteration : ");
    scanf("%d",&n);
    printf("\nerror = ");
    scanf("%f",&e);
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
    do{
        if(f(x)*f(a)<0){
            b=x;
        }
        if(f(x)*f(b)<0){
            a=x;
        }
        printf("\nIteration = %d  Root = %f",i+1,x);
        c=bis(a,b);
        if(fabs(c-x)<e){
            printf("\nRoot = %f  Max iteratuions = %d",x,i+1);
            return 0;
        }
        x=c;
        i++;
    }while(i<n);
    printf("\nRoot = %f   Iteration = %d",x,--i);
    return 0;
}