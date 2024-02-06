class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> ans;

        cout << "Original Map:\n";

        for (auto x : strs) {
            string word = x;
            sort(word.begin(), word.end());
            m[word].push_back(x);
        }

        // Print the map after processing
        cout << "Map after sorting:\n";
        for (auto& entry : m) {
            cout << entry.first << ": ";
            for (const auto& str : entry.second) {
                cout << str << " ";
            }
            cout << endl;
        }

        for (auto x : m) {
            ans.push_back(x.second);
        }

        return ans;
    }
};
