#include <stdio.h>
int main(){
	int a,b,c,d;
	printf("dortgenin a kenarini giriniz \n");
	scanf("%d",&a);
	
	printf("dortgenin b kenarini giriniz \n");
	scanf("%d",&b);
	
	printf("dortgenin c kenarini giriniz \n");
	scanf("%d",&c);
	
	printf("dortgenin d kenarini giriniz \n");
	scanf("%d",&d);
	
	if(a+a==b+c){
		printf("dortgen karedir");
	}
	else{
		printf("dortgen kare degildir");
	}
}
//deneme ve compile yapildi
//kenarlarý a b c d olarak verilen bir dortgenin kare olup olmadýgýný bulan algoritma ve programi
//sayfa 2
//kod calýsýyor

/*
dortgenin a kenarini giriniz
2
dortgenin b kenarini giriniz
3
dortgenin c kenarini giriniz
4
dortgenin d kenarini giriniz
5
dortgen kare degildir
--------------------------------
Process exited after 3.251 seconds with return value 21
Press any key to continue . . .

dortgenin a kenarini giriniz
2
dortgenin b kenarini giriniz
2
dortgenin c kenarini giriniz
2
dortgenin d kenarini giriniz
2
dortgen karedir
--------------------------------
Process exited after 2.145 seconds with return value 15
Press any key to continue . . .



*/
