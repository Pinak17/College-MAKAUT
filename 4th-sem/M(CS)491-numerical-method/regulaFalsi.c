#include <stdio.h>
#include <math.h>

double func(double);

int main(){
	double a0,b0;
	printf("Enter the lower limit:\n");
	scanf("%lf",&a0);
	printf("Enter the upper limit:\n");
	scanf("%lf",&b0);
	if(func(a0)*func(b0) >= 0){
		return 0;
	}
	double x0,a1,b1,x1,i;
	x0=a0;a1=a0;b1=b0;
	while(1){
		x1=(a1*func(b1)-b1*func(a1))/(func(b1)-func(a1));
		if(fabs(x1-x0) < 0.0001){
			printf("The root from regula Falsi method is: %lf\n",x1);
			break;
		}
		if(func(a1)*func(x0) < 0){
			a1=a0;b1=x1;
		} else if(func(x0)*func(b0) < 0){
			a1=x1;b1=b0;
		}
		x0=x1;
	}
	return 0;
}

double func(double x){
	double exp;
	exp = x*x+5*x-3;
	return exp;
}
	
