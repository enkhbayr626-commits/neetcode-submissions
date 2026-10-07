class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.size();
        int n2=t.size();

        int count1[26] = {0};
        int count2[26] = {0};

        for(int i=0; i<n1; i++){
            count1[s[i]-'a']++;
        }

        for(int i=0; i<n2; i++){
            count2[t[i]-'a']++;
        }

        bool result = true;

        for(int i=0; i<26; i++){
            if(count1[i]!=count2[i]){
                result = false;
                break;
            }
        }
        return result;

    }
};
