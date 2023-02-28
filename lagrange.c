#include<stdio.h>
double lag(int n,double x,double X[],double Y[]){
    double f,sumn=0;
    for(int i=0;i<n;i++){
        f=Y[i];
        for(int j=0;j<n;j++){
            if(i!=j){
                f*=((x-X[j])/(X[i]-X[j]));
            }
        }
        sumn+=f;
    }
    return sumn;
}

int main() {
    int n;
    double X[n],Y[n],x;
    printf("Enter no. of terms : ");
    scanf("%d",&n);
    printf("\nEnter the values at x and y :\n");
    for(int i=0;i<n;i++){
        scanf("%lf %lf",&X[i],&Y[i]);
    }
    printf("\nEnter the value of x : ");
    scanf("%lf",&x);
    printf("Value of y = %lf",lag(n,x,X,Y));
    return 0;
}