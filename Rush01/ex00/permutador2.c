/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   permutador2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 00:20:37 by smoraes-          #+#    #+#             */
/*   Updated: 2023/12/03 00:24:01 by smoraes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int permutator(const char *src, int len, char *dest, char *destbits, int n, char destinofinal[][len], int *index)
{
    if (n == len)
    {
        // Almacena la permutación en destinofinal
        strncpy(destinofinal[*index], dest, len);
        (*index)++;
        return 1;
    }
    else
    {
        int count = 0;
        int i = 0;
        while (i < len)
        {
            if (destbits[i] == 0)
            {
                destbits[i] = 1;
                dest[n] = src[i];
                count += permutator(src, len, dest, destbits, n + 1, destinofinal, index);
                destbits[i] = 0;
            }
            i++;
        }
        return count;
    }
}
int lent(char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    return (i);
}
int main(int argc, char **argv)
{
	(void) argc;
    int len = lent(argv[1]);
    char dest[len];
    char destbits[len];
    memset(destbits, 0, sizeof destbits);
    // Declara un arreglo destinofinal para almacenar las permutaciones de forma permanente
    char destinofinal[1000][len];
    int index = 0;
    int total = permutator(argv[1], len, dest, destbits, 0, destinofinal, &index);
    // Imprime las permutaciones almacenadas en destinofinal
    for (int i = 0; i < total; i++)
    {
        printf("%s\n", destinofinal[i]);
    }
    printf("comb: %d\n", total);
    return (0);
}
