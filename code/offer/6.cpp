//������ջʵ�ֶ���
//������ջ��ʵ��һ�����У���ɶ��е�Push��Pop������ �����е�Ԫ��Ϊint���͡�
#include <iostream>
#include <stack>

using namespace std;

class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        if(stack2.empty())
        {
            while(!stack1.empty())
            {
                int p1 = stack1.top();
                stack1.pop();
                stack2.push(p1);
            }
        }
        int p2 = stack2.top();
        stack2.pop();
        return p2;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};


int main()
{
    Solution S;
    S.push(3);
    S.push(4);
    cout<<S.pop()<<" "<<S.pop();
    system("pause");
    return 0;
}


