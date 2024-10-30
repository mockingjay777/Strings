#include <stdio.h>
int main(){
	char str1[]="Hello_World!";
	char str2[]="Hello_World!";
	int i,j;
	while(str1[i]!='\0'){
		i++;
	}
	while(str2[j]!='\0'){
		j++;
	}
	int result=0,x=0;
	if(i==j){
		while(str1[x]!='\0'){
			if(str1[x]!=str2[x]){
				printf("Not equal");
				result=1;
				break;
			}
			x++;
		}
		if(result==0){
			printf("Equal");
		}
	}else{
		printf("Not equal");
	}
	return 0;
}
