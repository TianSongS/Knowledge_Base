//�ַ����滻
//��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ�%20����
//���磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy��

#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    char * replaceSpace(string str)
    {
        int len = str.length();
        //�ȼ����ж��ٸ��ո�
        int count = 0;
        for(int i=0;i<len;i++)
        {
            if(str[i]==' ')
            {
                count++;
            }
        }
        char *new_str = new char[len+2*count];//�µ��ַ���
        int N = 0;//��¼��ǰ�м����ո�
        for(int i=0;i<len;i++)
        {
            if(str[i]!=' ')
            {
                new_str[i+2*N] = str[i];
            }
            else
            {
                new_str[i+2*N] = '%';
                new_str[i+2*N+1] = '2';
                new_str[i+2*N+2] = '0';
                N++;
            } 
        }
        return new_str;
    }
};

int main()
{
    Solution s;
    string str= "ab cd ds";
    char* new_str = s.replaceSpace(str);
    string t(new_str);
    cout<<t;
    system("pause");
    return 0;
}

