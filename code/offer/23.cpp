//���������������г��ֵĴ���
//ͳ��һ�����������������г��ֵĴ�����
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int GetNumberOfK(vector<int> data ,int k) {
        int count=0;
        int len = data.size();
        for(int i=0;i<len;i++)
        {
            if(data[i]==k)
            {
                count++;
            }
            if(data[i]==k&&data[i+1]!=k)
            {
                break;
            }
        }
        return count;
    }
};