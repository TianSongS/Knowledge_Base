//쳲���������
//Ҫ������һ������n���������쳲��������еĵ�n��(��0��ʼ����0��Ϊ0)��n<=39 

#include <iostream>

using namespace std;

//�ݹ�
class Solution1{
public:
    int Fibonacci(int n)
    {
        if(n<2)
        {
            return n;
        }
        else
        {
         return Fibonacci(n-1)+Fibonacci(n-2);
        }
    }
};

//����
class Solution2{
public:
    int Fibonacci(int n)
    {
        int *F = new int[40];
        F[0] = 0;
        F[1] = 1;
        for(int i = 2;i<=n;i++)
        {
            F[n] = F[n-1]+F[n-2];
        }
        return F[n];
    }
};

//����������������
class Solution3{
public:
    int Fibonacci(int n)
    {
        int pre1 = 0;
        int pre2 = 1;
        int cur = 0;//�洢��ǰ������
        for(int i=2;i<=n;i++)
        {
            cur = pre1+pre2;
            pre1 = pre2;
            pre2 = cur;
        }
        if(n<2)
        {
            return n;
        }
        return cur;   
    }
};

