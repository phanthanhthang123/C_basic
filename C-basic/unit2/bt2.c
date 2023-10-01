#include<stdio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>

int main(int argc,char* argv[]){
    if(argc > 4 ) return 1;
    float a = atof(argv[1]);
    float b = atof(argv[2]);
    float c = atof(argv[3]);
    float delta = b*b - 4*a*c;

    if(delta<0){
        printf("phuong trinh vo nghiem");
    }   
    else if(delta==0){
        printf("Phuong trinh co 2 nghiem kep : %.2f",(-b)/2*a);
    }
    else{
        printf("Phuong trinh co 2 nghiem phan biet x1 = %.2f, x2 = %.2f",(-b+sqrt(delta))/2*a,(-b-sqrt(delta))/2*a);
    }

    return 0;
}