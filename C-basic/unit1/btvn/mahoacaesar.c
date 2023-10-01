#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("LOI BIEN DICH ! ");
        return 1;
    }
    int thamso = abs(atoi(argv[2]));
    FILE *fptr1, *fptr2;
    char file1[100];
    char file2[100];
    strcpy(file1, argv[1]);
    strcpy(file2, argv[3]);

    if ((fptr1 = fopen(file1, "r")) == NULL)
    {
        printf("MO FILE %s khong thanh cong\n", file1);
    }
    if ((fptr2 = fopen(file2, "w")) == NULL)
    {
        printf("MO FILE %s khong thanh cong/n", file2);
    }
    char c;
    while (((c = fgetc(fptr1)) != EOF))
    {
        if (isalpha(c) == 1 && (c + thamso) <= 90)
        {
            c += thamso;
            fputc(c, fptr2);
        }
        else if (isalpha(c) == 1 && (c + thamso) > 90)
        {
            c = (c + thamso - 26);
            fputc(c, fptr2);
        }
        else
        {
            fputc(c, fptr2);
        }
    }
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}