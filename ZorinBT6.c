#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float r, CV, DT;
    char clean[255];

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
        }else{
            scanf("%s", &clean[0]);
        }

    }

    return 0;
}
