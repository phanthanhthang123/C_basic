#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("lap2.txt", "r");
    if (fptr == NULL)
    {
        perror("Mo file lap2.txt khong thanh cong: ");
    }

    fclose(fptr);

    return 0;
}