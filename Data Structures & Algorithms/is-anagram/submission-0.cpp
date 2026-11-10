class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freq_s;
        unordered_map<char, int> freq_t;

        if(s.length() != t.length()){
            return false;
        }

        for(int i = 0; i < s.length(); i++){
            freq_s[s[i]]++;
        }

        for(int i = 0; i < t.length(); i++){
            freq_t[t[i]]++;
        }

        for(auto [key, count]:freq_s){
            if(freq_s[key] != freq_t[key]){
                return false;
            }
        }

        return true;
    }
};
