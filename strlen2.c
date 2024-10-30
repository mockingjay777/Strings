#include <stdio.h>
int main(){
	char str[]="Hello, World!";
	int i=0;
	while(str[i]!='\0'){
		i++;
	}
	printf("Lenght of string: %d\n",i);
	return 0;
}
