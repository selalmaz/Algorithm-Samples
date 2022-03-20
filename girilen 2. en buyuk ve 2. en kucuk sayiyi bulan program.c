#include <stdio.h>


int main(int argc, char *argv[]) {
	
	float sayi,max1,max2,min1,min2;
	int n=0,toplam=0;
	
	printf("sayiyi giriniz: ");
	scanf("%f",&sayi);
	
	
	max1=sayi,max2=sayi,min1=sayi,min2=sayi;
	
	
	
	
	
	while(sayi>=0)
	{
		printf("sayiyi giriniz: ");
		scanf("%f",&sayi);
		
		if(sayi<0)
		{
			break;
		}
		n++;			
		toplam+=sayi;
	
		if(sayi>max2)
		{
			max2=sayi;
			
			if(sayi>max1)
			{
				max2=max1;
				max1=sayi;
			}
		}
		
		if(sayi<min2)
		{
			min2=sayi;
			
			if(sayi<min1)
			{
				min2=min1;
				min1=sayi;
			}
		}		
	}
		
		
	printf("en buyuk sayi: %.2f\n",max1);
	printf("2. en buyuk sayi: %.2f\n",max2);
	printf("en kucuk sayi: %.2f\n",min1);
	printf("2. en kucuk sayi: %.2f\n",min2);
	printf("ortalama: %.2f\n",toplam/(n+0.0));

	return 0;
}
