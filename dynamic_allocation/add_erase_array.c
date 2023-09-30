#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* CapPhatMang(int *n){
    int* pa = (int*)malloc((*n)*sizeof(int));
    return pa;
}
int* NhapMang(int* arr,int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    return arr;
}
void InMang(int* arr,int n){
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
    printf("\n");
}
bool DaTonTai(int* arr,int n,int value){
    for(int i=0;i<n;i++){
        if(arr[i]==value) return true;
    }
    return false;
}
int* ThemPhanTu(int* arr,int* n,int value){
    if(DaTonTai(arr,*n,value)) return arr;
    (*n)+=1;
    arr = (int*)realloc(arr,(*n)*sizeof(int));
    arr[(*n)-1]=value;
    return arr;
}
int* XoaPhanTu(int* arr,int *n,int index){
    for(int i=index;i<(*n)-1;i++){
        arr[i]=arr[i+1];
    }
    *n -=1;
    arr=(int*)realloc(arr,(*n)*sizeof(int));
    return arr;
}
int DemSoLanXuatHien(int* arr,int n,int value){
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]==value){
            ++count;
        }
    }
    return count;
}
int* XoaPhanTuTRungLap(int* arr,int* n){
    for(int i=0;i<(*n);i++){
        while(DemSoLanXuatHien(arr,*n,arr[i]) >1){
            arr=XoaPhanTu(arr,n,i);
        }
    }
    return arr;
}
int NhapData(){
    int n;scanf("%d",&n);

    return n;
}
int main(){
    int n;
    scanf("%d",&n);
    int* arr = CapPhatMang(&n);
    arr = NhapMang(arr,n);
    InMang(arr,n);

    arr = ThemPhanTu(arr,&n,NhapData());
    InMang(arr,n);
    arr=ThemPhanTu(arr,&n,NhapData());
    InMang(arr,n);
    arr=ThemPhanTu(arr,&n,NhapData());
    InMang(arr,n);

    arr = XoaPhanTuTRungLap(arr,&n);
    InMang(arr,n);

    return 0;
}