class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string, int>> v;
        for (int i = 0; i < names.size(); i++) {
            v.push_back(make_pair(names[i], heights[i]));
        }
        auto sortbysec = [](const pair<string, int>& a, const pair<string, int>& b) {
            return a.second > b.second;
        };

        sort(v.begin(), v.end(), sortbysec);
        vector<string> vect;
        for (int i = 0; i < names.size(); i++) {
            vect.push_back(v[i].first);
        }
        return vect;
    }
};