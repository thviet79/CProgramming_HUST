#include <stdio.h>

int main(){
    int n;
    printf("Nhap kich thuoc tam giac can: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n * 2 - 1; j++){
            if (j >= n + 1 - i && j <= n - 1 + i)
            printf("*");  
        else printf(" ");  
        }
        printf("\n");
    }
}
