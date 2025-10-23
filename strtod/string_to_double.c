/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_to_double.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fif <luis-fif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:34:05 by luis-fif          #+#    #+#             */
/*   Updated: 2025/10/23 15:40:31 by luis-fif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    char s[] = "879.21 some text after  the double value!";
    double result;
    char *ptr = NULL;

    result = strtod (s, &ptr);

    printf("result: %f\n", result);
    printf("String |%s|\n", ptr);

    return (0);
}

/*
output:
    result: 879.210000
    String | some text after  the double value!|

*/