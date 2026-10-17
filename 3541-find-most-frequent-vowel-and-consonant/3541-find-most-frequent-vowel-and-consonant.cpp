class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> freq(26, 0);

        for (int i = 0; i < s.size(); i++)
            freq[s[i] - 'a']++;

        int maxVowel = 0, maxConsonant = 0;

        for (int i = 0; i < 26; i++) {
            if (i == 0 || i == 4 || i == 8 || i == 14 || i == 20) {
                if (freq[i] > maxVowel)
                    maxVowel = freq[i];
            } else {
                if (freq[i] > maxConsonant)
                    maxConsonant = freq[i];
            }
        }

        return maxVowel + maxConsonant;
    }
};