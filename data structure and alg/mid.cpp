#include<stdio.h>
#include<stdlib.h>
struct link
{
	int num;
	struct link *next;
};

void FindMid(link *head)
{
	link *fast = head;
	link *slow = head;
	while(fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		printf("%d\n",slow->num);
	}
	printf("%d",slow->num);
//	return 0;
}
int main()
{
	struct link *head,*cur,*m;//创建头指针，以及快指针和慢指针
	head = (struct link*)malloc(sizeof(struct link));
	cur = (struct link*)malloc(sizeof(struct link));
//	slow = (struct link*)malloc(sizeof(struct link));
//	fast = (struct link*)malloc(sizeof(struct link));
	m = (struct link*)malloc(sizeof(struct link));


	head->next = cur;
	for (int i = 0;i<8;i++)
	{
		cur->num = i;
		printf("%d",cur->num);
		cur->next = (struct link*)malloc(sizeof(struct link));
		cur = cur->next;
	}
	cur->next=NULL;
	FindMid(head);
	return 0;
}
	
