#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, p, CV, DT;
    char clean[255];
    while(1)
    {
        printf("Nhap canh a: ");
        if(scanf("%f", &a) == 1)
        {
            if(a > 0)
            {
                break;
            }
            else
            {
                printf("Canh a phai lon hon 0!\n");
            }
        }
        else
        {
            scanf("%s", &clean[0]);
        }

    }

    while(1)
    {
        printf("Nhap canh b: ");
        if(scanf("%f", &b) == 1)
        {
            if(b > 0)
            {
                break;
            }
            else
            {
                printf("Canh b phai lon hon 0!\n");
            }
        }
        else
        {
            scanf("%s", &clean[0]);
        }

    }
    while(1)
    {
        printf("Nhap canh c: ");
        if(scanf("%f", &c) == 1)
        {
            if(c > 0)
            {
                break;
            }
            else
            {
                printf("Canh c phai lon hon 0!\n");
            }
        }
        else
        {
            scanf("%s", &clean[0]);
        }

    }

    CV = a + b + c;
    p = CV/2;
    DT = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Chu vi tam giac: %.1f\n", CV);
    printf("Nua chu vi tam giac: %.1f\n", p);
    printf("Dien tich tam giac: %.1f\n", DT);
    return 0;
}
