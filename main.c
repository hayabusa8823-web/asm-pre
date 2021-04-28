/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:15:27 by apple             #+#    #+#             */
/*   Updated: 2021/04/26 22:59:49 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//プロトタイプ
size_t ft_strlen(const char *s);
char *ft_strcpy(char *dst, const char *src);
int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char *str1 = "test";
	char *str2 = "123456789";
	char *str3 = NULL;

	printf("-----ft_strlen-----\n");
	printf("honke:%d\n",strlen(str1));
	printf("ft_strlen:%d\n", ft_strlen(str1));
	printf("honke:%d\n",strlen(str2));
	printf("ft_strlen:%d\n", ft_strlen(str2));
	printf("ft_strlen:%d\n", ft_strlen(str3));
	printf("-------------------\n");

	char str4[] = "123456789";
	char str5[] = "abc";
	char str6[] = "123456789";
	char str7[] = "abc";
	char *str8 = "";
	char *str9;
	char *str10;
	printf("-----ft_strcpy-----\n");
	str9 = strcpy(str4, str5);
	printf("honke:%s\n",str9);
	str10 = ft_strcpy(str6, str7);
	printf("ft_strcpy:%s\n", str6);
	printf("-------------------\n");

	printf("-----ft_strcmp-----\n");
	printf("honke:%d\n", strcmp("abc", "abc"));
	printf("ft_strcmp:%d\n", ft_strcmp("abc", "abc"));
	printf("honke:%d\n", strcmp("abcd", "abc"));
	printf("ft_strcmp:%d\n", ft_strcmp("abcd", "abc"));
	printf("honke:%d\n", strcmp("", "abce"));
	printf("ft_strcmp:%d\n", ft_strcmp("", "abce"));
	printf("-------------------\n");

	return (0);
}
