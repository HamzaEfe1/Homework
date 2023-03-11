#include<stdio.h>

int main () 
{
	
	int n, min, i;
	
	printf("Dizinin eleman sayisini giriniz: ");
	scanf("%d",&n);
	
	int sayilar[n];
	
	for(i=1;i<=n;i++)
	{
		printf("%d. elemani girniz: ",i);
		scanf("%d",&sayilar[i]);
	}
	
	min = sayilar[0];
	
	for (i=0;i<n;i++) //1
	{
		if (min > sayilar[i]) //2	
			min = sayilar[i];//3
	} 
	
	printf("En kucuk sayi: %d",min);
	
	return 0;
}
