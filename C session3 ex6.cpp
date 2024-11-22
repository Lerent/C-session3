#include <stdio.h>

int main() 
{
    float Canh, Chieucao, Dientich;
    printf("Hay nhap do dai canh cua tam giac: ");
    scanf("%f", &Canh);
    printf("Hay nhap chieu cao cua tam giac: ");
    scanf("%f", &Chieucao);
    Dientich = 0.5 * Canh * Chieucao;
    printf("Dien tich cua tam giac la: %.2f", Dientich);

}

