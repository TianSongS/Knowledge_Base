//��С��K����
//����n���������ҳ�������С��K��������������4,5,1,6,2,7,3,8��8�����֣�����С��4��������1,2,3,4

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> v;
        if(k>input.size())
        {
            return v;
        }
        sort(input.begin(),input.end());
        for(int i=0;i<k;i++)
        {
            v.push_back(input[i]);
        }
        return v;
    }
};

