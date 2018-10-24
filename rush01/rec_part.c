/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rec_part.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahavrius <ahavrius@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 14:53:27 by ahavrius          #+#    #+#             */
/*   Updated: 2018/09/16 16:00:09 by ahavrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	simlify(char ***a)
{
	int 	i;
	int 	j;
	char	*c;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (a[i][j] != NULL)
			{
				c = (char *)malloc(a[i][j][0] + 2);
				new_sell(a, i, j, c);
				free(a[i][j]);
				a[i][j] = c;
			}
			j++;
		}
		i++;
	}
}

void	new_sell(char ***a, int i, int j, char *c)
{
	int k;
	int l;

	k = 0;
	l = 0;
	while (a[i][j][k] != '\0')
	{
		if (a[i][j][k] != '0')
		{
			c[l] = a[i][j][k];
			l++;
		}
		k++;
	}
	c[l] = '\0';
}

void	reverse(char **a)
{
    int     i;
    int     j;
    char    *c;

    i = 0;
    j = 0;
    while (i < 9)
    {
        while (j < 9)
        {
            if (a[i][j] != NULL)
            {
                c = (char *)malloc(a[i][j][0] + 2);
                rev_sell(a, i, j, c);
                free(a[i][j]);
				a[i][j] = c;
            }
            j++;
        }
        i++;
    }
}

void	rev_sell(char ***a, int i, int j, char *c)
{
	int k;
	int len;

	k = 1;
	len = a[i][j][0];
	c[0] = len;
	while (a[i][j][k] != '\0')
	{
		c[len - k + 1] = a[i][j][k];
		k++;
	}
	c[k] = '\0';
}

char	**ar_init(char **mass)
{
	int i;
	int j;
	char **c;

	c = (char **)malloc(sizeof(int *) * 9);
	i = 0;
	j = 0;
	while (i < 9)
	{
		c[i] = (char *)malloc(9);
		j = 0;
		while (j < 9)
		{
			c[i][j] = mass[i][j];
			j++;
		}
		i++;
	}
	return (c);
}

char	**main_rec(char **mass, char ***check)
{
	char **new_;
    int valid;

	new_ = mass_init(mass);
	simplify(check);
    valid = rec(mass, check, new_);
	return (new_);
}

char    **main_rec_reverse(char **mass, char ***check)
{
    char    **new_;
    int     valid;
    
    new_ = mass_init(mass);
    reverse(check);
    valid = rec(new_, check, 0 ,0, 0);
    return (new_);
}

int main(void)
{
	char var[][] = {
		{'9','.','.','.','7','.','.','.','.'},
		{'2','.','.','.','9','.','.','5','3'},
		{'.','6','.','.','1','2','4','.','.'},
		{'8','4','.','.','.','1','.','9','.'},
		{'5','.','.','.','.','.','8','.','.'},
		{'.','3','1','.','.','4','.','.','.'},
		{'.','.','3','7','.','.','6','8','.'},
		{'.','9','.','.','5','.','7','4','1'},
		{'4','7','.','.','.','.','.','.','.'}
	}

}
