#include <stdio.h>
#include <math.h>

double function(double);

int main(){
	double a,b,n,f,h,i,x,sum;
	printf("Enter the lower limit:\n");
	scanf("%lf",&a);
	printf("Enter the upper limit:\n");
	scanf("%lf",&b);
	printf("Enter the number of triangles:\n");
	scanf("%lf",&n);
	h=(b-a)/n;
	for(i=0;i<n;i++){
		x=a+(i*h);
		sum = sum + 2*function(x);
		//printf("%lf\n",sum);
	}
	sum = sum + function(a) + function(b);
	sum = sum * h/2;
	printf("The answer is %f\n", sum);
	return 0;
}

double function(double x){
	double exp;
	exp = (x*x*x)+(3*x);
	return exp;
}
