#include <stdio.h>

int main() 
{
    float r, Chuvi, Dientich;
    float Pi = 3.14;
    printf("Nhap ban kinh cua hinh tron: ");
    scanf("%f", &r);
    Chuvi = 2 * Pi * r;
    Dientich = Pi * r * r;
    printf("Chu vi cua hinh tron la: %.2f\n", Chuvi);
    printf("Dien tich cua hinh tron la: %.2f\n", Dientich);

}

