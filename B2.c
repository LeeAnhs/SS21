#include<stdio.h>
#include<stdlib.h>


int main() {
	FILE *file;
	char ch;
  //tien hanh mo file
	file = fopen("bt01.txt", "r");
	//Tuong tac
	if(file == NULL) {
		printf("loi tao hoac mo file ");
		return 0;
	}
	  printf("Noi dung file la: ");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch); // in ra tung ki tu
    }
    printf("\n");
    fseek(file, 0, SEEK_SET); 
	ch =fgetc(file);
	if(ch == EOF) {
		printf("chuong trinh cua ban bi loi");
	} else {
		printf("ki tu dau tien co trong chuoi la: %c", ch);
	}
	//Dong file
	fclose(file);
	return 0;
}
