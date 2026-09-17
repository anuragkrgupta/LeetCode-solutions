class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
        return 0;
    }
    unordered_map<char, int> freq;
    for(char ch : s){
        freq[ch]++;
    }
    for(char c : t){
        freq[c]--;
    }
    for(auto x : freq){
        if(x.second != 0){
        return 0;
        }
    }

    return 1;
    }
};