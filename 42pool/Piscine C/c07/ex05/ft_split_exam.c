#include <stdlib.h>
#include <stdio.h>

char *ft_strndup(char *src, int n)
{
    char *dest;
    int i = 0;
    if (!(dest = malloc(sizeof(char) * n + 1)))
        return (0);
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
int ft_check(char *str, int i)
{
    if (str[i] >= 32 && str[i] <= 126)
        return (1);
    return (0);
}
int ft_countw(char *str)
{
    int i = 0;
    int j = 0;

    while ((str[i] == '\0') || (str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') || (str[i] >= 32 && str[i] <= 126))
    {
        while (str[i] >= 32 && str[i] <= 126)
        {
        if(!(str[i+1] >= 32 && str[i] <= 126))
        j = j + 1;
        i ++;
        }
    i++;
    }
    return (j);
}
char **ft_split(char *str)
{
    int i = 1;
    int j = 0;
    int n = 0;
    char **tab;
    int cw = ft_countw(str);

    if (!(tab = malloc(sizeof(char *) * (cw + 1))))
        return (0);
    while (i < cw)
    {
        while (str[j])
        {
            while (ft_check(str, j) != 1 && str[j])
                j++;
            while (ft_check(str, j) == 1 && str[j + n])
                n++;
            tab[i] = ft_strndup(&str[j], n);
            j = j + n;
            n = 0;
        }
        i++;
    }
    tab[i] = 0;
    return (tab);
}
int main(int ac, char **av)
{
    if (ac == 2)
    {
        char **tab;
        tab = ft_split(av[1]);
        int i = 0;
        while (tab[i] != 0)
        {
            printf("%s\n", tab[i]);
            i++;
        }
    }
    return (0);
}