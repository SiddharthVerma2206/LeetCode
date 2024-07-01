class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int , vector<int>>m;
        for(int i =0 ; i<prerequisites.size() ; i++){
            m[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        unordered_set<int>cycle;
        unordered_set<int>visit;

        vector<int>result;

        for(int course =0 ; course <numCourses ; course++){
            if(!dfs(course , m , visit , cycle , result)){
                return {};
            }
        }
        return result;
    }

private:
    bool dfs(int cource , unordered_map<int ,  vector<int>>& m , unordered_set<int>& visit , unordered_set<int>& cycle, vector<int>& result){
        if(cycle.find(cource)!=cycle.end()){
            return false;
        }
        if(visit.find(cource)!=visit.end()){
            return true;
        }
        cycle.insert(cource);
        for(int i =0 ; i<m[cource].size() ; i++){
            int nextcource = m[cource][i];
            if(!dfs(nextcource , m , visit , cycle , result)){
                return false;
            }
        }
        cycle.erase(cource);
        visit.insert(cource);
        result.push_back(cource);
        return true;
    }
};