class Solution {
public:

    string encode(vector<string>& strs) {
        string s="";
        for(int i=0; i<strs.size(); i++){
            int n=strs[i].size();
            string str = to_string(n);
            s= s+ str + '#' + strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
        vector <string> result;
        for(int i=0; i<s.size(); i++){
            int j=i;
            string num = "";
            while(s[j]!='#'){
                num +=s[j];
                j++;
            }
            int num1=stoi(num);
            string str1="";
            for(int l=j+1; l<j+1+num1; l++){
                str1+=s[l];
            }
            result.push_back(str1);
            i=j+ num1;
        }
        return result;
    }
};
