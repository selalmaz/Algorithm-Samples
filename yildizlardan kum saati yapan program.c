#include <stdio.h>


int main() {
	
	
	int sayi,i,j;
	
	printf("kum saatinin boyutunu giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		
		for(j=sayi;j>=i;j--)
		{
			printf("*");
		}
	
			for(j=sayi-1;j>=i;j--)
			{
				printf("*");
			}
		
		printf("\n");
	}
		
	for(i=1;i<=sayi-1;i++)
	{
		
		for(j=sayi;j>=i;j--)
		{
			printf(" ");
		}
		
		for(j=1;j<=i+1;j++)
		{
			printf("*");
		}
		
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	 
	
	
	return 0;
}
