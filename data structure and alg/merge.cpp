SListNode* SListMerge(SListNode* list1, SListNode* list2)//�ϲ�������������,�ϲ�����Ȼ���� 
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
		newlist=list=list1;//һ��������λͷ����һ����������������ʱҪ����ͷ��ָ����ܱ���ȫ������
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
