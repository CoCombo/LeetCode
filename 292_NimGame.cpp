/*submissiom of "Nim Game"*/
class Solution
{
    public:
	bool canWinNim(int n)
	{
	    /*if n less than 4, we will always win the game(we first)*/
	    if(n < 4)
		return true;
	    /*if n is multiple of 4, we will never win the game*/
	    if(n % 4 == 0)
		return false;
	    else
		return true;
	}
};
/*shortest submission */
class Solution
{
    public:
	bool canWinNim(int n)
	{
	    return n < 4 ? true : (n % 4);
	}
}
