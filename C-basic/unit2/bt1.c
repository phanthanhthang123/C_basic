#include<stdio.h>
#include<string.h>

// typedef struct chuoi{
//     char kytu[100];
// }chuoi;
// void dao_chuoi(char *c,int n){
//     chuoi a[n];
//     for(int i=0;i<n;i++){
//         for(int i=strlen(c);i>=0;i--){
//             if(c[i] != ' ' && c[i-1]==' '){

//         }
//     }
//     }
// }
 int main(int argc, char* argv[]){
    char c[100];
    if(argc<2){
        printf("%s is : ",argv[1]);
    }
    for(int i =  argc -1;i>0;i--){
        printf("%s ",argv[i]);
    }


    return 0;
}