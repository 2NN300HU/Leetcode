//First ver.
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 0;
        for (int i = 0; i < s.length() - result; i++) {
            int count = 0;
            int flag[128] = {0,};
            for (int j = i; j < s.length(); j++) {
                if (flag[s[j]]==1) {
                    break;
                } else {
                    flag[s[j]]=1;
                    count++;
                }
                result = max(count, result);
            }
        }
        return result;
    }
};

//Last ver.
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int   n =s.length(),result=0;
        unordered_map<char,int> flag;
        for(int j=0,i=0;j<n;j++){
            if(flag.find(s[j])!=flag.end()){
                i=max(flag[s[j]],i);
            }
            flag[s[j]]=j+1;
            result = max(j-i+1,result);

        }
        return result;
    }
};

