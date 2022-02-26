#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, result = 0, original = 1, so1 = 0, so2 = 1, so3 = 0;
    char clean[255];
    while(1)
    {
        printf("Nhap N so Fibonacci: ");
        if(scanf("%d", &n) == 1)
        {
            if(n > 0)
            {
                break;
            }
            else
            {
                printf("n phai lon hon 0!\n");
            }
        }
        else
        {
            printf("Nhap sai dinh dang!\n");
            scanf("%s", &clean[0]);
        }
    }

    printf("%d %d ", so1, so2);
    for(int i = 1; i <= n - 2; i++)
    {
       so3 = so2 + so1;
       so1 = so2;
       so2 = so3;
       printf("%d ", so3);
    }
    return 0;
}
