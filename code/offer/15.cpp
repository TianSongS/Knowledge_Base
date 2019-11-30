//�ϲ��������������
//���������������������������������ϳɺ��������Ȼ������Ҫ�ϳɺ���������㵥����������

#include <iostream>

using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
};

class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
        ListNode *head = new ListNode;//�����ͷ,-1��Ϊ��־
	    head->val = -1;
	    head->next = NULL;//ָ��NULL

        ListNode*cur = head;//��¼��ǰ�ڵ��λ��

        while(pHead1!=NULL&&pHead2!=NULL)
        {
            if(pHead1->val<=pHead2->val)
            {
                ListNode*New = new ListNode;//�µĽڵ�
                New->val = pHead1->val;
                New->next = NULL;
                cur->next = New;
                cur = New;
                pHead1 = pHead1->next;
            }
            else
            {
                ListNode*New = new ListNode;//�µĽڵ�
                New->val = pHead2->val;
                New->next = NULL;
                cur->next = New;
                cur = New;
                pHead2 = pHead2->next;
            }
        }
        if(pHead1!=NULL&&pHead2==NULL)
        {
            cur->next = pHead1;
        }
        if(pHead1==NULL&&pHead2!=NULL)
        {
            cur->next = pHead2;
        }
        return head->next->next->next;//���������ͷ����-1����Ҫ����
    }
};

ListNode *Create()
{
	ListNode *head = new ListNode;//����ͷ���
	head->val = -1;
	head->next = NULL;//ָ��NULL

	ListNode *Cur = head;	//���쵱ǰ��㣬���ڼ�¼��ǰ�������λ�ã���ʼλ��Ϊhead

	int data;	//�������������
	while(1)
	{
		cout << "�����뵱ǰ�ڵ����ֵ��" << endl;
		cin >> data;
		if(data == -1)	//����-1ʱ����������
		{
			break;
		}

		ListNode *New = new ListNode;	//�����½�㣬����ѭ����������
		New->val = data;	//�½������
		New->next = NULL;	  //�½ڵ�ָ��NULL
		Cur->next = New;	//��ǰ���ָ���¹���Ľ��
		Cur = New;	//��ǰ���˳�����½�㴦����¼�������λ��
	}
	return head;	//����ͷ���
}

int main()
{
    Solution s;
	ListNode*head1 = Create();
    ListNode*head2 = Create();
    ListNode*phead = s.Merge(head1,head2);
	while(phead!=NULL)
	{
		cout<<phead->val<<" ";
		phead = phead->next;
	}
	system("pause");
	return 0;
}
