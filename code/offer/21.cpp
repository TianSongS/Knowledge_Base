//�����������ĺ����������
//����һ���������飬�жϸ������ǲ���ĳ�����������ĺ�������Ľ��������������Yes,�������No���������������������������ֶ�������ͬ��

#include <iostream>
#include <vector>

using namespace std;

bool isBST(vector<int> sequence,int start,int end)
{
    if(start>=end)
    {
        return true;
    }
    int val = sequence[end];//���ڵ�
    int split;//���ֵ���������һ��forѭ��Ϊ���ҵ����ֵ�λ��
    for(int i=start;i<end;i++)
    {
        if(sequence[i]>val)
        {
            split = i;
            break;
        }
    }
    //�жϺ����Ƿ���С�ڸ��ڵ����������У�����false
    for(int i=split;i<end;i++)
    {
        if(sequence[i]<val)
        {
            return false;
        }
    }
    return isBST(sequence,start,split-1)&&isBST(sequence,split,end-1);
}


class Solution{
public:
    bool VerifySquenceOfBST(vector<int> sequence)
    {
        int len = sequence.size();
        if(len==NULL)
        {
            return false;
        }
        return isBST(sequence,0,len-1);
    }
};


