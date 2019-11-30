//�������ľ���
//���������Ķ�����������任ΪԴ�������ľ���
#include <iostream>

using namespace std;


struct TreeNode{
    int val;
    TreeNode*left;
    TreeNode*right;
};


class Solution {
public:
    void Mirror(TreeNode *pRoot) {
        if(pRoot==NULL)
        {
            return;
        }
        TreeNode*temp = pRoot->left;
        pRoot->left = pRoot->right;
        pRoot->right = temp;
        Mirror(pRoot->left);
        Mirror(pRoot->right);
    }
};


