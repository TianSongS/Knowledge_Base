//��ֵ�������η�
//����һ��double���͵ĸ�����base��int���͵�����exponent����base��exponent�η�����֤base��exponent��ͬʱΪ0 
#include <iostream>

using namespace std;

class Solution{
public:
    double Power(double base,int exponent)
    {
        if(base==0.0)
        {
            return 0.0;
        }
        else if(exponent==0)
        {
            return 1.0;
        }
        else
        {
            double result;
            int e = exponent>0?exponent:-exponent;
            for(int i=1;i<=e;i++)
            {
                result = result*base;
            }
            return exponent>0?result:1/result;
        }        
    }
};



