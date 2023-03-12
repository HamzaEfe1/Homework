#include<stdio.h>

struct ogrenci1
{
	char isim[15];
	char soyad[15];
	int numara;
	char adres[30];
};

struct ogrenci1 one={"Hamza Efe","Carikci",5,"Amasya"};

struct ogrenci2
{
	char isim[15];
	char soyad[15];
	int numara;
	char adres[30];
};

struct ogrenci2 two={"Emirhan","Kaytakli",59,"Tekirdag"};

struct ogrenci3
{
	char isim[15];
	char soyad[15];
	int numara;
	char adres[30];
};

struct ogrenci3 three={"Yildiray","Parlak",27,"Gaziantep"};

struct ogrenci4
{
	char isim[15];
	char soyad[15];
	int numara;
	char adres[30];
};

struct ogrenci4 four={"Mustafa","Bilgic",19,"Corum"};

struct ogrenci5
{
	char isim[15];
	char soyad[15];
	int numara;
	char adres[30];
};

struct ogrenci5 five={"Ali Ihsan","Canbaba",24,"Erzincan"};

int main ()
{
	printf("1. Ogrenci bilgileri\nIsim:%s\nSoyad:%s\nNumara:%d\nAdres:%s\n",one.isim,one.soyad,one.numara,one.adres);
	
	printf("--------------------------------\n");
	
	printf("2. Ogrenci bilgileri\nIsim:%s\nSoyad:%s\nNumara:%d\nAdres:%s\n",two.isim,two.soyad,two.numara,two.adres);
	
	printf("--------------------------------\n");
	
	printf("3. Ogrenci bilgileri\nIsim:%s\nSoyad:%s\nNumara:%d\nAdres:%s\n",three.isim,three.soyad,three.numara,three.adres);
	
	printf("--------------------------------\n");
	
	printf("4. Ogrenci bilgileri\nIsim:%s\nSoyad:%s\nNumara:%d\nAdres:%s\n",four.isim,four.soyad,four.numara,four.adres);
	
	printf("--------------------------------\n");
	
	printf("5. Ogrenci bilgileri\nIsim:%s\nSoyad:%s\nNumara:%d\nAdres:%s\n",five.isim,five.soyad,five.numara,five.adres);
	
	return 0;
}
