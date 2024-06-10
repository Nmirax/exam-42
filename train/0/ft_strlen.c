/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 08:23:38 by abakhaev          #+#    #+#             */
/*   Updated: 2024/04/08 08:22:01 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
    
int ft_strlen(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}