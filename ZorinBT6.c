#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float r, CV, DT;
    char clean = 'c';

    while(1)
    {
        printf("Nhap ban kinh hinh tron: ");
        if(scanf("%f", &r) == 1)
        {
            CV = 2 * M_PI * r;
            DT = M_PI * r * r;
            printf("Chu vi hinh tron: %.3f\n", CV);
            printf("Dien tich hinh tron: %.3f\n", DT);
            break;
        }
        scanf("%s", &clean);
    }

    return 0;
}
