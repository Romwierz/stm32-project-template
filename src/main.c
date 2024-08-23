int temp1; /* inicjalizowana zerem przez skrypt startowy, trafi do sekcji .bss */
int temp2 = 0; /* inicjalizowana wartością z pamięci FLASH przez przez skrypt startowy, trafi do sekcji .data */

void SystemInit(void)
{
    
}

int main(void)
{
    asm("nop");
    asm("nop");
    asm("nop");
    asm("nop");
}
