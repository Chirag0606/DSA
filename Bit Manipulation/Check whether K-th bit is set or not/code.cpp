// N = 4
// K = 0
// Output: 
// No
// Explanation: 
// Binary representation of 4 is 100, in which 0th index bit from LSB is not set. So, return false.

bool checkKthBit(int n, int k)
    {
        return ((n>>k)&1);
    }