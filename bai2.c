/*
 * Bai 2 : Giai HPT bac nhat 2 an
 */
 
#include <stdio.h>
#include <conio.h>

int main(void)
{
	float a, b, c, d, e, f, detA, x, y;
	
	printf(" Trong :\n ax + by = e\n cx + dy = f\n a, b, c, d, e, f = ");
	scanf("%f%f%f%f%f%f", &a ,&b ,&c ,&d ,&e ,&f);
	
	detA = a*d - b*c;
	
	if (detA != 0)
	{
		if (e == 0 && f == 0)
		{
			printf("Nghiem tam thuong :\n");
			printf("x = 0 , y = 0!\n");	
		}
		else
		{
			x = (e*d - b*f)/detA;
			y = (a*f - c*e)/detA;
			
			printf("He co nghiem duy nhat :\n");
			printf(" x = %3.2f , ", x);
			printf("y = %3.2f\n", y);
		}
		
	}
	else if (detA == 0 && e == 0 && f == 0)
		printf("Vo so nghiem!\n"); 
		
	getch();
	return 0;
}
