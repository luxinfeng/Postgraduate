///////  1.��β��ͷ��ӡ������ //////////

void SLitsPrintTailToHead(SListNode* pHead)//�ǵݹ��㷨(��������ָ��һ�����嵽β��p1����һ�����嵽ͷ��ʼѭ��p2��ÿ��p2ѭ����β��ʱ�����p2��ֵ����β��p1ָ��p2.�ٴο�ʼѭ�����Դ�������)
{

	SListNode *cur=NULL;
	while (cur!=pHead)
	{
		SListNode *tail=pHead;
		while(tail->next!=cur)
		{
			tail=tail->next;
		}
		printf("%d ",tail->data);
		cur=tail;
	}

}
void SListPrintTailToHeadR(SListNode* pHead)//�ݹ��㷨
{
	if (pHead==NULL)
	{
		return;
	}
	SListPrintTailToHeadR(pHead->next);
	printf("%d ",pHead->data);
}
///////////////////////////////////////////////
