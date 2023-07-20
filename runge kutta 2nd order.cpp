#include<stdio.h>
#define f(x,y) (-x*y)
int main(){
	float x0,y0,h,xn,yn,k,k1,k2;
	int i,n;
	printf("enter the initial condiation of x0 and y0 = ");
	scanf("%f%f",&x0,&y0);
	printf("enter the calculation point of xn = ");
	scanf("%f",&xn);
	printf("enter the no of step : ");
	scanf("%d",&n);
	h=(xn-x0)/n;
	printf("x0\ty0\tyn \n");
	for(i=0;i<n;i++){
		k1=h*(f(x0,y0));
		k2=h*(f((x0+h/2),y0+k1/2));
		k=(k1+2*k2)/6;
		yn=y0+k;
		printf("%0.4f\t%0.4f\t%0.4f\n",x0,y0,yn);
		x0=x0+h;
		y0=yn;
	}
	printf("at x=%0.2f the value of y=%0.3f\n",xn,yn);
	return 0;
}
