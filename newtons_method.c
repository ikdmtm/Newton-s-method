#include <stdio.h>
#include <math.h>

#define PI 3.141592

double get_x1(double x2, double x3)
{
	return (10.0 - x2 - x3)/5;
}


//y = 2x^2 + 3x
//y' = 4x + 3

int main(void)
{
	int i = 0, n = 0, n_max;
	double x, eps, delta, y, y1;
	
	printf("x = ");
	scanf("%lf", &x);
	printf("n_max = ");
	scanf("%d", &n_max);
	printf("eps = ");
	scanf("%lf", &eps);
	
	
	do 
	{
		//y = x*x - x - 6;
		//y1 = 2*x - 1;
		y = -x*x + 2*x + 8;
		y1 = -2*x + 2;
		delta = y / y1 * -1;
			
		printf("delta = %lf\n", delta);
		x = x + delta;
		printf("n = %3d, x = %lf\n", n, x);
		n++;
	}while(n <= n_max && delta > eps | delta < -eps);
	if(n == n_max)
	{
		printf("fault\n");
	}else
	{
		printf("answer x = %lf\n", x);
	}
	
	
	
	return 0;
}






