#include <stdio.h>
#include <stdlib.h>


void bubble();
void selection();
	

int main(){
	
	srand(time(NULL));
	
	int *p;
	int i,a;
	int x;
	
	printf("dizi adedini giriniz: ");
	scanf("%d",&a);
	
	printf("\n\n");
	
	p=malloc(a*sizeof(int));
	
	
	printf("Siralama metodunu seciniz\n\nbubble icin 1'i selection icin 2'yi tuslayiniz: ");
	scanf("%d",&x);
	printf("\n\n");
	
	for(i=0;i<a;i++)
	{
		p[i]=rand();
	}
		
		switch(x){
			
			case 1:
				{
					bubble(p,a);
					for(i=0;i<a;i++)
						printf(" %d\n",p[i]);
					
					break;
				}
			case 2:
				{
					selection(p,a);
					for(i=0;i<a;i++)
						printf(" %d\n",p[i]);
						
					break;							
				}		
			default: printf("hatali giris...");		
		}
		
		
		free(p);

		return 0;	
	}


void bubble(int *arr,int size){
	
	int i,j,temp;
	
	for(j=1;j<size*size-1;j++)
	{
		for(i=1;i<size;i++)
		{										  
			if(arr[i-1]>arr[i])
			{								  
				temp=arr[i];					
				arr[i]=arr[i-1];  	 		   
				arr[i-1]=temp;	          
			}
		}
	}
				
} 

void selection(int *arr,int size){
		
	int i;
	int j;
	int min=arr[0],temp;
	
	for(i=0;i<size;i++)							 
	{														
		for(j=i;j<size;j++)						  	   
		{									
			if(arr[j]<min)               				 
			{									
				temp=min;    		             			  				
				min=arr[j];	
				arr[j]=temp;
				arr[i]=min;
			}		
		}
		min=999999999;						
	}


}


