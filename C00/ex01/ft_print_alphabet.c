#include <unistd.h>

void ft_print_alphabet(void)
{
    char i;

    i = 'a';
    while (i <= 'z')
    {
        write(1, &i, 1);
        i++;
    }
    // write(1, "abcdefghijklmnopqrstuvwxyz", 26)
}

/*
int main()
{
    ft_print_alphabet();
}
*/