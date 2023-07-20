#include<stdio.h>
#include<math.h>
#define f(x) (x*exp(x*2))
int main(){
	int i,n;
	float l,u,h,sum=0,odsum=0,evsum=0,result;
	printf("enter the intervals \n");
	scanf("%d",&n);
	printf(" enter the lower and upper limit \n");
	scanf("%f%f",&l,&u);
	h=(u-l)/n;
	sum=f(l)+f(u);
	for(i=1;i<n;i+=2){
		odsum=odsum+f(l+i*h);	
	}
	for(i=2;i<n;i+=2){
		evsum=evsum+f(l+i*h);
	}
	sum=sum+4*odsum+2*evsum;
	result=(h/3)*sum;
	printf("the approximate definite intrigal is %f",result);
	return 0;
	
	
}
