class Solution {
    public boolean isValid(String s) {
        Stack<Character> charStack = new Stack<>();
        Set<Character> closingBrackets = Set.of(')', '}', ']');
        // create a stack 
        // check for closing type brackets if the stack has elmenets 
            // if the top of the stack is not the corresponding closed bracket
            // return false
            // else pop the opening bracket from the stack and continue iteration
        // otherwise append to the stack
        for(int i = 0; i < s.length(); i++){
            if(closingBrackets.contains(s.charAt(i))){
                if(!charStack.isEmpty()){
                    if((s.charAt(i) == ')' && charStack.peek() == '(') 
                    || (s.charAt(i) == '}' && charStack.peek() == '{')  
                    || (s.charAt(i) == ']' && charStack.peek() == '[')){
                        charStack.pop();
                    }else{
                        return false;                        
                    }
                }else{
                    return false;
                }
            }else{
                charStack.push(s.charAt(i));               
            }
        }
        return charStack.isEmpty();
    }

    
}
