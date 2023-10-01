#include<stdio.h>

void input_arr(int *array,int n){
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
}
int output_arr(int *arr,int n){
    int maxSum = arr[0];
    for(int i=0;i<n;i++){
        // int sum=0;
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            if(sum > maxSum) maxSum=sum;

        }
    }
    return maxSum;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    input_arr(arr,n);
    printf("Day con co sum max la: %d",output_arr(arr,n));

    return 0;
}