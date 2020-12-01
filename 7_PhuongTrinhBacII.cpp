#include <stdio.h>
#include <math.h>

void giaiphuongtrinh()
{
    float a, b, c, x;
    char y;

    printf("CHUONG TRINH GIAI PHUONG TRINH BAC II\nNHAP A: ");
    scanf("%f", &a);
    
    while (a == 0)
    {
        printf("BAN CAN NHAP MOT GIA TRI KHAC 0!\nNHAP A: ");
        scanf("%f", &a);
    }
    
    printf("NHAP B: ");
    scanf("%f", &b);
    printf("NHAP C: ");
    scanf("%f", &c);
    
    x = b * b - (4 * a * c);
    if (x < 0)
    {
        printf("PHUONG TRINH VO NGHIEM!");
    }
    else if (x == 0)
    {
        printf("PHUONG TRINH DA CHO CO MOT NGHIEM KEP: %g", -b / 2 / a);
    }
    else
    {
        printf("PHUONG TRINH CO HAI NGHIEM %g VA %g", (-b + sqrt(x)) / 2 / a, (-b - sqrt(x)) / 2 / a);
    }
}

int main()
{
    giaiphuongtrinh();
   
    char y = 'y';
    while (y == 'y')
    {
        y++;
        printf("\n\nBAN CO MUON GIAI THEM PHUONG TRINH KHAC KHONG?");
        printf("\nNHAN PHIM Y DE TIEP TUC, NHAN PHIM BAT KY DE HUY\n");
        scanf(" ");
        scanf("%c", &y);
        if (y == 'y')
        {
            printf("\n");
            giaiphuongtrinh();
        }
        else
        {
            printf("\n\nCAM ON BAN DA DUNG CHUONG TRINH!");
        }
    }

    return 0;
}
