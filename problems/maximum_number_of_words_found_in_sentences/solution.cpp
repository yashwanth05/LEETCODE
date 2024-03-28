class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int m = 0;
        for(int i=0;i<sentences.size();i++){
            istringstream iss(sentences[i]);
            vector<std::string> tokens;
            string token;
            while (std::getline(iss, token, ' ')) {
                tokens.push_back(token);
            }
            m = max(m, static_cast<int>(tokens.size()));
        }
        return m;
    }
};