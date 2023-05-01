class Solution {
public:
    int partitionString(string s) {
        set<char>se;
        int cnt=0;
        for(int i=0;i<s.length();i++)
        {
            if(se.find(s[i])!=se.end())
            {
                cnt++;
                se.clear();
            }
            se.insert(s[i]);
        }
        if(!se.empty()) cnt++;
        return cnt;
    }
};
