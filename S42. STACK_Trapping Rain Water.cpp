class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        stack<int>st;
        int water = 0 ;
        for(int i = 0 ; i< n ; i++){
            while(!st.empty() && height[i]>height[st.top()]){
                int bottom = st.top();
                st.pop();
                if(st.empty()) break;
                
                int left = st.top();
                int right = i ;

                int width = right - left - 1 ;
                int h = min(height[left] , height[right]) - height[bottom];
                water += width * h ;
            }
             st.push(i);
        }
        return water ;
    }
};
