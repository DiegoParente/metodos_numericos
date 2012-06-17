#include <math.h>

double colebrook(double R, double K){
	double x1 = K*R*log(10)/18.574;
	double x2 = log(R*log(10)/5.02);
	
	double f = x2 - 0.2;
	
	double e = log(x1+f - 0.2)/(1+x1+f);
	f -= (1+x1+f+e/2) * e * (x1+f) / ( 1 + x1 + f + e * ( 1 + e/3 ) );
	
	f = 1.151292546497022842/f;
	f*=f; 
}