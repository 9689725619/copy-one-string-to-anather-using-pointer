#include<stdio.h>
#include<string.h>

	int main(){
	
	char str1[100],str2[100];
	int i,j;
	printf("enter first string");
	gets(str1);
	printf("enter second string");
	gets(str2);
	for(i=0;str1[i]!='\0';i++)
	for(j=0;str2[j]!='\0';j++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("after concatnation of =%s",str1);
	
	
	return 0;
	
}
