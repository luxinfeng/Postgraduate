SListNode* SListIsCycle(SListNode* list)//11.�ж��Ƿ����
{
	SListNode *cur,*fast;
	cur=fast=list;
	while (fast && fast->next)
	{
		cur=cur->next;
		fast=fast->next->next;
		if (fast==cur)
		{
			return cur;
		}	
	}
	return NULL;
}
