#include<stdio.h>
#define n 5
void findTriplets();
int main()
{
	int array[n],sum,i;
	printf("Enter the elements in the array :-");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("sum is :-");
	scanf("%d",&sum);
	printf("Triplets are  :-");
	findTriplets(array,sum);
}
void findTriplets(int *array,int sum)
{
	int i,j,k;
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(array[i]+array[j]+array[k]==sum)
				{
					printf("{%d,%d,%d}",array[i],array[j],array[k]);
				}
			}
		}
	}
}
