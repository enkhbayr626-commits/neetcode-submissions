class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map <vector<int>, vector<string>> groups;
        vector<vector<string>> result;


        for(int i=0; i<strs.size(); i++){
            vector<int> count(26,0);

            for(int j=0; j<strs[i].size(); j++){
                count[strs[i][j]-'a']++;
            }
            groups[count].push_back(strs[i]);
        }

        for(auto group: groups){
            result.push_back(group.second);
        }
        return result;
    }
};
