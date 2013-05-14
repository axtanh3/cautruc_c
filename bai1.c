/*
 * Bai 1 : Tim max, min, tb cong cua 3 so a, b, c nhap vao tu ban phim
 */

#include <stdio.h>
#include <conio.h>

int main(void)
{
 	float a, b, c, max, min, tbc;
	int i;

	printf("a, b, c : ");
	scanf("%f%f%f", &a, &b, &c);
	
	max = (a > b) ? a : b;
	max = (c > max) ? c : max;
	min = (a > b) ? b : a;
	min = (min > c) ? c : min;
	tbc = (a + b + c)/3;
	
	printf(" Max : %3.2f \n Min : %3.2f \n TBC: %3.2f\n", max, min, tbc);
	
	getch();
	return 0;
}
