#include <stdio.h>
#include <string.h>

typedef struct Product
{
    int id;
    char name[30];
    double gia;
} product;

int main()
{
    product arr[100];
    FILE *fptr;
    if (((fptr = fopen("lap1.txt", "r")) == NULL))
    {
        printf("Mo file %s khong thanh cong\n", "lap1.txt");
    }
    int i = 0;
    while ((fscanf(fptr, "%d %s %lf", &arr[i].id, &arr[i].name, &arr[i].gia)) != EOF)
    {
        i++;
    }
    fclose(fptr);

    printf("%s\t%13s\t%7s\n", "No", "Product Name", "Price");
    for (int x = 0; x < i; x++)
    {
        printf("%d\t%-13s\t%7.2lf\n", arr[x].id, arr[x].name, arr[x].gia);
    }

    return 0;
}