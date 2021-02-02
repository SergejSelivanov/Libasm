/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Wjena <Wjena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:21:18 by Wjena             #+#    #+#             */
/*   Updated: 2020/10/28 17:39:52 by Wjena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int     main(void)
{
    char    *str;
    int     fd;
    int     d;
    char    buffer[100];

    printf ("FT_WRITE\n");
    ft_write(1, "ASM: asm\n", 9);
    write(1, "ORIG: asm\n", 10);
    printf ("\n");
    fd = open("./file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);
    printf ("ASM:  %lu\n", ft_write(fd, "DOTA2 is the best ", ft_strlen("DOTA2 is the best ")));
    printf ("ORIG: %lu\n", write(fd, "DOTA2 is the best ", ft_strlen("DOTA2 is the best ")));
    close(fd);
    fd = ft_write(-1, "where", 3);
    perror(str);
    printf("bad fd: %d\n", fd);
    printf ("\n");

    printf ("FT_READ\n");
    fd = open("./file.txt", O_RDONLY);
    printf ("ASM:  %d\n", (d = ft_read(fd, buffer, 100)));
    buffer[d] = '\0';
    printf ("ASM:  %s\n", buffer);
    close(fd);
    fd = open("./file.txt", O_RDONLY);
    printf ("ORIG:  %d\n", (d = read(fd, buffer, 100)));
    buffer[d] = '\0';
    printf ("ORIG:  %s\n", buffer);
    close(fd);
    printf ("ASM: bad fd: %d\n", (d = ft_read(-1, buffer, 100)));
    perror(str);
    printf ("ORIG: bad fd: %d\n", (d = read(-1, buffer, 100)));
    perror(str);
    printf ("Write words!\n");
    d = ft_read(0, buffer, 100);
    buffer[d] = '\0';
    printf ("s = %s\n", buffer);
    printf ("bytes = %d\n", d);
    printf ("\n");

    printf ("FT_STRLEN\n");
    printf ("ASM: %lu\n", ft_strlen("lol"));
    printf ("ORIG: %lu\n", strlen("lol"));
    printf ("\n");
    printf ("ASM: %lu\n", ft_strlen(""));
    printf ("ORIG: %lu\n", strlen(""));
    printf ("\n");
    printf ("ASM: %lu\n", ft_strlen("Александр Сергеевич – один из самых читаемых и любимых писатель стран СНГ.\
    Его книги читают. Его стихи учат наизусть.Сказки Пушкина появились во время самого яркого расцвета творчества автора, в самый его плодотворный период. \
    Они предназначались для взрослых, но очень быстро вошли в детское чтение."));
    printf ("ORIG: %lu\n", strlen("Александр Сергеевич – один из самых читаемых и любимых писатель стран СНГ.\
    Его книги читают. Его стихи учат наизусть.Сказки Пушкина появились во время самого яркого расцвета творчества автора, в самый его плодотворный период. \
    Они предназначались для взрослых, но очень быстро вошли в детское чтение."));
    printf ("\n");

    printf ("FT_STRDUP\n");
    printf ("ASM:  %s\n", ft_strdup("Александр Сергеевич\n"));
    printf ("ORIG:  %s\n", strdup("Александр Сергеевич\n"));
    printf ("\n");
    printf ("ASM:  %s\n", ft_strdup(""));
    printf ("ORIG:  %s\n", strdup(""));
    printf ("\n");
    printf ("ASM:  %s\n", ft_strdup("Александр Сергеевич – один из самых читаемых и любимых писатель стран СНГ.\n"));
    printf ("ORIG:  %s\n", strdup("Александр Сергеевич – один из самых читаемых и любимых писатель стран СНГ.\n"));
    printf ("\n");
    printf ("ASM:  %s\n", ft_strdup("123=%/"));
    printf ("ORIG:  %s\n", strdup("123=%/"));
    printf ("\n");

    printf ("FT_STRCPY\n");
    str = (char *)malloc(100);
    printf ("ASM: %s\n", ft_strcpy(str, "12345"));
    printf ("ORIG: %s\n", strcpy(str, "12345"));
    printf ("\n");
    printf ("ASM: %s\n", ft_strcpy(str, ""));
    printf ("ORIG: %s\n", strcpy(str, ""));
    printf ("\n");
    printf ("ASM: %s\n", ft_strcpy(str, "Александр Сергеевич – один из самых читаемых и любимых писатель стран СНГ.\
    Его книги читают. Его стихи учат наизусть.Сказки Пушкина появились во время самого яркого расцвета творчества автора, в самый его плодотворный период. \
    Они предназначались для взрослых, но очень быстро вошли в детское чтение."));
    printf ("ORIG: %s\n", strcpy(str, "Александр Сергеевич – один из самых читаемых и любимых писатель стран СНГ.\
    Его книги читают. Его стихи учат наизусть.Сказки Пушкина появились во время самого яркого расцвета творчества автора, в самый его плодотворный период. \
    Они предназначались для взрослых, но очень быстро вошли в детское чтение."));
    free(str);
    printf ("\n");

    printf ("FT_STRCMP\n");
    printf ("ASM:  %d\n", ft_strcmp("abc", "abc"));
    printf ("ORIG: %d\n", strcmp("abc", "abc"));
    printf ("\n");
    printf ("ASM:  %d\n", ft_strcmp("abcd", "abc"));
    printf ("ORIG: %d\n", strcmp("abcd", "abc"));
    printf ("\n");
    printf ("ASM:  %d\n", ft_strcmp("abc", "abcd"));
    printf ("ORIG: %d\n", strcmp("abc", "abcd"));
    printf ("\n");
    printf ("ASM:  %d\n", ft_strcmp("", ""));
    printf ("ORIG: %d\n", strcmp("", ""));
    printf ("\n");
    printf ("ASM:  %d\n", ft_strcmp("", "abc"));
    printf ("ORIG: %d\n", strcmp("", "abc"));
    printf ("\n");
    printf ("ASM:  %d\n", ft_strcmp("abc", ""));
    printf ("ORIG: %d\n", strcmp("abc", ""));
    printf ("\n");
    printf ("ASM:  %d\n", ft_strcmp("abcef", "abcfe"));
    printf ("ORIG: %d\n", strcmp("abcef", "abcfe"));
    printf ("\n");
    printf ("ASM:  %d\n", ft_strcmp("abcfe", "abcef"));
    printf ("ORIG: %d\n", strcmp("abcfe", "abcef"));
    printf ("\n");
    printf ("ASM:  %d\n", ft_strcmp("Александр Сергеевич – один из самых читаемых и любимых писатель стран СНГ.", \
    "Александр Сергеевич – один из самых читаемых и любимых писатель стран СНГ."));
    printf ("ORIG: %d\n", strcmp("Александр Сергеевич – один из самых читаемых и любимых писатель стран СНГ.",    \
    "Александр Сергеевич – один из самых читаемых и любимых писатель стран СНГ."));
    printf ("\n");
    printf ("ASM:  %d\n", ft_strcmp("abcfe", \
    "Александр Сергеевич – один из самых читаемых и любимых писатель стран СНГ."));
    printf ("ORIG: %d\n", strcmp("abcfe", \
    "Александр Сергеевич – один из самых читаемых и любимых писатель стран СНГ."));
    printf ("\n");
    return (0);
}