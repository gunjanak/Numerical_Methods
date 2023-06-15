/*Lagrange Interpolation*/
#include <stdio.h>
#define MAX 100
 int main (){
    float ax[MAX+1],ay[MAX+1],nr,dr,x,y=0;
    int i,j,n;
     printf("Enter the valueof n \n");
     scanf("%d",&n);
     printf("Enter the set of values\n");
     for (i=0;i<n;i++){
        scanf("%f%f",&ax[i],&ay[i]);
     }
     printf("Enter the value of x for which value of y is needed: ");
     scanf("%f",&x);

     for(i=0;i<=n;i++){
        nr=dr=1;
        for(j=0;j<=n;j++){
            if(j!=i){
                nr *= x-ax[j];
                dr *= ax[i]-ax[j];
            }
            
        }
        y += (nr/dr)*ay[i];
        
     }

     printf("When x=%4.1f y=%7.1f \n",x,y);
 }