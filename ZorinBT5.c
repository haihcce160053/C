#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    printf("Nhap so nguyen to thu N: ");
    int n;
    scanf("%d", &n);
    printf("Danh sach so nguyen to: ");
    for(int i = 2; i <= n; i++)
    {
        bool isSoNguyenTo = true;
        for(int j = 2; j <= n; j++)
        {
            if(j != i){
                if((i % j) == 0){
                    isSoNguyenTo = false;
                }
            }
        }
        if(isSoNguyenTo == true){
            printf("%d ", i);
        }
    }
    return 0;
}
