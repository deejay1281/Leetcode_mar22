class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        
            while(j<t.size()&&i<s.size()){
                if(s[i]==t[j]){j++;i++;}
                else j++;
                //if(s[s.size()-1]==t[j])return 1;
            }
        
        return i==s.size()?1:0;
    }
};