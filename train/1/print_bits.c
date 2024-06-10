/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abakhaev <abakhaev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:30:57 by abakhaev          #+#    #+#             */
/*   Updated: 2024/06/05 09:04:35 by abakhaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit;

        while(i--)
            {
                bit = (octet >> i & 1) + '0';
                    write(1,&bit,1);
            }
}