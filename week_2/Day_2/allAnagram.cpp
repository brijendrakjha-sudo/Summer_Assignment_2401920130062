class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int k=p.length();
        vector<int > counter(26,0);
        for(int i=0; i<k; i++){
            char ch=p[i];
            counter[ch-'a']++;
        }
        vector<int> ans;

        int i=0,j=0;
        while(j<s.length()){
            counter[s[j]-'a']--;
            if(j-i+1 == k){

                bool flag = true;

                for(int x=0;x<26;x++){
                    if(counter[x] != 0){
                        flag = false;
                        break;
                    }
                }

                if(flag)
                    ans.push_back(i);

                counter[s[i]-'a']++;
                i++;
            }
            
            j++;
        }
        return ans;

    }
};