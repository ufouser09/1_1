#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int a;
	printf("not ortalamanınızı giriniz\n");
	scanf("%d",&a);
	
	if(a>90)
	printf("puanınız %d ise ortalamanınız A dır\n",a);
	else if(a>75)
	printf("puanınız %d ise ortalamanınız B dir\n",a);
	else if(a>60)
	printf("puanınız %d ise ortalamanınız C dir\n",a);
	else if(a>50)
	printf("puanınız %d ise ortalamanınız D dir\n",a);
	else
	printf("puanınız %d ise ortalamanınız F dir\n",a);
	
	return 0;
}
//program 9.11
//93
//denendi ve compile edildi
