//��̬��̨��
//һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n���������������һ��n����̨���ܹ��ж�����������

#include<iostream>

using namespace std;

class Solution{
public:
    int jumpFloorII(int number)
    {
        if(number<2)
        {
            return number;
        }
        else
        {
            int pre = 0;
            int cur = 1;
            for(int i=2;i<=number;i++)
            {
                pre = cur;
                cur = 2*pre;                
            }
            return cur;
        }        
    }
};

