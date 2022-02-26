#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int thang, nam;
    char clean[255];
    bool isNamNhuan = false;

    while(1)
    {
        printf("Nhap thang: ");
        if(scanf("%d", &thang) == 1)
        {
            if(thang > 0)
            {
                break;
            }
            else
            {
                printf("Thang phai lon hon 0!\n");
            }

        }
        else
        {
            printf("Vui long nhap so!\n");
            scanf("%s", &clean[0]);
        }
    }

    while(1)
    {
        printf("Nhap nam: ");
        if(scanf("%d", &nam) == 1)
        {
            if(nam > 0)
            {
                break;
            }
            else
            {
                printf("Nam phai lon hon 0!\n");
            }
        }
        else
        {
            printf("Vui long nhap so!\n");
            scanf("%s", &clean[0]);
        }
    }

    if(nam % 4 == 0)
    {
        isNamNhuan = true;
    }

    switch(thang)
    {
    case 1:
        printf("Thang 1 co 31 ngay");
        break;
    case 2:
        if(isNamNhuan == true)
        {
            printf("Thang 2 co 29 ngay (nam nhuan)");
        }
        else
        {
            printf("Thang 2 co 28 ngay");
        }
        break;
    case 3:
        printf("Thang 3 co 31 ngay");
        break;
    case 4:
        printf("Thang 4 co 30 ngay");
        break;
    case 5:
        printf("Thang 5 co 31 ngay");
        break;
    case 6:
        printf("Thang 6 co 30 ngay");
        break;
    case 7:
        printf("Thang 7 co 31 ngay");
        break;
    case 8:
        printf("Thang 8 co 31 ngay");
        break;
    case 9:
        printf("Thang 9 co 30 ngay");
        break;
    case 10:
        printf("Thang 10 co 31 ngay");
        break;
    case 11:
        printf("Thang 11 co 30 ngay");
        break;
    case 12:
        printf("Thang 12 co 31 ngay");
        break;
    default:
        printf("Du lieu nhap vao khong hop le!");
        break;
    }

    return 0;
}
