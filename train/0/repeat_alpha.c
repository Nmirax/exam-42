/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 08:36:14 by abakhaev          #+#    #+#             */
/*   Updated: 2024/06/04 11:46:14 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac , char **av)
{
	int i;
	int k;
	char *str;

	i = 0;
	k = 1;

		if (ac == 2)
			{
				str = av[1];
					while(str[i] != '\0')
						{
							if(str >= 'A' && str <= 'Z')
								k = str[i] - 64;
							if(str >= 'a' && str <= 'z')
								k = str[i] - 96;
							while(k >= 1)
								{
									write(1,&str[i],1);
									k--;
								}
							i++;
						}
			}
		write(1,"\n",1);
		return 0;
}