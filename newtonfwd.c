#include<stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main() {
    float arr[10][11],x,h,p,y,px=1;
    int i,j,n,ch=30;
    printf("Enter no. of data : ");
    scanf("%d",&n);
    printf("\nEnter the values of x and y : \n");
    for(i=0;i<n;i++){
        scanf("%f %f",&arr[i][0],&arr[i][1]);
    }
    //forming diff table
    for(j=2;j<=n;j++){
        for(i=0;i<n+1-j;i++){
            arr[i][j]=arr[i+1][j-1]-arr[i][j-1];
        }   
    }
    //printing table
    printf("\nDifference table : \n");
    for(i=0;i<n;i++){
        for(j=0;j<=n-i;j++){
            printf("%.4f",arr[i][j]);
        }
        printf("\n");
    }
    printf("Enter the value of x :");
    scanf("%f",&x);
    h=arr[1][0]-arr[0][0];
    p=(x-arr[0][0])/h;
    y=arr[0][1];
    for(i=1;i<n;i++){
        px=px*(p-(i-1));
        y=y+arr[0][i+1]*px/fact(i);
    }
    printf("\n value of y = %f",y);
    return 0;

}