#include <stdio.h>
#include <math.h>

double function(double);
double function_derivative(double);

int main(){
	double i=0,x=0,f,f1,x1;
	do{
		f=function(x);
		f1=function_derivative(x);
		x1=x-(f/f1);
		double d=fabs(x1-x);
		if(d < 0.0005 && d>-0.0005){
			break;
		}
		x=x1;
		i++;
	}while(1 && i<50);
	printf("The root from Newton Raphson method is %f\n",x1);
	return 0;
}

double function(double x){
	double exp;
	exp = (x*x*x)+(3*x)-2;
	return exp;
}

double function_derivative(double x){
	double exp_d;
	exp_d = (3*x*x)+3;
	return exp_d;
}
