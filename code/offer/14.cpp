//�����е�����k�����
//����һ����������������е�����k����㡣

#include <iostream>

using namespace std;

struct ListNode{
    int val;
    ListNode*next;
};

//�Ƚ�����ת
ListNode* reverse(ListNode* head)
{
    ListNode*pre = NULL;
    ListNode*cur = NULL;
    while(head!=NULL)
    {
        cur = head->next;
        head->next = pre;
        pre = head;
        head = cur;
    }
    return pre;
}

class Solution {
public:
    int FindKthToTail(ListNode* pListHead, unsigned int k) {
        pListHead = reverse(pListHead);//�Ƚ�����ת
        int i = 1;
        while(i<k)
        {
            i++;
            pListHead = pListHead->next;
        }
        return pListHead->val;
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
    int data = s.FindKthToTail(head,4);
    cout<<data;
	system("pause");
	return 0;
}