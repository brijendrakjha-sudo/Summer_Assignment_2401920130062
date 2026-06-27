class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        int n = s.length();

        for(int len = 1; len <= n/2; len++) {

            if(n % len != 0)
                continue;

            string pattern = s.substr(0, len);
            string check = "";

            int times = n / len;

            for(int j = 0; j < times; j++) {
                check += pattern;
            }

            if(check == s)
                return true;
        }

        return false;
    }
};