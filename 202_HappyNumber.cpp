class Solution {
public:
    bool isHappy(int n) {
        int nums[500] = {0};	//Array for index

        while(n != 1)
        {
            int tmp = n;
            n = 0;
	    	/* Caculate the result */            
            while(tmp)
            {
                n += pow(tmp % 10, 2);
                tmp /= 10;
            }
            
            if(nums[n])
                return false;	//Repetitive num
            nums[n] = 1;
        }
        
        return true;
    }
};
