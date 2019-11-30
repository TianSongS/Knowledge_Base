//�������´�ӡ������
//�������´�ӡ����������ÿ���ڵ㣬ͬ��ڵ�������Ҵ�ӡ��

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct TreeNode{
    int val;
    TreeNode*left;
    TreeNode*right;
};

class Solution{
public:
    vector<int> PrintFromTopToBottom(TreeNode*root)
    {
        vector<int> v;//Ҫ���ص�����
        queue<TreeNode*> q;//����
        q.push(root);
        while(!q.empty())
        {
            TreeNode* T = q.front();//�����е���ȡ����
            q.pop();//ɾ����ǰ�����
            if(T==NULL)
            {
                continue;
            }
            v.push_back(T->val);
            q.push(T->left);
            q.push(T->right);
        }
        return v;
    }
};

