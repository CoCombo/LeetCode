/*My solution, poor*/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int countOne = 0;
        
        if(!n)
            return false;
        while(n)
        {
            if(n & 1)
                countOne++;
            n >>= 1;
            if(countOne > 1)
                return false;
        }
        return true;
    }
};

/*Nice solution*/
class Solution {
public:
	bool isPowerOfTwo(int n) {
		if(n > 0 && (n & (n - 1)) == 0)
			return  true;
		return false;
	}
};
