#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) (x*x*x)-4*x+1
#define g(x) 3*(x*x)-4
int main(){
	float x0,x1,f0,f1,g0,e;
	int step,n;
	printf("enter two initial guesses : ");
	scanf("%f%f",&x0,&x1);
	printf("enter tolarable error :");
	scanf("%f",&e);
	printf("enter no of ineration :");
	scanf("%d",&n);
	printf("\n step\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
	do{
		g0=g(x0);
		f0=f(x0);
		if(g0==0.0){
			printf("mathematical error \n");
			exit(0);
		}
		else{
			x1=x0-f0/g0;
			printf("%d\t\t%f\t\t%f\t\t%f\t\t%f\n",step,x0,f0,x1,f1);
			x0=x1;
			step=step+1;
			if(step>n){
				printf("no convergent \n");
				exit(0);
			}
			
		}f1=f(x1);
		
		
	}
	while(fabs(f1)>e);
	printf("the root is : %f",x1);
	
}
