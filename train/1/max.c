/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:27:26 by abakhaev          #+#    #+#             */
/*   Updated: 2024/06/05 09:03:23 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int max(int *tab, unsigned int len)
{
    int result;
    int i = 0;

        if(len == 0)
            return 0;
        
            result = tab[i];

                while(i < len)
                    {
                        if(result < tab[i])
                            result = tab[i];
                            i++;
                    }
                return result;
}