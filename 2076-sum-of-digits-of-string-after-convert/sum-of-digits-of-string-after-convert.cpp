class Solution {
public:
    int getLucky(string s, int k) {
        // vector<int> v
            string nums="";
        for(int i=0;i<s.size();i++)
        {
            int pos=(s[i]-'a' +1);
            nums+=to_string(pos);
        }
       string str;
        int sum=0;
        while( k != 0)
        {
           sum=0;
            for(int i=0;i< nums.size();i++)
            {
                sum+=nums[i]-'0';
            }
          
            k--;
            nums=to_string(sum);
             
            
        }
      
        return sum;
  
        
        
    }
};