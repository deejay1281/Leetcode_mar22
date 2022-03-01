class Solution {
    int countSetBits(int n)
{
    // base case
    if (n == 0)
        return 0;
    else
        // if last bit set add 1 else add 0
        return (n & 1) + countSetBits(n >> 1);
}
public:
    vector<int> countBits(int n) {
       vector<int> v;
        for(int i=0;i<=n;i++){
            v.push_back(countSetBits(i));
        }
        return v;
    }
};