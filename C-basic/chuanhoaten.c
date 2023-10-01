#include<stdio.h>
#include<string.h>
#include<ctype.h>

struct name{
    char ten[30];
};
void input_array(struct name *arr,int n);
void output_array(struct name *arr,int n);
void restname_array(struct name *arr,int n);

int main(){
    int n;
    scanf("%d",&n);
    struct name arr[n];
    fflush(stdin);
    input_array(arr,n);
    restname_array(arr,n);
    output_array(arr,n);
    return 0;
}
void restname_array(struct name *arr,int n){
    for(int i=0;i<n;i++){
        arr[i].ten[0] = toupper(arr[i].ten[0]);
        for(int j=1;j<strlen(arr[i].ten)-1;j++){
            if(arr[i].ten[j]==' ' && arr[i].ten[j+1] !=' '){
                arr[i].ten[j+1]= toupper(arr[i].ten[j+1]);
            }
        }
    }
}

void input_array(struct name *arr,int n){
    for(int i=0;i<n;i++){
        gets(arr[i].ten);
        // fgets(arr[i].ten,sizeof(arr[i].ten),stdin);
        // fflush(stdin);
    }
}
void output_array(struct name *arr,int n){
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i].ten);
    }
}