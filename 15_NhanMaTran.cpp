#include <stdio.h>

void Nhapmatran(double a[100][100], int m, int n)
{
  for (int i = 0; i < m; i++)
  {
    printf("Hay nhap dong %d cua ma tran:\n", i + 1);
    for (int k = 0; k < n; k++)
    {
      scanf("%lf", &a[i][k]);
    }
  }
}

void Xuatmatran(double a[100][100], int m, int n)
{
  for (int i = 0; i < m; i++)
  {
    for (int k = 0; k < n; k++)
      printf("%g\t", a[i][k]);
    printf("\n");
  }
}

void Nhanmatran(double a1[100][100], int m1, int n1, double a2[100][100], int m2, int n2)
{
  double a[100][100];
  double sum;
  for (int i = 0; i < m1; i++)
  {
    for (int j = 0; j < n2; j++)
    {
      for (int x = 0; x < n1; x++)
      {
        sum += a1[i][x] * a2[x][j];
      }
      a[i][j] = sum;
      sum = 0;
    }
  }
  printf("Ma tran ket qua la:\n");
  Xuatmatran(a, m1, n2);
}

int main()
{
  double a1[100][100], a2[100][100];
  int m1, m2, n1, n2;

  printf("Nhap so hang va cot cua ma tran thu nhat:\n");
  scanf("%d%d", &m1, &n1);
  Nhapmatran(a1, m1, n1);

  for (;;)
  {
    printf("Nhap so hang va cot cua ma tran thu hai:\n");
    scanf("%d%d", &m2, &n2);
    if (n1 != m2)
    {
      printf("Khong hop le, nhap lai!\n");
    }
    else
    {
      Nhapmatran(a2, m2, n2);
      break;
    }
  }
  Nhanmatran(a1, m1, n1, a2, m2, n2);
}