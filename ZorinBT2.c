#include <stdio.h>
#include <stdlib.h>


int main()
{
    int hang;
    char clean[255];

    //Check loi
    while(1){
        printf("Nhap so hang: ");
        if(scanf("%d", &hang) == 1){
            if(hang >= 0){
                break;
            }else{
                printf("So hang phai lon hon hoac bang 0\n");
            }
        }else{
            printf("Nhap sai dinh dang, vui long nhap lai!\n");
            scanf("%s", &clean[0]);
        }
    }

    for(int h = 0; h <= hang; h++)
    {
        for(int k = 0; k <= h; k++)
        {
            printf("%d ", giaithua(h, k));
        }
        printf("\n");
    }
    return 0;
}

void giaithua(int h, int k)
{
    int giaiThuaHang = 1, giaiThuaK = 1, giaithuahieu = 1;

    //Giai thua so hang
    for(int i = 1; i <= h; i++)
    {
        giaiThuaHang = giaiThuaHang * i;
    }
    //Giai thua k
    for(int i = 1; i <= k; i++)
    {
        giaiThuaK = giaiThuaK * i;
    }

    //Giai thua (n-k)!
    for(int i = 1; i <= (h - k); i++)
    {
        giaithuahieu = giaithuahieu * i;
    }

    tohop(giaiThuaHang, giaiThuaK, giaithuahieu);
}

//CT: n! / k!(n-k)!
int tohop(int giaiThuaHang, int giaiThuaK, int giaithuahieu)
{
    int congthuc = (giaiThuaHang) / ((giaiThuaK) * (giaithuahieu));
    return congthuc;
}
