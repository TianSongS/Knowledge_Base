//��ת����
//����һ��������ת��������������ı�ͷ��

#include <iostream>

using namespace std;

struct ListNode{
    int val;
    ListNode*next;
};


class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        ListNode *p = NULL;
        ListNode *pre = NULL;

        while(pHead!=NULL)
        {
            p = pHead->next;
            pHead->next = pre;
            pre = pHead;
            pHead = p;
        }
        return pre;
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
	ListNode*head = Create();
    ListNode*phead = s.ReverseList(head);
	while(phead!=NULL)
	{
		cout<<phead->val<<" ";
		phead = phead->next;
	}

	system("pause");
	return 0;
}

