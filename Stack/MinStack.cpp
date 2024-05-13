//Runtime : 15ms
//Memory : 20mb
class MinStack {
public:
    vector<pair<int, int>> nums;
    MinStack() {
        
    }
    
    void push(int val) {
        if(nums.empty()){
            pair<int, int> p;
            p.first = val;
            p.second = val;
            nums.push_back(p);
        }
        else{
            pair<int, int> p;
            p.first = val;
            p.second = min(val, nums.back().second);
            nums.push_back(p);
        }
    }
    
    void pop() {
        nums.pop_back();
    }
    
    int top() {
        return nums.back().first;
    }
    
    int getMin() {
        return nums.back().second;
    }   
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */