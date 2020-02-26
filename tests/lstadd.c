/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstadd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimaguir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:47:47 by wimaguir          #+#    #+#             */
/*   Updated: 2020/02/25 11:50:14 by wimaguir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

struct	Node
{
	int data;
	struct Node* next;
};

struct Node	*Insert(struct Node *head, int x)
{
	struct Node* temp = malloc(sizeof(struct Node));
	temp->data = x;
	temp->next = NULL;
	if (head)
	   	temp->next = head;
	head = temp;
	return head;
}

void	Print(struct Node *head)
{
	printf("List is: ");
	while (head)
	{
		printf(" %d", head->data);
		head = head->next;
	}
	printf("\n");
}

int		main(void)
{
	struct Node *head = NULL;
	printf("How many numbers?\n");
	int n;
	int i;
	int x;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter the number \n");
		scanf("%d", &x);
		head = Insert(head, x);
		Print(head);
	}
}
