#include <stdio.h>


int main(){



	int N,K;

	printf("kisi sayisiniz giriniz: ");
	scanf("%d",&N);
	printf("para miktarini giriniz: ");
	scanf("%d",&K);
	
	
	if(N<0 || K<=0)
	{	
		printf("Gecersiz Girdi..");
		return 0;
	}
		
	else
	{
		int dizi[N];
		
		int i,A[N];
		for(i=0;i<N;i++)
		{
			
			printf("Cekmek istediginiz miktari yaziniz: ");
			scanf("%d",&A[i]);
			
			if(A<0)
			{
				printf("gecersiz miktar..");
				return 0;
			}
			else
			{
							
				if(A[i]<=K)
				{
					dizi[i]=1;
					K=K-A[i];	
				}			
				
				else
				 dizi[i]=0;		
			}
		}	
		for(i=0;i<N;i++)
			printf("%d ",dizi[i]);   //kisinin sirasina bagli olarak para cekebilirse 1 cekemesse 0 yazdirir
	}







return 0;
}

