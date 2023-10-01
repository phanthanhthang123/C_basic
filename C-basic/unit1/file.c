#include<stdio.h>
#include<string.h>

int main(int argc,char* argv[]){
    FILE *fptr;
    fptr = fopen("test.txt","r");
    if(fptr==NULL){
        printf("Mo file khong thanh cong");
    }
    fprintf(fptr,"xin chao cac ban");

    fclose(fptr);
    return 0;
}