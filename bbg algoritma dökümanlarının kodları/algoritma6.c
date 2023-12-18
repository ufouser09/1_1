#include <stdio.h>

int main(){
	int t,v;
	printf("zamani giriniz\n");
	scanf("%d",&t);
	
	if(t<15){
		v=32*t;
		printf("hiziniz=%d \n",v);
	}
	else if(t>15 && t<35){
		printf("hiziniz 480 \n");
		
	}
	else if(t>35 &&t<50){
		v=1600-32*t;
		printf("hiziniz =%d \n",v);
	}
	else if(t>50){
		printf("araciniz durmustur \n");
	}
}
//deneme ve compile yapildi
//bir uçak 15 dk boyunca düzgün hýzlanarak 480 km/s oluyor.sonra 20 dk sabit hýzla gidiyor ve 15 dk boyunca düzgün yavaslayarak hizi sifir oluyor.herhangi bir t aninda hizi veren algoritma ve programi
//sayfa 3
//kod calýsýyor
/*
zamani giriniz
3
hiziniz=96

--------------------------------
Process exited after 1.413 seconds with return value 12
Press any key to continue . . .

*7
