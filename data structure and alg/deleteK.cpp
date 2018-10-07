///���ұ�ĵ�����K���ڵ� 
SListNode* SListFindTailKNode(SListNode* list, size_t k)//9.���ҵ�����ĵ�����k���ڵ㣬Ҫ��ֻ�ܱ���һ������ 
{
	SListNode *cur,*fast;//һ�����˿���ָ��
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
///ɾ����ĵ�����K�Ľڵ� 
void SListFindPop(SListNode *list,size_t k)//10.ɾ������ĵ�����K����� 
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
