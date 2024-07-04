class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt=0;
        int num= start ^ goal;
        while( num > 1)
        {
            cnt += (num & 1);   //give 1 for odd and 0 for even
            num= num >> 1;      // num= num/2;
        }
        if(num == 1) cnt +=1;
        return cnt;
        
    }
};