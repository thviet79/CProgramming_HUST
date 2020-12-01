#include <stdio.h>
#include <math.h>

void dientich()
{
	float a, b, c, d;
	printf("CHUONG TRINH TINH DIEN TICH TAM GIAC\n\nNHAP DO DAI 3 CANH CUA TAM GIAC:\n\n");
	scanf("%f%f%f", &a, &b, &c);
	d = a + b + c;
	d /= 2;
	d = d * (d - a) * (d - b) * (d - c);
	if (d > 0)
	{
		printf("\nDIEN TICH TAM GIAC CUA BAN LA %g", sqrt(d));
	}
	else if (a <= 0 || b <= 0 || c <= 0 || d <= 0)
	{
		printf("\nTAM GIAC CUA BAN KHONG TON TAI, HAY NHAP DO DAI PHU HOP\n\n");
		dientich();
	}
}

int main()
{
	dientich();
	for (char c = 'y'; c == 'y'; c)
	{
		printf("\n\nBAN CO MUON TINH THEM DIEN TICH MOT TAM GIAC KHAC KHONG?\n\nNHAN PHIM Y DE TIEP TUC, NHAN PHIM BAT KY DE HUY\n");
		scanf(" ");
		scanf("%c", &c);
		if (c != 'y')
		{
			printf("\nCAM ON BAN DA DUNG CHUONG TRINH");
			break;
		}
		else
		{
			printf("\n");
			dientich();
		}
	}
}
