#include<stdio.h>
#include<stdlib.h>

 
//定义一个链表节点
struct ListNode
{
	int value;
	ListNode *next;
};
 
//插入一个新节点到链表中(放在链表头部)
void CreateList(ListNode * & head, int data)
{
	//创建新节点
	ListNode * p = (ListNode*)malloc(sizeof(ListNode));
	p->value = data;
	p->next = NULL;
 
	if (head == NULL)
	{
		head = p;
		return;
	}
	p->next = head;
	head = p;
}
 
void  printList(ListNode* head)
{
	ListNode * p = head;
	while (p != NULL)
	{
		printf("%d",p->value);
		p = p->next;
	}

}
 
ListNode* reverseList(ListNode* head) {
	if (head == NULL || head->next == NULL) 
		return head;
	ListNode* prev = head;
	ListNode* cur = head->next;
	ListNode* next = head->next->next;
 
	while (cur){
		next = cur->next; //temp作为中间节点，记录当前结点的下一个节点的位置
		cur->next = prev;  //当前结点指向前一个节点
		prev = cur;     //指针后移
		cur = next;  //指针后移，处理下一个节点
	}
 
	head->next = NULL; //while结束后，将翻转后的最后一个节点（即翻转前的第一个结点head）的链域置为NULL
	return prev;
}
 
 
int main()
{
	ListNode * head = NULL;
	for (int i = 0; i<9; i++)
		CreateList(head, i);
	printList(head);
	head = reverseList(head);
	printf("\n");
	printList(head);
	system("pause");
	return 0;
}

