//��β��ͷ��ӡ����
//����һ�������������β��ͷ��˳�򷵻�һ��ArrayList��
#include <iostream>
#include <vector>

using namespace std;

//����ṹ��
struct ListNode{
    int val;
    ListNode*next;
};

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> A;
        while(head!=NULL){
            A.push_back(head->val);
            head = head->next;
        }
        int len = A.size();
        vector<int>B(len);
        for(int i=0;i<len;i++)
        {
            B[i] = A[len-i-1];
        }
        return B;
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
    ListNode*list = Create();
    while(list!=NULL)
    {
        cout<<list->val<<" ";
        list = list->next;
    }
    system("pause");
    return 0;
}







