/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:04:43 by abakhaev          #+#    #+#             */
/*   Updated: 2024/06/05 08:58:29 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

    int is_power_of_2(unsigned int n)
   {
            if(n == 0)
                return 0;
            return (n & (n - 1)) == 0;
   }