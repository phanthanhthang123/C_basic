#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc,char* argv[]){
    if(argc <3||argc > 3){
        return 1;
    }
    // char file_1[]="lap1.txt";
    // char file_2[]="lap1w.txt";
    char *file_1=argv[1];
    char *file_2=argv[2];

    FILE *file1,*file2;
    file1 = fopen(file_1,"w");
    file2=fopen(file_2,"w");
    if(file1==NULL){
        printf("Mo va doc file 1 khong thanh cong\n");
        fclose(file1);
    }
    if(file2==NULL){
        printf("Mo va doc file 2 khong thanh cong\n");
        fclose(file2);
    }
    


    fclose(file1);
    fclose(file2);
    return 0;
}