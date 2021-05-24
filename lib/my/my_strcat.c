/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** concatenates two strings
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int a = 0;

    while (dest[i] != '\0') {
        i = i + 1;
    }
    while (src[a] != '\0') {
        dest[i] = src[a];
        a = a + 1;
        i = i + 1;
    }
    return (dest);
}
