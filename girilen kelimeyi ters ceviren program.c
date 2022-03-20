#include <stdio.h>
#include <string.h>

void terscevir();
	

int main(){
	
	char a[50];
	
	printf("giriniz: ");
	scanf("%s",a);	
	
	terscevir(a);
	printf("%s",a);
	

	return 0;
	
}

	void terscevir(char dizi[]){
		
		int i,j,gecici,uzunluk;
		
		uzunluk=strlen(dizi);            																		
		for(i=0;i<uzunluk/2;i++)
		{
			gecici=dizi[i];
			dizi[i]=dizi[uzunluk-1-i];
			
			dizi[uzunluk-1-i]=gecici;	
		}
			
		
	}

	
	
