#include<stdio.h>
#include<math.h>
#define f(x) (x*x*x)-4*x+1
int main(){
	float x0,x1,x2,f0,f1,f2,e;
	int step=1;
	up:
		printf("enter two initial guesses \n");
		scanf("%f%f",&x0,&x1);
		printf("enter the tolarable error \n");
		scanf("%f",&e);
		f0=f(x0);
		f1=f(x1);
		if(f0*f1>0.0){
			printf("incorrect initial guess \n");
			goto up;
			
		}
		printf("step \t \tx0 \t \tx1 \t \tx2 \t \tf(x2)\n");
		do{
			x2=(x0+x1)/2;
			f2=f(x2);
			printf("%d\t %f \t %f \t %f \t %f \n",step,x0,x1,x2,f2);
			if(f0*f2<0){
				x1=x2;
				f1=f2;
			}
			else{
				x0=x2;
				f0=f2;
			}
			step=step+1;
			
		}
		while(fabs(f2)>e);
		printf("the root is : %f",x2);
}
