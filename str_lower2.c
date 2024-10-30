#include <stdio.h>
int main(){
	char str1[100];
        printf("Enter string\n");
        scanf("%s",str1);
	int length=0;
	while(str1[length]!='\0'){
		length++;
	}char lower[length];
        for(int i=0; i<=length; i++){
                if(str1[i]>='a'||str1[i]=='\0'){
                        lower[i]=str1[i];
                }else{
                        lower[i]=str1[i]+32;
                }
        }
        printf("String in lowercase: %s\n",lower);
        return 0;
}
