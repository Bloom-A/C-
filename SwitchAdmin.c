#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void login(){
	
	char name[32];
	char pwd[32];
	
	printf("�������û���:");
	scanf("%s",name);
	
	printf("����������:");
	scanf("%s",pwd);
	
}

int main(int argc,char *argv[]){
	
	system("cls");
	printf("---��������̨����---\n");
	printf("1 - �����˺�\n");
	printf("2 - IP����\n");
	printf("3 - �˿ڹ���\n");
	printf("4 - �˳�\n");
	printf("��ѡ��1  --  4��");
	
	getchar();
	return 0;
}