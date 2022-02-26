#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, phan_nguyen, phan_du, so1, so2, so3;
    char clean[255];

    while(1)
    {
        printf("Nhap so nguyen duong co 3 chu so: ");
        if(scanf("%d", &a) == 1)
        {
            if(a > 99 && a < 1000){
                 break;
            }else{
                printf("Vui long nhap so co 3 chu so!\n");
            }

        }
        else
        {
            printf("Sai dinh dang, vui long nhap lai!\n");
            scanf("%s", &clean[0]);
        }
    }

    phan_du = a % 10;
    phan_nguyen = a / 10;
    so1 = phan_du;

    phan_du = phan_nguyen % 10;
    phan_nguyen = phan_nguyen / 10;
    so2 = phan_du;

    phan_du = phan_nguyen % 10;
    phan_nguyen = phan_nguyen / 10;
    so3 = phan_du;

    printf("Dao nguoc: %d%d%d", so1, so2, so3);
    return 0;
}
