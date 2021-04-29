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
#include <stdlib.h>

typedef struct s_list
{
	void *data;
	struct s_list *next;
} t_list;

//プロトタイプ

int ft_list_size(t_list *begin_list);


int main(void)
{
	printf("-----ft_list_size-----\n");
	t_list *list3 = malloc(sizeof(t_list *));
	list3->data = strdup("test3");
	list3->next = NULL;
	t_list *list2 = malloc(sizeof(t_list*));
	list2->data = strdup("test2");
	list2->next = list3;
	t_list *list1 = malloc(sizeof(t_list*));
	list1->data = strdup("test1");
	list1->next = list2;

	printf("list1->data:%s\n", list1->data);
	printf("sizeof(t_list):%d\n", sizeof(t_list *));
	printf("sizeof(t_list->data):%d\n", sizeof(list1->data));
	printf("sizeof(t_list->next):%d\n", sizeof(list1->next));
	printf("list1:%p\n", list1);
	printf("list1->data:%p\n", list1->data);
	printf("list1->next:%p\n", list1->next);
	printf("list2:%p\n", list2);
	printf("list2->data:%p\n", list2->data);
	printf("list2->next:%p\n", list2->next);
	printf("list3:%p\n", list3);
	int cnt = ft_list_size(list1);
	printf("list_size:%d\n", cnt);
	printf("-------------------\n");

	printf("-----ft_list_push_front-----\n");
	printf("-------------------\n");
	return (0);
}
