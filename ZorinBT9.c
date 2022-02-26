#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int gio, phut, result;
    char clean[255];
    while(1)
    {
        printf("Nhap vao gio: ");

        if(scanf("%d", &gio) == 1)
        {
            if(gio >= 0)
            {
                break;
            }else{
                printf("Gio phai la so duong!\n");
            }
        }
        else
        {
            scanf("%s", &clean[0]);
        }
    }

    while(1)
    {
        printf("Nhap vao phut: ");

        if(scanf("%d", &phut) == 1)
        {
            if(phut >= 0)
            {
                break;
            }else{
                printf("Phut phai la so duong!\n");
            }
        }
        else
        {
            scanf("%s", &clean[0]);
        }
    }

    result = (gio * 60) + phut;

    printf("%d gio %d phut = %d phut\n", gio, phut, result);

    return 0;
}
