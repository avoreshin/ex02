#include <unistd.h>

void ft_union(char *s1, char *s2)
{
	int arr[256] = {0};
	int i;
	
	i = 0;
	while(s1[i])
	{
		if(arr[(int)s1[i]] == 0)
		{
			write(1, &s1[i], 1);
			arr[(int)s1[i]] = 1;
		}
		i++;
	}
	i = 0;
	while(s2[i])
	{
		if(arr[(int)s2[i]] == 0)
		{
			write(1, &s2[i], 1);
			arr[(int)s2[i]] = 1;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return 0;
}

/* Assignment name  : union
		Expected files   : union.c
		Allowed functions: write
--------------------------------------------------------------------------------
en
		Write a program that takes two strings and displays, without doubles, the
		characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
		will be followed by a \n.

If the number of arguments is not 2, the program displays \n.
--------------------------------------------------------------------------------
ru
	Напишите программу, которая берет две строки и отображает без двойников
символы, которые появляются в любой из строк.
	Отображение будет происходить в том порядке, в каком символы появляются в
 командной строке, и за ним последует a \n.
Если число аргументов не равно 2, то программа выводит \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
		zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
		df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
		rienct phas$
		$>./union | cat -e
		$
$>
$>./union "rien" | cat -e
		$
$>
 */