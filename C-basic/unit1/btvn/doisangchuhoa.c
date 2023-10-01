#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(int argc,char* argv[]){
    if(argc !=2 ){
        printf("LOI BIEN DICH"); return 1;
    }
    char file[100];
    strcpy(file,argv[1]);
    char tmp[1000];
    FILE* fptr;
    if((fptr=fopen(file,"r"))==NULL){
        printf("Khong mo duoc file %s\n",file);
    }
    char c;
    int i=0;
    while((c=fgetc(fptr)) != EOF){
        if(isalpha(c)){
            c=toupper(c);
        }
        tmp[i++]= c;
    }
    printf("%s",tmp);
    fclose(fptr);
    FILE *fptr1 = fopen(file,"w");
    for(int i=0;i<strlen(tmp);i++){
        fputc(tmp[i],fptr);
    }
    fclose(fptr1);

    return 0;
}