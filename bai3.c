/*
 * Bai 3 : Nhap 1 so va in so dao nguoc, vd : 1234 -> 4321
 */
 
#include <stdio.h>
#include <conio.h>

int main(void)
{
 	int num, r_digit;
	printf("Number : ");
	scanf("%d", &num);
	
	while (1)
	{
		r_digit = num % 10;
		printf("%d", r_digit);
		num /= 10;
		if (num == 0)
			break;	
	}
	
	getch();
	return 0;
}
