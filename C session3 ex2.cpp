#include <stdio.h>

int main() 
{
    float cel, fah;
    printf("Nhap nhiet do C: ");
    scanf("%f", &cel);
    fah = (cel * 9 / 5) + 32;
    printf("%.2f do C = %.2f do F", cel, fah);
    
}

