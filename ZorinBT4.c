#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, MAX;
    char* clean;

    while(1)
    {
        printf("Nhap vao so thu 1: ");
        if(scanf("%d", &a) == 1)
        {
            break;
        }
        else
        {
            printf("Vui long nhap so!\n");
            scanf("%s", clean);
        }
    }

    while(1)
    {
        printf("Nhap vao so thu 2: ");
        if(scanf("%d", &b) == 1)
        {
            break;
        }
        else
        {
            printf("Vui long nhap so!\n");
            scanf("%s", clean);
        }
    }

    while(1)
    {
        printf("Nhap vao so thu 3: ");
        if(scanf("%d", &c) == 1)
        {
            break;
        }
        else
        {
            printf("Vui long nhap so!\n");
            scanf("%s", clean);
        }
    }


    MAX = a;
    if(MAX < b)
    {
        MAX = b;
    }
    if(MAX < c)
    {
        MAX = c;
    }
    printf("So lon nhat trong 3 so la: %d\n", MAX);
    return 0;
}
