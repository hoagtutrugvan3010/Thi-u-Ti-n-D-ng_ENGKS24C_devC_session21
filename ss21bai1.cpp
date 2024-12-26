#include<stdio.h>

int main(){
	FILE *ptr;
	
	char str[100];
	
	ptr=fopen("bt01.txt","w");
	if(ptr==NULL){
		printf("ko the mo file");
		return 1;
	}
	printf("nhap vao 1 dong ki tu bat ki");
	fgets(str,sizeof(str),stdin);
	fprintf(ptr,"%s",str);
	fclose(ptr);
	printf("ghi vao file thanh cong");
	

 return 0;
 }

