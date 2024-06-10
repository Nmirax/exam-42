/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:48:21 by abakhaev          #+#    #+#             */
/*   Updated: 2024/06/05 08:56:45 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;

        while(s[i] != '\0')
            {
                j = 0;
                while(reject[j] != '\0')
                    {
                        if (s[i] == reject[j])
                                return i;
                                j++;
                    }
                i++;
            }
        return i;
}