class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int score=0;
        int maxscore=0;
        int i=0;
        int j=tokens.size()-1;
        while(i<=j)
        {
            if(tokens[i]<=power)
            {
                power-=tokens[i];
                score+=1;
                i++;
                maxscore=max(score,maxscore);
            }
            else if(score>=1)
            {
                power+=tokens[j];
                score-=1;
                j--;
            }
            else
            {
                break;
            }
        }
        return maxscore;
    }
};
