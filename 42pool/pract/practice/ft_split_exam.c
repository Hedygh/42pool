#include <stdlib.h>
#include <stdio.h>

int ft_check(char *str, int i)
{
    if ((!(str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')))
        return (1);
    return (0);
}
char *ft_strndup(char *src, int n)
{
    char *dest;
    int i = 0;
    if (!(dest = malloc(sizeof(char) * (n + 1))))
        return (0);
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
int ft_countw(char *str)
{
    int i = 0;
    int j;
    int count = 0;
    
    while(str[i])
    {
        while (ft_check(str, i) != 1 && str[i])
        i++;
        j = 0;
        while(ft_check(str, i+j) == 1 && str[i + j])
            j++;
        if(j > 0)
        count++;
        i = i + j;
    }
    printf("%d ma variable cw\n", count);
    return (count);
}
char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int n;
    char **tab;
    int cw = ft_countw(str);

    if (!(tab = malloc(sizeof(char*) * (cw + 1))))
        return (0);
    while (i < cw)
    {
            while (ft_check(str, j) != 1 && str[j])
                j++;
            n = 0;
            while (ft_check(str, j+n) == 1 && str[j+n])
                n++;
            tab[i] = ft_strndup(&str[j], n);
            j += n;
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
