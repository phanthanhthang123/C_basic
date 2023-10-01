#include<stdio.h>
#include<math.h>

double tbc(int *arr,int n){
    double sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum/n;
}
void input_arr(int *arr,int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    printf("Nhap Mang: ");
    input_arr(a,n);
    double tb = tbc(a,n);
    printf("trung binh cong cua mang la: %.2lf\n",tb);
    int x=-1;
    double y= abs(a[0]-tb);
    for(int i=1;i<n;i++){
        double k = abs(a[i]-tb);
        if(k<=y){
            y=k;
            x=i;
        }
    }
    if(x==-1){
        printf("So gan voi tbc nhat la: %d",a[0]);
    }else{
        printf("So gan voi tbc nhat la: %d",a[x]);
    }



}