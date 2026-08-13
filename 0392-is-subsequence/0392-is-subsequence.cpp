class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        while(i<s.size() && j<t.size()){
            if(s.at(i)==t.at(j)){
                i++;
            }
            j++;
        }
        if(i==s.size()){return true;}
        return false;
    }
};