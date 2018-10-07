SListNode* SListMerge(SListNode* list1, SListNode* list2)//合并两个有序链表,合并后依然有序 
{
	SListNode *newlist=NULL;//
	SListNode *list=NULL;
	if (list2==NULL)
	{
		return list1;
	}
	if (list1==NULL)
	{
		return list2;
	}
	if (list1->data < list2->data)
	{
		newlist=list=list1;//一个用来定位头，另一个用来遍历，返回时要返回头的指针才能遍历全部链表
		list1=list1->next;
	}
	else
	{
		newlist=list=list2;
		list2=list2->next;
	}
	while (list1&&list2)
	{
		if (list1->data < list2->data)
		{
			newlist->next=list1;
			list1=list1->next;
		}
		else
		{
			newlist->next=list2;
			list2=list2->next;
		}
		newlist=newlist->next;
	}
	if (list1)
	{
		newlist->next=list1;
	}
	if (list2)
	{
		newlist->next=list2;
	}
	return list;
}
