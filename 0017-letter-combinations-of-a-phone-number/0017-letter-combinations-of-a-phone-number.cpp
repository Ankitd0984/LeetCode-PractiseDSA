class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        
        
        const vector<string> mapping = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        
        vector<string> result;
        string currentCombination = "";
        
        backtrack(digits, 0, mapping, currentCombination, result);
        return result;
    }

private:
    void backtrack(const string& digits, int index, const vector<string>& mapping, 
                   string& current, vector<string>& result) {
        
        if (index == digits.length()) {
            result.push_back(current);
            return;
        }
        
        
        string letters = mapping[digits[index] - '0'];
        
        
        for (char c : letters) {
            current.push_back(c);
            backtrack(digits, index + 1, mapping, current, result); 
            current.pop_back(); 
        }
    }
};
