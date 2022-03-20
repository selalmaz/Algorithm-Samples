#include <stdio.h>


int main() {
	
	
	
	int sayi[8];
	int i,tadet=0,cadet=0;
	
	for(i=0;i<8;i++)
	{
		printf("Sayi Gir: ");
		scanf("%d",&sayi[i]);
		
		if(sayi[i]%2==0)
			cadet++;
		else
			tadet++;	
	}
	
	int tek[tadet],cift[cadet],t=0,c=0;
	
	for(i=0;i<8;i++)
	{
		if(sayi[i]%2==0)
			{
				cift[c]=sayi[i];
				c++;
			}
		else
		{
				tek[t]=sayi[i];
				t++;
		}	
			
	}
	
	printf("tek sayilar: ");
	for(i=0;i<tadet;i++)
		printf("%d ",tek[i]);
		
		printf("\n");
		
	printf("cift sayilar: ");
	for(i=0;i<cadet;i++)
		printf("%d ",cift[i]);
	return 0;
}
