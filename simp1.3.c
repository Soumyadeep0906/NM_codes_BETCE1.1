#include<stdio.h>
#include<math.h>
float f(float x){
    return (x);
}
int main(){
    int n;
    float a,b,h,sum=0;
    printf("Enter number of intervals : ");
    scanf("%d",&n);
    if(n%2==0){
    printf("\nEnter start and end points : ");
    scanf("%f %f",&a,&b);
    h=(b-a)/(float)n;
    sum=(f(a)+f(b));
    float i = a+h;
    for (int c=1; c<n; c++)
    {
        i = a + c*h;
        if(c%2!=0){
            sum=sum+4*f(i);
        }
        else
            sum=sum+2*f(i);
    }
    sum=(h*sum)/3;
    printf("\n Area covered = %f",sum);
    }
    else
    printf("\nSimpson 1/3 method inapplicable");
    return 0;
}