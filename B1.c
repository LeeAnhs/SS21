#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    //1.mo file
    FILE *fptr;
    char str[1000];
    
    fptr = fopen("bt01.txt", "w");
    //2. tuong tac file
    if(fptr==NULL){
        printf("Loi mo tap tin\n");
        return 1;
    }
    printf("Nhap chuoi ky tu bat ky");
    fgets(str,sizeof(str),stdin);
    
    fprintf(fptr,"%s",str);
    //3.Dong file
    fclose(fptr);
    printf("Chuoi duoc nhap da dc luu vao file");
    return 0;
}
