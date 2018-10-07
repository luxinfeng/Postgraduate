///查找表的倒数第K个节点 
SListNode* SListFindTailKNode(SListNode* list, size_t k)//9.查找单链表的倒数第k个节点，要求只能遍历一次链表 
{
	SListNode *cur,*fast;//一样用了快慢指针
	cur=fast=list;
	while(k--)
	{
		if (fast==NULL)
		{
			return 0;
		}
		fast=fast->next;
	}
	while(fast)
	{
		fast=fast->next;
		cur=cur->next;
	}
	return cur;
}
///删除表的倒数第K的节点 
void SListFindPop(SListNode *list,size_t k)//10.删除链表的倒数第K个结点 
{
	SListNode *cur=NULL;
	SListNode *tail=list;
	cur=SListFindTailKNode(list,k);
	while(list->next!=cur)
	{
		list=list->next;
	}
	list->next=cur->next;
	free(cur);
}
