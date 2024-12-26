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
	
	ptr=fopen("bt01.txt","r");
	if(ptr==NULL){
		printf("ko the mo file");
		return 1;
	}
	char firstWord=fgetc(ptr);
	if(firstWord!=EOF){
		printf("ki tu dau tien la %c",firstWord);
		
	}
	else{
		printf("mang k chua ki tu nao");
		
	}
	fclose(ptr);

 return 0;
}
