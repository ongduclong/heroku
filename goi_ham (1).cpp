#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
	{
		int temp=*x;
		*x=*y;
		*y=temp;
	}
	
void bubbleSort(int n, int *ptr)
	{
		int i,j;
		for(i=0;i<n-1;i++){
			for(j=0;j<n-1-i;j++){
				if(*(ptr+j)>*(ptr+j+1)){
					swap(&ptr[j],&ptr[j+1]);
				}
			}
		}
	}
	
void insertionSort(int n, int arr[])
	{
		int i,j,tmp;
		for(i=1;i<n;i++)
		{
			tmp=arr[i];
			j=i-1;
			while (j >= 0 && tmp>arr[j] ){
        		arr[j+1]=arr[j];	
				j--;
			}
			arr[j+1]=tmp;
		}
	}
		
void  displayResult(int n, int *ptr)
	{
		for(int i=0;i<n;i++){
			printf("%d ", ptr[i]);
		}
	}
int main()
{
	int n,arr[100];
	printf("Nhap vao so phan tu cua mang: \n");
	scanf("%d",&n);
	printf("Nhap so:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	bubbleSort(n,arr);
	printf("\nBubblesort tang dan : ");
	displayResult(n,arr);
	printf("\nInsertionSort giam dan: ");
	insertionSort(n,arr);
	displayResult(n,arr);
	
	
	return 0;
}


