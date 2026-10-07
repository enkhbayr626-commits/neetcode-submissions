class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map <vector<int>, vector<string>> group;
        vector<vector<string>> result;
  
        for(int i=0; i<strs.size(); i++){
            vector<int> count(26, 0);
            
            for(int j=0; j<strs[i].size(); j++){
                count[strs[i][j]-'a']++;
            }
            group[count].push_back(strs[i]);
        }

        for(auto item: group){
            result.push_back(item.second);
        }

        return result;


    }
};
