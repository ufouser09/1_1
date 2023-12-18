#include <stdio.h>
int main(){
	int a,b,c;
	printf("lutfen a sayisini giriniz \n");
	scanf("%d",&a);
	
	printf("lutfen b sayisini giriniz \n");
	scanf("%d",&b);
	
	if(a>50 && b>50){
		c=a+b;
		printf("%d",c);
	}
	else{
		printf("hicbir islem yapilmadi");
	}
}
//denendi ve compile yapildi
//a ve b sayilari 50 den buyukse c=a+b iþlemini yapan algoritma ve programý
//sayfa 2
//kod calýsýyor

/*
lutfen a sayisini giriniz
51
lutfen b sayisini giriniz
51
102
--------------------------------
Process exited after 2.772 seconds with return value 3
Press any key to continue . . .

*/
