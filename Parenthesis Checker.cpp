
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
     bool ispar(string x)
    {
        // Your code here
        int i  = 0;
        stack<int> s;
        s.push(x[i++]);
        while(!s.empty()){
            if(x[i] == '{' || x[i]=='[' || x[i] == '('){
                s.push(x[i]);
                i++;
            }
            else{
                char top = s.top();
                if((top == '{' && x[i] == '}' )|| (top == '('&& x[i] == ')') || (top == '[' && x[i] == ']')){
                    s.pop();
                    i++;
                     if(x[i] == '{' || x[i]=='[' || x[i] == '('){
                s.push(x[i]);
                i++;
            }
                }
                else{
                    return false;
                }
                
            }
        }
        if(i<x.size() && s.empty()) return false;
        return true;
    }

};
