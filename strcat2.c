#include <stdio.h>
int main(){
	char str1[]="Hello, ";
	char str2[]="World!";
	char str[20];
	int i=0,j=0,x;
	while(str1[i]!='\0'){
		i++;
	}
	while(str2[j]!='\0'){
		j++;
	}
	for(x=0; x<i; x++){
		str[x]=str1[x];
	}
	for(x=i; x<=(i+j); x++){
		str[x]=str2[x-i];
	}
	
	printf("Final concatenated string: %s",str);
	return 0;
}
