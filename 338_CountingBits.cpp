class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> result;
        int zero = 0, one = 1;
        for(int i = 0; i <= num; i++)
        {
            if(i == 0 || i == 1)
                result.push_back(i);
            else
                if(zero == 0)
                {
                    zero = one;
                    one = 1;
                    result.push_back(one);
                }
                else
                    if(i % 2 == 1)
                    {
                        one += 1;
                        zero -= 1;
                        result.push_back(one);
                    }
                    else
                    {
                        int tmp = i - 1;
                        int countOne = 0;
                        while(tmp % 2 != 0)
                        {
                            countOne++;
                            tmp /= 2;
                        }
                        one  -= countOne - 1;
                        zero += countOne - 1;
                        result.push_back(one);
                    }
        }
        return result;
    }
};