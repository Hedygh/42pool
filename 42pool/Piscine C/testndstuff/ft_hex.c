#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int   ft_atoi(char *str)
{
  int i = 0;
  int nb = 0;
  while (str[i] >= '0' && str[i] <= '9')
      {
        nb = nb * 10 + str[i] - '0';
        i++;
      }
      return (nb);
}
void    ft_print_hex(int nb, char *str)
{
    long nbr;
    
    nbr = nb;
    if (nbr == 0)
        write (1, &str[0], 1);
    if (nbr < 0)
    {
        write (1, "-", 1);
        nbr = -nbr;
    }
    if (nbr >= 16)
    ft_print_hex(nbr / 16, str);
    ft_putchar(str[nbr%16]);
}
int main(int ac, char **av)
{
    char *base = "0123456789abcdef";
    if (ac == 2)
        {
            ft_print_hex(ft_atoi(av[1]), base);
        }
    write(1, "\n", 1);
    return (0);
}
