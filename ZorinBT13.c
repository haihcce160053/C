#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    char clean[255];

    while(1)
    {
        printf("Nhap a: ");
        if(scanf("%d", &a) == 1)
        {
            break;
        }else{
            scanf("%s", &clean[0]);
        }
    }

   while(1)
    {
        printf("Nhap b: ");
        if(scanf("%d", &b) == 1)
        {
            break;
        }else{
            scanf("%s", &clean[0]);
        }
    }


    if(a == 0 && b == 0)
    {
        printf("Khong co UCLN va BCNN!");
    }
    else if(a == 0 || b == 0)
    {
        if(a != 0)
        {
            printf("UCLN = %d, khong co BCNN", a);
        }
        else if (b != 0)
        {
            printf("UCLN = %d, khong co BCNN", b);
        }
    }
    else if (a > 0 && b > 0)
    {
        printf("UCLN: %d\n", gcd(a,b));
        printf("BCNN: %d\n", (a*b) / gcd(a,b));
    }
    else
    {
        printf("a va b phai lon hon 0");
    }
    return 0;
}

int gcd(int a, int b) {
    int phan_du = a % b;
    if (phan_du == 0) {
        return b;
    }
    return gcd(b, phan_du);
}
