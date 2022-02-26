#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int chon, tu, mau;
    int n, result = 0;
    char clean[255];
    printf("Vui long chon chuc nang tinh tong:\n");
    printf("1. S = 1 + 2 + ... + n\n");
    printf("2. S = 1/2 + 2/3 +... + n/(n+1)\n");
    printf("3. S = -1 + 2 - 3 + 4 - ... + ((-1)^n)*n\n");
    printf("4. Thoat\n");
    while(1)
    {
        printf("Chon: ");
        if(scanf("%d", &chon) == 1)
        {
            if(chon > 0 && chon < 5)
            {
                break;
            }
            else
            {
                printf("Vui long chon dung chuc nang!\n");
            }
        }
        else
        {
            printf("Nhap sai dinh dang!\n");
            scanf("%s", &clean[0]);
        }
    }



    switch(chon)
    {
    case 1:
        while(1)
        {
            printf("Nhap so n: ");
            if(scanf("%d", &n) == 1)
            {
                if(n > 0)
                {
                    break;
                }
                else
                {
                    printf("N phai lon hon 0!\n");
                }
            }
            else
            {
                printf("Nhap sai dinh dang!\n");
                scanf("%s", &clean[0]);
            }
        }

        printf("S =");
        for(int i = 1; i <= n; i++)
        {
            result = result + i;
            if(i == 1)
            {
                printf(" %d", i);
            }
            else
            {
                printf(" + %d", i);
            }
        }
        printf(" = %d\n", result);
        result = 0;
        break;
    case 2:
        while(1)
        {
            printf("Nhap so n: ");
            if(scanf("%d", &n) == 1)
            {
                if(n > 0)
                {
                    break;
                }
                else
                {
                    printf("N phai lon hon 0!\n");
                }
            }
            else
            {
                printf("Nhap sai dinh dang!\n");
                scanf("%s", &clean[0]);
            }
        }
        for(int i = 1; i <= n; i++)
        {
            tu = i;
            mau = i + 1;
        }
        printf("S = %d/%d = %.2f\n", tu, mau, ((float)tu/(float)mau));
        result = 0;
        break;
    case 3:
        while(1)
        {
            printf("Nhap so n: ");
            if(scanf("%d", &n) == 1)
            {
                if(n > 0)
                {
                    break;
                }
                else
                {
                    printf("N phai lon hon 0!\n");
                }
            }
            else
            {
                printf("Nhap sai dinh dang!\n");
                scanf("%s", &clean[0]);
            }
        }
        printf("S =");
        for(int i = 1; i <= n; i++)
        {
            int P = pow(-1, i) * i;
            result = result + P;
            if(P < 0)
            {
                printf(" - %d", abs(P));
            }
            else
            {
                printf(" + %d", P);
            }
        }
        printf(" = %d\n", result);
        result = 0;
        break;
    case 4:
        printf("Cam on ban da su dung chuong trinh");
        exit(0);
        break;
    default:
        break;
    }

    return 0;
}
