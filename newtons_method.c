#include <stdio.h>
#include <math.h>
#define PI 3.141592

//y = 2x^2 + 3x
//y' = 4x + 3

int main(void)
{
	int i = 0, n = 0, n_max;
	double x, eps, delta, y, y1;
	
	printf("x = ");
	scanf("%lf", &x); //ｘの初期値を代入
	printf("n_max = ");
	scanf("%d", &n_max); //繰り返し回数を指定
	printf("eps = ");
	scanf("%lf", &eps); //真値との差を指定
	
	
	do 
	{
		//y = x*x - x - 6;
		//y1 = 2*x - 1;
		y = -x*x + 2*x + 8; //関数を設定
		y1 = -2*x + 2; //一階微分を設定
		delta = y / y1 * -1; //deltaの計算
			
		printf("delta = %lf\n", delta);
		x = x + delta;
		printf("n = %3d, x = %lf\n", n, x);
		n++;
	}while(n <= n_max && delta > eps | delta < -eps); //指定した真値との差以下になるまで、または指定した繰り返し回数になるまで繰り返す
	if(n == n_max)
	{
		printf("fault\n"); //指定した回数で真値に近づかなかったらfaultと表示
	}else
	{
		printf("answer x = %lf\n", x);
	}
	
	
	
	return 0;
}






