//ƽ�������
//����һ�ö��������жϸö������Ƿ���ƽ���������
//ƽ�����������������Ҳ��ƽ�����������ô��νƽ��������������ĸ߶Ȳ����1
#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;

struct TreeNode{
    int val;
    TreeNode*left;
    TreeNode*right;
};

int TreeDepth(TreeNode*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int dleft = TreeDepth(root->left);
    if(dleft==-1)
    {
        return -1;
    }
    int dright = TreeDepth(root->right);
    if(dright==-1)
    {
        return -1;
    }
    return abs(dright-dleft)>1?-1:max(dright,dleft)+1;
}

class Solution {
public:
    bool IsBalanced_Solution(TreeNode* pRoot) {
        if(TreeDepth(pRoot)==-1)
        {
            return false;
        }
        return true;
    }
};