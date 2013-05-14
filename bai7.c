/*
 * Bai 7 : Nhap day, sap xep tang dan va in ra
 */

#include <stdio.h>
#include <conio.h>
 
void insert_sort(int arr[], int size);
int main(void)
{
	int i, n;
	
	printf("So phan tu: n = ");
	scanf("%d", &n);
	
	int arr[n];
	
	//Nhap mang
	for(i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	//sap xep (insertion sort) + in ra
	insert_sort(arr, n);

	getch();
	return 0;
}


void insert_sort(int arr[], int size)
{
    int i, j, k, element[size];
    element[0] = arr[0];
    for (i = 1; i < size; i++)
        for (j = 0 ; j < size; j++) 
	    {
	        element[j] = arr[i]; 
	        k = i;
	        while (k > 0 && arr[k-1] > element[j])
	        {
	            arr[k] = arr[k-1];
	            k = k - 1;
	        }
	        arr[k] = element[j];
	    }
    for (i = 0; i < size; i ++)
        printf("%d ", arr[i]);
    printf("\n");
}
