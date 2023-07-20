#include<stdio.h>
#include<math.h>
#define f(x) (x*exp(x*2))
int main(){
	int i,n;
	float l,u,h,sum=0,midsum=0,result;
	printf("enter the no of intervals :");
	scanf("%d",&n);
	printf("enter the lower and upper limit :");
	scanf("%f%f",&l,&u);
	h=(u-l)/n;
	sum=f(l)+f(u);
	for(i=2;i<n;i++){
		midsum=midsum+f(l+i*h);
	}
	sum=sum+2*midsum;
	result=(h/2)*sum;
	printf("the definite intrigal is %f",result);
	return 0;
}
