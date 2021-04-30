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
#include <errno.h>

typedef struct s_list
{
	void *data;
	struct s_list *next;
} t_list;

//プロトタイプ
size_t ft_strlen(const char *s);
char *ft_strcpy(char *dst, const char *src);
int ft_strcmp(char *s1, char *s2);
ssize_t ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t ft_read(int fildes, void *buf, size_t nbyte);
char *ft_strdup(const char *s1);
int ft_list_size(t_list *begin_list);

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
	printf("honke:%d\n", strcmp("\200\179", "ab"));
	printf("ft_strcmp:%d\n", ft_strcmp("\200\179", "ab"));
	printf("-------------------\n");

	printf("-----ft_write-----\n");
	// write(1, "abc\n", 4);
	printf("honke:%d\n", write(1, "abc\n", 4));
	// ft_write(1, "abc\n", 4);
	printf("ft_write:%d\n", ft_write(1, "abc\n", 4));

	//エラーケース
	int number;
	printf("ft_write:%d\n", ft_write(1, NULL, 4));
	number = errno;
	printf("error: %s\n", strerror(number));
	printf("honke:%d\n", write(1, NULL, 4));
	number = errno;
	printf("error: %s\n", strerror(number));
	printf("-------------------\n");

	printf("-----ft_read-----\n");
	char buf1[10];
	char buf2[10];

	printf("honke:%d\n", read(0, buf1, 10));
	printf("ft_read:%d\n", ft_read(0, buf2, 10));

	//エラーケース
	printf("honke:%d\n", read(0, NULL, 10));
	number = errno;
	printf("error: %s\n", strerror(number));
	printf("ft_read:%d\n", ft_read(0, NULL, 10));
	number = errno;
	printf("error: %s\n", strerror(number));
	printf("-------------------\n");

	printf("-----ft_strdup-----\n");
	char *str11;
	str11 = strdup("test");
	printf("strdup:%s\n", str11);
	char *str12;
	str12 = ft_strdup("test");
	printf("ft_strdup:%s\n", str11);
	printf("-------------------\n");

	printf("-----ft_list_size-----\n");

	printf("-------------------\n");
	return (0);
}
