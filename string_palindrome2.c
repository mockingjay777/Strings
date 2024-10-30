#include <stdio.h>
int main(){
	char str[100];
	printf("Enter string\n");
	scanf("%s",str);
	int length=0,i=0,x=0,result=0;
	while(str[length]!='\0'){
		length++;
	}
	char temp[length];
	while(str[i]!='\0'){
		temp[length-i-1]=str[i];
		i++;		
	}
	while(str[x]!='\0'){
			if(str[x]!=temp[x]){
				printf("String is not a palindrome");
				result=1;
				break;
			}
			x++;
		}
	if(result==0){
		printf("String is a palindrome");
	}
	return 0;
}
