#include<stdio.h>
#include<math.h>
float f(float x){
    return x;
}
int main(){
    int n;
    float a,b,h,sum=0;
    printf("Enter number of intervals : ");
    scanf("%d",&n);
    printf("\nEnter start and end points : ");
    scanf("%f %f",&a,&b);
    h=(b-a)/(float)n;
    sum=(f(a)+f(b))/2;
    for(float i=a+h;i<b;i++){
        sum=sum+f(i);
    }
    sum=h*sum;
    printf("\n Area covered = %f",sum);
    return 0;
}