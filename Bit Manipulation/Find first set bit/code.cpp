// Input: 
// N = 18
// Output: 
// 2
// Explanation: 
// Binary representation of 18 is 010010,the first set bit from the right side is at position 2.
#include<bits/stdc++.h>
using namespace std;

unsigned int getFirstSetBit(int n)
    {
        if ((n & 1) != 0) {
            return 1;
        }
        else {
            for (int i=0;i<=log2(n);i++)
            {
                int temp = (n >> i);
                if ((temp & 1) != 0)
                {
                    
                        return i+1;
                    
                }
            }
        }
    }