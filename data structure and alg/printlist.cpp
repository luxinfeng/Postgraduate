///////  1.从尾到头打印单链表 //////////

void SLitsPrintTailToHead(SListNode* pHead)//非递归算法(利用俩个指针一个定义到尾部p1，另一个定义到头开始循环p2，每当p2循环到尾部时，输出p2的值，让尾部p1指向p2.再次开始循环，以此往复。)
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
void SListPrintTailToHeadR(SListNode* pHead)//递归算法
{
	if (pHead==NULL)
	{
		return;
	}
	SListPrintTailToHeadR(pHead->next);
	printf("%d ",pHead->data);
}
///////////////////////////////////////////////
