class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int light=0;
        int heavy=people.size()-1;
        int score=0;
        while(light<=heavy)
        {
            if(people[light]+people[heavy]<=limit)
            {
                score++;
                light++;
                heavy--;
            }
            else if(people[light]+people[heavy]>limit)
            {
                heavy--;
                score++;
            }
        }
        return score;
    }
};
