/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josekgob <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 12:00:33 by josekgob          #+#    #+#             */
/*   Updated: 2020/07/13 12:35:10 by josekgob         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>


char    *ft_strrev(char     *str)
{
            int counter;

            counter = 0;
            while(str[counter])
            {
                            counter++;
            }
            while(counter)
            {
                            int     readstr;
                            char    temp;
                            readstr = 0;
                            temp = str[readstr];
                            str[readstr] = str[counter - 1];
                            str[counter - 1] = temp;
                            readstr++;
                            counter--;
            }
			return	(str);

}

int main(void)
{
                printf("%s \n", ft_strrev("TLHOLOGELO"));
}
