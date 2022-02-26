#include <stdio.h>
#include <stdlib.h>

int main()
{
    int phut, nguyen, du;
    char clean[255];
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
    nguyen = phut / 60;
    du = phut % 60;

    printf("%d phut = %d gio %d phut\n", phut, nguyen, du);

    return 0;
}
