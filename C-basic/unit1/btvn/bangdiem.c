#include<stdio.h>
#include<string.h>

typedef struct sinhvien{
    int stt;
    char mssv[20];
    char name[30];
    char sdt[20];
    double gpa;
}quanlisinhvien;

int main(int argc,char* argv[]){
    quanlisinhvien arr[100];
    FILE* fptr1;
    fptr1 = fopen("lap1w.txt","r");
    if(fptr1==NULL){
        printf("Mo file %s khong thanh cong\n","lap1w.txt");
        return 0;
    }
    int i=0;
    while (fscanf(fptr1,"%d %s %s %s",&arr[i].stt,&arr[i].mssv,arr[i].name,arr[i].sdt) !=EOF){
        i++;
    }
    
    fclose(fptr1);
    FILE *fptr2;
    fptr2=fopen("lap1.txt","w");
    if(fptr2==NULL){
        printf("MO file %s khong thanh cong\n","lap1.txt");
        return 0;
    }
    for(int k=0;k<i;k++){
        printf("Moi nhap diem cho sinh vien thu %d :",k+1);
        scanf("%lf",&arr[k].gpa);
    }
    for(int j=0;j<i;j++){
        fprintf(fptr2,"%d %s %s %s %.2lf\n",arr[j].stt,arr[j].mssv,arr[j].name,arr[j].sdt,arr[j].gpa);
    }

    fclose(fptr2);

    return 0;
}