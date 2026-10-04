class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> count;
        for (int i = 0; i < words.size(); i++) {
            if (words[i].contains(x))
                count.push_back(i);
        }
        return count;
    }
};