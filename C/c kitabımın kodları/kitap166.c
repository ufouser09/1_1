#include <stdio.h>
int main(){
	int row,col;
	for(row=1;row<=5;row++){
		for(col=1;col<=row;col++){
			printf("%d",row);
		}
		printf("\n");
	}
	return 0;
}

//program 11.7
//170
