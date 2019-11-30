//�������ö�����A��B���ж�B�ǲ���A���ӽṹ��������
//��������˼�ǰ�����һ����㣬�͵ð����������µ����нڵ㣬һ�ô�СΪn�Ķ�������n�����������Ƿֱ���ÿ�����Ϊ��������;
//�ӽṹ����˼�ǰ�����һ����㣬����ֻȡ���������������������߶���ȡ��
#include <iostream>

using namespace std;

struct TreeNode{
    int val;
    TreeNode*lchild;
    TreeNode*rchild;
};


bool doesTree1HaveTree2(TreeNode* node1,TreeNode* node2)
{
    //���Tree2�Ѿ��������˶��ܶ�Ӧ���ϣ�����true
    if(node2==NULL)
    {
        return true;
    }
    //���Tree2��û�б����꣬Tree1ȴ�������ˡ�����false
    if(node1==NULL)
    {
        return false;
    }
    //���������һ����û�ж�Ӧ�ϣ�����false
    if(node1->val!=node2->val)
    {
        return false;
    }
    //������ڵ��Ӧ���ϣ���ô�ͷֱ�ȥ�ӽڵ�����ƥ��
    return doesTree1HaveTree2(node1->lchild,node2->lchild)&&doesTree1HaveTree2(node1->rchild,node2->rchild);
}


//�ж��Ƿ�Ϊ�ӽṹ
bool HasSubTree(TreeNode* root1,TreeNode* root2)
{
    bool result = false;
    //��Tree1��Tree2����Ϊ���ʱ�򣬲Ž��бȽϡ�����ֱ�ӷ���false
    if (root2 != NULL && root1 != NULL)
    {
        //����ҵ��˶�ӦTree2�ĸ��ڵ�ĵ�
        if(root1->val == root2->val)
        {
            //��������ڵ�ΪΪ����ж��Ƿ����Tree2
            result = doesTree1HaveTree2(root1,root2);
        }
        //����Ҳ�������ô����ȥroot������ӵ�����㣬ȥ�ж�ʱ�����Tree2
        if(!result)
        {
            result = HasSubTree(root1->lchild,root2);
        }
        //������Ҳ�������ô����ȥroot���Ҷ��ӵ�����㣬ȥ�ж�ʱ�����Tree2
        if(!result)
        {
            result = HasSubTree(root1->rchild,root2);
        }
    }
    return result;
}

//�ж��Ƿ�Ϊ����




//���򴴽�������
void CreateBiTree(TreeNode **T)
{
    int ch;
    cin >> ch;
    if (ch == -1)
    {
        *T = NULL;
        return;
    }
    else
    {
        *T = new TreeNode;
        (*T)->val = ch;
        cout << "input" << ch << "'s left son node:";
        CreateBiTree(&((*T)->lchild));
        cout << "input" << ch << "'s right son node:";
        CreateBiTree((&(*T)->rchild));
    }

    return;
}


int main(){
    TreeNode*A;
    TreeNode*B;
    CreateBiTree(&A);
    CreateBiTree(&B);
    cout<<HasSubTree(A,B)<<endl;;
    system("pause");
    return 0;
}

