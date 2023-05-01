class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n=palindrome.size();
        if(n==1)
        {
            return "";
        }
        for(int i=0;i<n/2;i++)
        {
            //n/2 bcz to handle odd l palindrome
            if(palindrome[i]!='a')
            {
                palindrome[i]='a';
                return palindrome;
            }
        }
        //if all char are a;
        
        palindrome[n-1]='b';
        return palindrome;
    }
};
