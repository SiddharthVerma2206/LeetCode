class Solution {
    public:
        long long dividePlayers(std::vector<int>& skill) {
            std::sort(skill.begin(), skill.end());
            int n = skill.size();
            int totalSkill = skill[0] + skill[n - 1]; 
            long long chemistrySum = 0;
            for (int i = 0; i < n / 2; i++) {
                if (skill[i] + skill[n - i - 1] != totalSkill) {
                    return -1; 
                }
                chemistrySum += static_cast<long long>(skill[i]) * skill[n - i - 1];
            }
            return chemistrySum;
        }
    };