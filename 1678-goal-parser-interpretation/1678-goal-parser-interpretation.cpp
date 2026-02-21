class Solution {
public:
    string interpret(string command) {
        int n=command.length();
        string a="";

        for(int i=0;i<n;i++){
            if(command[i] == 'G'){
                a+='G';
            }
            if(command[i]==')' && command[i-1]=='('){
                a+='o';
            }
           if(command[i]==')' && command[i-1] == 'l') {
                a+="al";
            }
        }
        return a;
    }
};