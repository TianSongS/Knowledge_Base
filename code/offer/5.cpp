//�ؽ�������
//����ĳ��������ǰ���������������Ľ�������ؽ����ö����������������ǰ���������������Ľ���ж������ظ������֡�
//��������ǰ���������{1,2,4,7,3,5,6,8}�������������{4,7,2,1,5,3,8,6}�����ؽ������������ء�

#include <iostream>
#include <vector>

using namespace std;

struct TreeNode 
{
    int val;
    TreeNode*left;
    TreeNode*right;
};

//�������������
void PostOrderBiTree(TreeNode*T)
{
    if(T==NULL)
    {
        return;
    }
    else
    {
        PostOrderBiTree(T->left);
        PostOrderBiTree(T->right);
        cout<<T->val<<" ";
    }
}

class Solution 
{
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        int len = vin.size();
        if (len==0)
        {
            return NULL;
        }
        TreeNode *head = new TreeNode;
        head->val = pre[0];
        vector<int>left_pre,left_vin,right_pre,right_vin;//�ֱ�洢�������������������

        //����������Ѱ�Ҹ��ڵ��λ��
        int gen = 0;
        for(int i=0;i<len;i++)
        {
            if(vin[i]==pre[0])
            {
                gen = i;
                break;
            }
        }

        //�����������������
        for(int i=0;i<gen;i++)
        {
            left_vin.push_back(vin[i]);
            left_pre.push_back(pre[i+1]);
        }

        //�����������������
        for(int i=gen+1;i<len;i++)
        {
            right_vin.push_back(vin[i]);
            right_pre.push_back(pre[i]);
        }

        head->left = reConstructBinaryTree(left_pre,left_vin);
        head->right = reConstructBinaryTree(right_pre,right_vin);
        return head;
    }
};


int main()
{
    Solution s;
    vector<int>pre,vin;
    pre.push_back(1);
    pre.push_back(2);
    pre.push_back(3);
    vin.push_back(2);
    vin.push_back(1);
    vin.push_back(3);
    TreeNode*T = s.reConstructBinaryTree(pre,vin);
    PostOrderBiTree(T);//�����������֤��������ȷ��

    system("pause");
    return 0;
}



