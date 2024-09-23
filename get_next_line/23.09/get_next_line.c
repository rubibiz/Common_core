/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonio <tonio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:30:57 by amoty             #+#    #+#             */
/*   Updated: 2024/09/23 22:57:58 by tonio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

char    *get_next_line(int fd)
{
    static char    *buff;
    char    *stock;
    size_t     i;
    static size_t  line;
    
    i = 0;
    
    if (line == 0)
    {
        printf("on rentre ici au debut \n");
        buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
        read(fd,buff, BUFFER_SIZE);
    }
        printf("buff au debut :\n%s \n\n\n", buff);
    stock = ft_strdup(buff, BUFFER_SIZE,line);
    printf("Stock au debut :%s\n", stock);
    line = ft_strlen(stock) + line;
    printf("Deuxieme boucle : %ld\n",line);
    printf("Resultat du get next line  :");
    return(stock);
}

int main()
{
    int caca = open("texto.txt", O_RDONLY);
    printf("%s\n", get_next_line(caca));
    printf("\nPREMIER GET NEXT LINE FINI\n");
    printf("%s\n", get_next_line(caca));
    printf("\nDEUXIEME GET NEXT LINE FINI\n");
    printf("%s\n", get_next_line(caca));
    printf("\nTroisieme GET NEXT LINE FINI\n");
    printf("%s\n", get_next_line(caca));
    printf("\nquatrieme GET NEXT LINE FINI\n");

}