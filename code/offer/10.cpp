//���θ���
//���ǿ�����2*1��С���κ��Ż�������ȥ���Ǹ���ľ��Ρ�������n��2*1��С�������ص��ظ���һ��2*n�Ĵ���Σ��ܹ��ж����ַ�����

#include <iostream>

using namespace std;

class Solution{
public:
    int rectCover(int number)
    {
        int pre1 = 1;
        int pre2 = 2;
        int cur = 0;
        for(int i=3;i<=number;i++)
        {
            int cur = pre1+pre2;
            pre1 = pre2;
            pre2 = cur;
        }
        if(number<3)
        {
            return number;
        }
        return cur;
    }
};


