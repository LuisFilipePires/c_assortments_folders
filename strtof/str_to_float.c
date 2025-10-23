/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_float.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fif <luis-fif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:51:49 by luis-fif          #+#    #+#             */
/*   Updated: 2025/10/23 15:59:49 by luis-fif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
       strtod, strtof, strtold - convert ASCII string to floating-point number

SYNOPSIS
       #include <stdlib.h>

       double strtod(const char *nptr, char **endptr);
       float strtof(const char *nptr, char **endptr);
       long double strtold(const char *nptr, char **endptr);

*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char str[] = "025float number";
    char *rest;
    double nbr = strtof(str, &rest);

    printf("Number: %.2f\n", nbr);
    printf("Rest of the string: |%s|\n", rest);
    
    return (0);
}