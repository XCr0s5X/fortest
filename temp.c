#include <stdio.h>

int main(void)
{
    int a = 999;
    printf("|% d |\n", a);
    printf("|% -10d |\n", a);
    printf("|% 10d |\n", a);
    float b = 220.5;
    printf("|% f |\n", b);
    printf("|% -10.3f |\n", b);
    printf("|% 10.2f |\n", b);
    printf("|% 4.3f |\n", b);
    return 0;
}