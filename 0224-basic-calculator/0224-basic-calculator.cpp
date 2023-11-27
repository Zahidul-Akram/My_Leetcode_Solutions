class Solution {
public:
    int calculate(string s) {
        long long int sum = 0;
        int sign = 1;
        
        stack<pair<int,int>>st; // bracket er ager sum and sign !!

        for(int i=0;i<s.size();i++){


            if(isdigit(s[i])){

                long long int num = 0;

                while(i<s.size() && isdigit(s[i])){ // koto lomba dig check korte
                    num = num*10 + (s[i]-'0'); 
                        i++; 
                }

                  i--;

                 sum += (num * sign);
                 sign = 1; 
            }


            else if(s[i] == '('){  // opening pailei shudhu stack e push korbo
                 
               st.push({sum , sign}); // jeno ager hishab ta mone thake

               sum = 0;
               sign = 1;
            }


               else if(s[i] == ')') // ager hishab add korbo and ager hishab stack theke ber kore dibo
           {
               sum = st.top().first + (st.top().second * sum);
               st.pop();
           }


              else if(s[i] == '-')
           {
               sign = (-1 * sign);
           }

        }

        return sum;

    }
};