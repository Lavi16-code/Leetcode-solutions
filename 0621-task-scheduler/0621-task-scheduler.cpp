class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26, 0);
        for (char task : tasks) {
            freq[task - 'A']++;
        }

        int maxFreq = 0;
        for (int f : freq) {
            maxFreq = max(maxFreq, f);
        }

        int countMaxFreq = 0;
        for (int f : freq) {
            if (f == maxFreq) {
                countMaxFreq++;
            }
        }

        int intervals = (maxFreq - 1) * (n + 1) + countMaxFreq;

        return max((int)tasks.size(), intervals);
    }
};
    
