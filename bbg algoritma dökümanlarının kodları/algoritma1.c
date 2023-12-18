#include <stdio.h>

int main(){
	int yas,yil,dogumYili;
	
	printf("lutfen yili giriniz \n");
	scanf("%d",&yil);
	
	printf("lutfen dogum yilinizi giriniz \n");
	scanf("%d",&dogumYili);
	
	 yas=yil-dogumYili;
	
	printf("kullanicinin yasi =%d",yas);
}
//denendi ve compile edildi
//dogum tarihi verilen kiþinin yaþýný bulan algoritma ve programi
//sayfa 1
//kod calýsýyor


/*
lutfen yili giriniz
2019
lutfen dogum yilinizi giriniz
1999
kullanicinin yasi =20
--------------------------------
Process exited after 8.015 seconds with return value 21
Press any key to continue . . .



*/
