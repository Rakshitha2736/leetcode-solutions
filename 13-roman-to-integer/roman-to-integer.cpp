class Solution {
public:
    int romanToInt(string s) {
        int number=0,prev=0,answer=0;
        for(int j=s.length()-1;j>=0;j--)
        {
            switch(s[j])
            {
                case 'M': number=1000;break;
                case 'D': number=500;break;
                case 'C': number=100;break;
                case 'L': number=50;break;
                case 'X': number=10;break;
                case 'V': number=5;break;
                case 'I': number =1;break;
            }
            if(number<prev)
            {
                answer=answer-number;
            }else
            {
                answer=answer+number;
            }
            prev=number;
        }
        return answer;
    }
};