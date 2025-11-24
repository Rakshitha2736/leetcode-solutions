class Solution {
    public boolean isHappy(int n) {
          int slow=n;
        int fast=n;
        do{
            slow=SumOfSquare(slow);
            fast=SumOfSquare(SumOfSquare(fast));
        }while(slow!=fast);
        return slow==1;
    }
    private int SumOfSquare(int num)
    {
        int sum=0;
        while(num>0)
        {
            int digit=num%10;
            sum+=digit*digit;
            num/=10;
        }
        return sum;
    }
    
}