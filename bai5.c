/*
 * Bai 5 : Nhap 2 ma tran vuong A[n,n], B[n,n]. Tinh tong & tich roi in ra
 */
 
#include <stdio.h>
#include <conio.h>

int main(void)
{
 	int n, i, j, k;
	
	printf("n= ");
	scanf("%d", &n);
	
	float a[n][n], b[n][n], s[n][n], p[n][n];
	
	//Nhap ma tran a[n,n]
	for(i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("a[%d,%d] = ", i, j);
			scanf("%f", &a[i][j]);
			
		}
	}
	
	//Nhap b[n,n]
	for(i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("b[%d,%d] = ",i, j );
			scanf("%f", &b[i][j]);
		}
	}
	
	//Tinh s[n,n] : s[i,j] += a[i,k] * b[k,j] (k < n; k++)
	for(i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			s[i][j] = 0;
			for (k = 0; k < n; k++)
				s[i][j] += a[i][k] * b[k][j];
		}
	}
	
	//Tinh p[n,n] : p[i,j] = a[i,j] + b[i,j]
	for(i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			p[i][j] = a[i][j] + b[i][j];
	
	//In s[n,n]
	printf("\nMa tran tich: \n\n");
	for(i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%-6.2f ", s[i][j] );
		printf("\n");
	}
	printf("\n");
	
	//In p[n,n]
	printf("Ma tran tong: \n\n");
	for(i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%-6.2f", p[i][j]);
		printf("\n");
	}
	
	getch();
	return 0;
}
