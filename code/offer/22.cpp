//�����������
//����һ�ö����������������ȡ��Ӹ���㵽Ҷ������ξ����Ľ�㣨������Ҷ��㣩�γ�����һ��·�����·���ĳ���Ϊ������ȡ�

#include <iostream>
#include <algorithm>

using namespace std;

struct TreeNode{
    int val;
    TreeNode*left;
    TreeNode*right;
};

class Solution{
public:
    int TreeDepth(TreeNode*pRoot)
    {
        if(pRoot==NULL)
        {
            return 0;
        }
        int dleft = TreeDepth(pRoot->left);
        int dright = TreeDepth(pRoot->right);
        return max(dleft,dright)+1;
    }
};




