// #include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_rev_int_tab(int *tab, int size)
{
    int begin;
    int end;

    begin = 0;
    end = size -1;
    while (begin < end)
    {
        ft_swap((tab + begin), &tab[end]);
        begin++;
        end--;
    }
}

/*
int main()
{
    int str[6] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    printf("Before : %d, %d, %d, %d, %d, %d\n", str[0], str[1], str[2], str[3], str[4], str[5]);
    ft_rev_int_tab(str, size);
    printf("After : %d, %d, %d, %d, %d, %d\n", str[0], str[1], str[2], str[3], str[4], str[5]);
}
*/