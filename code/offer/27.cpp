//�����г��ִ�������һ�������
//��������һ�����ֳ��ֵĴ����������鳤�ȵ�һ�룬���ҳ�������֡���������һ������Ϊ9������{1,2,3,2,2,2,5,4,2}��
//��������2�������г�����5�Σ��������鳤�ȵ�һ�룬������2����������������0��

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        int len = numbers.size();
        if(len==0)
        {
            return 0;
        }
        int prevalue = numbers[0];
        int count = 1;
        for(int i=1;i<len;i++)
        {
            if(numbers[i]==prevalue)
            {
                count++;
            }
            else
            {
                count--;
                if(count==0)
                {
                    prevalue = numbers[i];
                    count = 1;
                }
            }         
        }

        //�ж�prevalue���ֵĴ����Ƿ���Ĵ��������ģ��һ��
        count = 0;
        for(int i=0;i<len;i++)
        {
            if(numbers[i]==prevalue)
            {
                count++;
            }
        }
        if(count>len/2)
        {
            return prevalue;
        }
        return 0;
    }
};


