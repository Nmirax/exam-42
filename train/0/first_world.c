/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_world.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:36:04 by abakhaev          #+#    #+#             */
/*   Updated: 2024/06/10 08:32:34 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char c)
{

	write(1,&c,1);
}

int main(int ac, char **av)
{
	int i = 0;

		if(ac == 2)
			{
				while(av[1][i] == ' ' || av[1][i] == '\t')
					i++;
				while(av[1][i] != ' ' && av[1][i] != '\t')
				{
					ft_putchar(av[1][i]);
					i++;
				}
			}
		ft_putchar('\n');
		return 0;
}