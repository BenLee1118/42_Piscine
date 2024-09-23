#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb2(void)
{
    int i;
    int j;

    i = 0;
    while (i < 100)//put 98 better. But in this case is acceptable due to j reach 99 then it would not print even if i is 99
    {
        j = i + 1;
        while (j < 100)
        {
            ft_putchar((i / 10) + '0');
            ft_putchar((i % 10) + '0');
            ft_putchar(' ');
            ft_putchar((j / 10) + '0');
            ft_putchar((j % 10) + '0');
            write (1, ", ", 2);
            j++;
        }
        i++;
    }
}

/*
int main()
{
    ft_print_comb2();
}
*/