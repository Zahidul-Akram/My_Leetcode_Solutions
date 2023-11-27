class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s ;
        for(auto x : tokens){
            
            if(x == "+"){
                int b = s.top() ;
                s.pop() ;
                int a = s.top() ;
                s.pop() ;
                s.push(a+b) ;
            }
            else if(x == "-"){
                int b = s.top() ;
                s.pop() ;
                int a = s.top() ;
                s.pop() ;
                s.push(a-b) ;
            }
            else if(x == "*"){
                int b = s.top() ;
                s.pop() ;
                int a = s.top() ;
                s.pop() ;
                s.push(a*b) ;
            }
            else if(x == "/"){
                int b = s.top() ;
                s.pop() ;
                int a = s.top() ;
                s.pop() ;
                s.push(a/b) ;
            }
            else{
                s.push( stoi(x) ) ;
            }
        }
        return s.top() ;
    }
};