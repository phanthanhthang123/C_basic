#include<stdio.h>
#include<string.h>

int main(int argc,char* argv[]){
    if(argc !=3){
        printf("LOI BIEN DICH"); return 0;
    }
    FILE *fptr1,*fptr2;
    char file1[100],file2[100];
    strcpy(file1,argv[1]);
    strcpy(file2,argv[2]);

    if((fptr1 = fopen(file1,"a"))==NULL){
        printf("Mo file %s khong thanh cong",file1);
        fclose(fptr1);
    }
    if((fptr2= fopen(file2,"r"))== NULL){
        printf("Mo file %s khong thanh cong",file2);
        fclose(fptr2);
    }
    char c;
    while((c=fgetc(fptr2)) != EOF){
        fputc(c,fptr1);
    }


    fclose(fptr1);
    fclose(fptr2);

    return 0;
}