#include "my_math.h"

int temp1; /* inicjalizowana zerem przez skrypt startowy, trafi do sekcji .bss */
int temp2 = 5; /* inicjalizowana wartością z pamięci FLASH przez przez skrypt startowy, trafi do sekcji .data */
int temp3 = 5;
int temp4 = 5;

void SystemInit(void)
{
    
}

int main(void)
{
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");
    int a = 123;
    int b = -500;
    int result_add = add(a, b);
    int result_sub = sub(a, b);
}
