#include <stdio.h>
#include <stdlib.h>


int main() {
	
	
	int sayi,i,j;
	
	printf("sayi giriniz: ");
	scanf("%d",&sayi);
	

		for(i=1;i<=sayi;i++)
		{
			for(j=1;j<=sayi;j++)
			{
				if( ((sayi%2==0) && (j==sayi/2 || j==sayi/2+1 || i==sayi/2 || i==sayi/2+1)) 
				|| (sayi%2==1) && (j==sayi/2+1 || i==sayi/2+1) )
				printf("1");
				
				else
				printf("0");
			}
			printf("\n");
		}		
	
	
	
	
	
	
	
	return 0;
}
