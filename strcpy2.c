#include <stdio.h>
int main(){
	char src[]="OpenAI";
	char dest[10];
	int i=0;
	while(src[i]!='\0'){
		i++;
	}
	for(int j=0; j<=i; j++){
		dest[j]=src[j];
	}
	printf("Destination string: %s\n",dest);
	return 0;
}
