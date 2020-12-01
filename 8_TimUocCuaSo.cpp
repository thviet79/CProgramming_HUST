#include <stdio.h>

void uoc()
{
	printf("CHUONG TRINH TIM CAC UOC CUA MOT SO TU NHIEN\nNHAP SO TU BAN PHIM, MAY TINH SE TRA VE CAC UOC: ");
	long long a;
	scanf("%lld", &a);
	long long dem = 0;

	if (a == 1)
	{
		printf("1\n");
	}

	while (a <= 0)
	{
		printf("BAN CAN NHAP MOT SO NGUYEN DUONG!\n");
		scanf("%lld", &a);
	}

	for (long long i = 1; i < a; i++)
	{
		if (a % i == 0 && a != 1)
		{
			dem++;
		}
	}

	if (dem == 1)
	{
		printf("\nSO BAN DA NHAP VAO LA MOT SO NGUYEN TO!\n");
	}
	else
	{
		printf("\nCAC UOC SO CUA SO DUOC NHAP LA: ");
		for (long long i = 1; i < a; i++)
		{
			if (a % i == 0 && a != 1)
			{
				printf("%lld ", i);
			}
		}
		printf("%lld", a);
	}
}

int main()
{
	uoc();

	for (char y = 'y'; y == 'y'; y)
	{
		printf("\n\n\nBAN CO MUON TIEP TUC KHONG?\nNHAP PHIM Y DE TIEP TUC HOAC NHAN PHIM BAT KY DE KET THUC!\n");
		scanf(" ");
		scanf("%c", &y);
		if (y == 'y')
		{
			uoc();
		}
		else
		{
			printf("\nCAM ON BAN");
		}
	}
}
