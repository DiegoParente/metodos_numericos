#include<stdio.h>

double simpson(double a, double b, int steps, double (*f)(double)){
	double h = (b-a)/steps;
	double area = 0;	
	while(a<b){
		area += h*((*f)(a) + (*f)(a+h) + 4*(*f)(a + h/2))/6 ;
		a+=h;
	}
	return area;
}
