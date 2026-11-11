class Solution {
    public boolean isAnagram(String s, String t) {
        Map<Character,Integer> char1 = new HashMap<>();
        Map<Character,Integer> char2 = new HashMap<>();

        for(char chars : s.toCharArray()){
            if (char1.containsKey(chars)){
                char1.put(chars, char1.get(chars) + 1);
            }else{
                char1.put(chars, 1);
            }
        }

        for(char chars : t.toCharArray()){
            if (char2.containsKey(chars)){
                char2.put(chars, char2.get(chars) + 1);
            }else{
                char2.put(chars, 1);
            }
        }

        if(char1.equals(char2)){
            return true;
        } else{
            return false;
        }
    }
}
