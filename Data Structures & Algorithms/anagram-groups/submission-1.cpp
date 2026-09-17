class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        std::unordered_map<string, std::vector<string>> words; 
        std::vector<std::vector<string>> result; 
        for(int i = 0; i<strs.size(); i++)
        {
            words[key(strs[i])].push_back(strs[i]);  
        }

        for(const auto& [key,value] : words)
        {
            result.push_back(value); 
        }
        return result; 
    }

    string key(string s)
    {
        int frecuencies[26] = {0}; 
        for(char c : s)
        {
            frecuencies[c - 'a']++; 
        }

        string solution = ""; 
        for(int num : frecuencies)
        {
            solution += std::to_string(num) + "#"; 
        }
        return solution; 

    }
};
