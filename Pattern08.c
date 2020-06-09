#include<stdio.h>
main(){
	int i,j;
	for(i = 'E'; i >= 'A'; i--){
		for(j = 1; j <= 5; j++){
			printf("%c",i);
		}
		printf("\n");
	}
}
