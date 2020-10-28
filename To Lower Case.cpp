class Solution {
public:
    string toLowerCase(string str) {
        std::vector<char> vec;
        for(auto c : str){
            char lower = c;
            if(c>='A' && c<='Z')
                lower = char (c -'A' + 'a');
            vec.push_back(lower);
        }
        std::string res(vec.begin(), vec.end());
        return res;
    }
};
