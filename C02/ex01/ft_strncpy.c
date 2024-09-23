// #include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int count;

    count = 0;
    while (*(src + count) != '\0' && count < n)
    {
        *(dest + count) = *(src + count);
        count++;
    }
    while (count < n)
    {
        *(dest + count) = '\0';
        count++;
    }
    return (dest);
}

/*
int main() 
{
  char src[20] = "C programming";
  char dest[25];

  // copying str1 to str2
  ft_strncpy(dest, src, 6);

  printf("Destination : %s\n", dest);
  printf("Return : %s\n", ft_strncpy(dest, src, 6));

  return 0;
}

*/