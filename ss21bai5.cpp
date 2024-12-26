#include<stdio.h>
#include<string.h>
int main(){
	FILE *ptr;
	
	char str[100];
	int n;
	
	ptr=fopen("bt05.txt","w");
	if(ptr==NULL){
		printf("ko the mo file");
		return 1;
	}
	printf("nhap so luong dong: ");
	scanf("%d",&n);
	getchar();
	
	
	for(int i=0;i<n;i++){
		printf("nhap vao 1 dong ki tu bat ki : ");
		fgets(str,sizeof(str),stdin);
		fprintf(ptr,"%s",str);
	}
	fclose(ptr);
	printf("ghi vao file thanh cong");
	
	ptr=fopen("bt05.txt","r");
	if(ptr==NULL){
		printf("ko the mo file");
		return 1;
	}
	printf("noi dung cua file la: ");
	while(fgets(str,sizeof(str),ptr)){
		printf("%s",str);
	}
		fclose(ptr);
	
	
		return 0;
	}
