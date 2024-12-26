#include<stdio.h>
#include<string.h>
int main(){
	FILE *ptr;
	
	char str[100];
	
	ptr=fopen("bt01.txt","w");
	if(ptr==NULL){
		printf("ko the mo file");
		return 1;
	}
	printf("nhap vao 1 dong ki tu bat ki : ");
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
	printf("\n");
	
	
	
	
	ptr=fopen("bt01.txt","a");
	if(ptr==NULL){
		printf("ko the mo file");
		return 1;
	}
	char str2[100];
	printf("nhap them 1 chuoi ki tu ngau nhien: ");
	fgets(str2,sizeof(str2),stdin);
	fprintf(ptr,"%s",str2);
	fclose(ptr);
	printf("ghi vao file thanh cong");
	
	
	ptr=fopen("bt01.txt","r");
	if(ptr==NULL){
		printf("ko the mo file");
		return 1;
	}
	char line[100];
	if(fgets(line,sizeof(line),ptr)){
		printf("dong dau tien cua ptr la %s",line);
	}else{ 	
		printf("ko doc dc  dong dau tien\n");
	}
	fclose(ptr);
	printf("\n");
	



 return 0;
}
