/*
 * Bai 6 : Tinh E^x
 */

#include <stdio.h>
#include <conio.h>
#include <math.h>

int giaithua(int n);
int main(void)
{
	float x, expX;
	int n;
	printf(" x = ");
	scanf("%f", &x);
	expX = 0;
	n = 0;
	
	while ( abs(pow(x, n)/giaithua(n) >= 0.00001))
	{
		expX += pow(x, n)/giaithua(n);
		n++;
	}
	
	printf("E^%-4.2f = %-6.6f", x, expX);
	
	getch();
	return 0;
}

int giaithua(int n)
{
	int i, gt;
	gt = 1;
	for (i = 1; i <= n; i++)
		gt *= i;
 	return gt;
}
