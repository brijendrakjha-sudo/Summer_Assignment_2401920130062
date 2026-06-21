class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char,int> charfreq;
        for(char ch: magazine){
            charfreq[ch]++;
        }
        for(char ch: ransomNote){
            if(charfreq[ch]>0) charfreq[ch]--;
            else return false;
        }
        return true;
    }
};