/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_long.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis-fif <luis-fif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:13:52 by luis-fif          #+#    #+#             */
/*   Updated: 2025/10/23 15:23:28 by luis-fif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
NAME
       strtol, strtoll, strtoq - convert a string to a long integer

SYNOPSIS
       #include <stdlib.h>

       long strtol(const char *nptr, char **endptr, int base);

       long long strtoll(const char *nptr, char **endptr, int base);
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s = "123abc";
    char *rest = NULL;

    long x = strtol(s, &rest, 10);    //  , base 10

    printf("long int x: %li\n", x);
    printf("rest: %s\n", rest);

    char *st = "0011ABC";
    char *rest2 = NULL;

    long x1 = strtol(st, &rest2, 2);    //  , base 2

    printf("long int x: %li\n", x1);
    printf("rest: %s\n", rest2);



    return (0);
}

//how to convert a string to a long integer using strtol function

/*./a.out         
long int x: 123
rest: abc
long int x: 3
rest: ABC

*/
