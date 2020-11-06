#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void login(){
	
	char name[32];
	char pwd[32];
	
	printf("请输入用户名:");
	scanf("%s",name);
	
	printf("请输入密码:");
	scanf("%s",pwd);
	
}

int main(int argc,char *argv[]){
	
	system("cls");
	printf("---交换机后台管理---\n");
	printf("1 - 创建账号\n");
	printf("2 - IP管理\n");
	printf("3 - 端口管理\n");
	printf("4 - 退出\n");
	printf("请选择【1  --  4】");
	
	getchar();
	return 0;
}