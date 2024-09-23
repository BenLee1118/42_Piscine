// #include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_sort_int_tab(int *tab, int size)
{
    int holder;
    int runner;

    holder = 0;
    size = size + 1;
    while (holder < size)
    {
        runner = holder + 1;
        while (runner < size)
        {
            if (*(tab + holder) > *(tab + runner))
                ft_swap((tab + holder), &tab[runner]);
            runner++;
        }
        holder++;
    }
}

/*
int main()
{
    int str[6] = {6, 2, 10, 3, 5, 8};
    int size = 6;
    printf("Before : %d, %d, %d, %d, %d, %d\n", str[0], str[1], str[2], str[3], str[4], str[5]);
    ft_sort_int_tab(str, size);
    printf("After : %d, %d, %d, %d, %d, %d\n", str[0], str[1], str[2], str[3], str[4], str[5]);
}
*/