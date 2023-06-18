#include<stdio.h>

 void main(){
    float x[10],y[10],p[10],f,f1=1,f2=0;
    int k,n,i,j=1;
    
    printf("Enter the no. of observations \n");
    scanf("%d",&n);
    printf("Enter the different values of x \n");
    for (i=1;i<=n;i++){
        scanf("%f",&x[i]);

    }
    
    printf("Enter the different values of y \n");
    for (i=1;i<=n;i++){
        scanf("%f",&y[i]);

    }

    f = y[1];
    printf("Enter the value of 'k'  in f(k) you want to evaluate \n");
    scanf("%d",&k);

    do {
        for (i=1;i<=n;i++){
            p[i] = (y[i+1] - y[i])/(x[i+j] - x[i]);
            y[i] = p[i];
        }
        f1 = 1;
        for (i=1;i<=j;i++){
            f1 *=(k -x[i]);
        }
        printf("The value of y is %f\n",y[1]);
        printf("The value of f1 is %f\n",f1);
        f2 += (y[1]*f1);
        printf("The value of f2 is %f\n",f2);
        n--;
        j++;

    }while(n!=1);
    f += f2;
    printf("f(%d)=%f",k,f);

    
 }