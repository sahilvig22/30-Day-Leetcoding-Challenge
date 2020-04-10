class MinStack {
public:
    /** initialize your data structure here. */
    stack<pair<int, int>> s;

    /*
        In a pair, first item would be value, second would be the minimum till that point.
        ex:
        [8,3]
        [3,3]
        [6,5]
        [5,5]  This will be entered first coz it's a stack.
    */

    MinStack() {

    }

    void push(int x) {
        int min = (!s.empty() && s.top().second < x) ? s.top().second : x;
        s.push({ x,min });
    }

    void pop() {
        s.pop();

    }

    int top() {
        return s.top().first;
    }

    int getMin() {
        return s.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */