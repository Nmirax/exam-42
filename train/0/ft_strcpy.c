/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 08:12:18 by abakhaev          #+#    #+#             */
/*   Updated: 2024/05/14 07:36:48 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


char    *ft_strcpy(char *s1, char *s2)
{
    int i;
    i = 0;
        
        while(s2 != '\0')
            {
                s1[i] = s2[i];
                    i++;
            }
            s1[i] = '\0';
            return (s1);
}