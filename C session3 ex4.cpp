#include <stdio.h>

int main() 
{
    float Toan, Van, Anh, Tong, Diemtrungbinh;
    printf("Hay nhap diem mon toan: ");
    scanf("%f", &Toan);
    printf("Hay nhap diem mon van: ");
    scanf("%f", &Van);
    printf("Hay nhap diem mon anh: ");
    scanf("%f", &Anh);
    Tong = Toan + Van + Anh;
    Diemtrungbinh = Tong / 3;
    printf("Tong diem cua ca ba mon la: %.2f\n", Tong);
    printf("Diem trung binh cua ca ba mon la: %.2f\n", Diemtrungbinh);

}

