#include<stdio.h>
#include<stdlib.h>

 
//����һ������ڵ�
struct ListNode
{
	int value;
	ListNode *next;
};
 
//����һ���½ڵ㵽������(��������ͷ��)
void CreateList(ListNode * & head, int data)
{
	//�����½ڵ�
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
		next = cur->next; //temp��Ϊ�м�ڵ㣬��¼��ǰ������һ���ڵ��λ��
		cur->next = prev;  //��ǰ���ָ��ǰһ���ڵ�
		prev = cur;     //ָ�����
		cur = next;  //ָ����ƣ�������һ���ڵ�
	}
 
	head->next = NULL; //while�����󣬽���ת������һ���ڵ㣨����תǰ�ĵ�һ�����head����������ΪNULL
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

