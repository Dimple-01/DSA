class Solution {
public:
    int minBitFlips(int start, int goal) {
        int num= start ^ goal;
        // now this num should be zero to make start = goal, so check each bit by shifting with 1   bit and applying &.
        int cnt=0;
        while( num != 0)
        {
            if(( num & 1) != 0) cnt++;
            num = num >> 1;
        }
        return cnt;
        
    }
};