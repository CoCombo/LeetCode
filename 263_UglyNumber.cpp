/* Time limit exceeded */
class Solution {
public:
    bool isUgly(int num) {
        if(num < 0)
            return false;
        if(num == 1)
            return true;
            
        for(int i = 2; i < num; i++)
        {

            if(num % i == 0 && isPrime(i))
            {
                if(i != 2 && i != 3 && i != 5)
                    return false;
            }
        }
        return true;
    }
    
    bool isPrime(int num)
    {
        for(int i = 2; i <= sqrt(num); i++)
        {
            if(num % i == 0)
                return false;
        }
        return true;
    }
};
