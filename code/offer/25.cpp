//���������������
//{6,-3,-2,7,-15,1,2,2},����������������Ϊ8(�ӵ�0����ʼ,����3��Ϊֹ)����һ�����飬��������������������еĺ�(�������ĳ���������1)��

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int len = array.size();
        vector<int> dp(len);
        int Max = array[0];
        dp[0] = array[0];
        for(int i=1;i<len;i++)
        {
            int max = dp[i-1]+array[i];
            if(max>array[i])
            {
                dp[i]=max;
            }
            else
            {
                dp[i]=array[i];
            }
            if(dp[i]>Max)
            {
                Max = dp[i];
            }            
        }
        return Max;    
    }
};

