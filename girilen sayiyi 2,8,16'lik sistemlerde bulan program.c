#include <stdio.h>
#include <string.h>


void binary();

int main(){
	
	int sayi;
	int *x;
	char a;
	
	a:printf("Sayi girin: ");
	scanf("%d",&sayi);
	x=&sayi; 
	
	printf("\n");
	binary(sayi);
	printf("\nOctal (8): %o\n",*x);
	printf("Hexadecimal (16): %x",*x);
	printf("\n\n");
	b:printf("devam edelim mi (e/E - H/h)?: ");
	scanf("%s",&a);
	
	if(a=='E' || a=='e')
	{
		goto a;
	}
	
	else if(a=='H'|| a=='h')
	printf("seans sona erdi.");
	
	else
	{
		scanf("%c",&a);
		if(a!='e'&&a!='E'&&a!='h'&&a!='H')
			goto b;
	}
	
		return 0;
		
	}

	void binary(int sayi){
		
		int dizi[50]={0};
		int i,b=0;
	
	for(i=0;i<50;i++)
	{
		dizi[i]=sayi%2;
		sayi=sayi/2;
		b++;
		if(sayi<1)
		break;
	}            
	
	printf("Binary (2): ");
	
		if(dizi[b]==1)
		{
			for(i=b;i>=0;i--)		
			printf("%d",dizi[i]);	
	    }	
		
		if(dizi[b]==0)
		{
			for(i=b;i>=1;i--)		
			printf("%d",dizi[i-1]);	
	    }	
				
	}
	
