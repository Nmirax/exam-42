/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:44:50 by abakhaev          #+#    #+#             */
/*   Updated: 2024/06/06 09:32:28 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int n)
{
    char digit;

        if(n >= 10)
            ft_putnbr(n / 10);
                digit = (n % 10) + '0';
                write(1,&digit,1);
}

int main(int ac, char **av)
{
        (void)av;
            ft_putnbr(ac - 1);
            write(1,"\n",1);
            return 0;
}