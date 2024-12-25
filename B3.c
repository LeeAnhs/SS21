#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	FILE *file;
	char n[100];
  //mo file
	file = fopen("bt01.txt", "a");
  //tuong tac file
	if(file == NULL) {
		printf("loi khi mo file");
		return 1;
	}
	printf("moi ban nhap vao chuoi: \n");
	fgets(n, sizeof(n), stdin);
	n[strcspn(n, "\n")] = 0;
	fprintf(file, "%s\n", n);
	printf("chuoi cua ban vua nhap vao thanh cong trong tap tin bt01.txt");
	//dong file 
	fclose(file);
	return 0;
}
