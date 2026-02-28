class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxVal = heights[0];

        int n = (int) heights.size();
        // now we should do monostack? 
        // increasing monostack
        // we see an integer that breaks mono stack see the max value 
        vector<int> stack;
        for(int i = 0; i < n; i++) {
            while(!stack.empty() && heights[stack.back()] > heights[i]) {
                int top = stack.back();
                stack.pop_back();

                int width;
                if (stack.empty())
                    width = i;
                else
                    width = i - stack.back() - 1;

                maxVal = max(maxVal, width * heights[top]);
            }
            stack.push_back(i);
        }

        while(!stack.empty()) {
            int top = stack.back();
            stack.pop_back();
            
            int width;
            if(stack.empty()) {
                width = n;
            } else {
                width = n - stack.back() - 1;
            }

            maxVal = max(maxVal, width * heights[top]);
        }

        return maxVal;
    }
};