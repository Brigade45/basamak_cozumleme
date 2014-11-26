#include <stdio.h>
#include <conio.h>

int main()
{
	int sayi,sayi2,gecici,basamak_sayisi=0,basamak_degerleri[BUFSIZ],basamak[BUFSIZ];
	printf("Bir sayi giriniz : ");
	scanf_s("%d", &sayi);
	sayi2 = sayi;
	while(sayi2>=1) // kac basamak oldugunu buluyor.
	{
		sayi2 = sayi2 / 10;
		basamak_sayisi++;
	}
	//printf("%d\n", basamak_sayisi);
	for (int j = basamak_sayisi; j >= 1; j--)
	{
		basamak_degerleri[j] = 1;
	for (int i = 2; i <= j; i++)
	{ 
		
		basamak_degerleri[j] = basamak_degerleri[j] * 10;
	}
	//printf("%d\n", basamak_degerleri[j]);
	}
	gecici = sayi;
	for (int k = basamak_sayisi; k >= 1; k--)
	{
		if (gecici == 0)
			basamak[k] = 0;
		basamak[k] = gecici / basamak_degerleri[k];
		gecici = gecici - basamak[k] * basamak_degerleri[k];
	}
	//for (int l = basamak_sayisi; l >= 1; l--)
	//printf("%d\n", basamak[l]);
	printf("%d =", sayi);
	for (int z = basamak_sayisi; z >= 1; z--)
	{
		if (z>1)
		printf(" %d*%d +", basamak[z], basamak_degerleri[z]);
		else if (z==1)
		printf(" %d*%d ", basamak[z], basamak_degerleri[z]);
	}

	_getch();
	return 0;
}
