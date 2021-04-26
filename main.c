/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apple <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 21:15:27 by apple             #+#    #+#             */
/*   Updated: 2021/04/26 21:18:31 by apple            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

//プロトタイプ
int ft_strlen(char *str);

int main(void)
{
	char *str1 = "test";
	printf("-----ft_strlen-----\n");
	printf("honke:%d\n",strlen(str1));
	printf("ft_strlen:%d\n", ft_strlen(str1));
	printf("-------------------\n");
	return (0);
}
