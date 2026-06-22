class Solution {
    public String removeStars(String s) {
        Stack<Character> ch = new Stack<>();

        for (char c : s.toCharArray()) {
            ch.push(c);

            if (c == '*') {
                ch.pop(); 
                ch.pop(); 
            }
        }

        StringBuilder s2 = new StringBuilder();

        while (!ch.isEmpty()) {
            s2.append(ch.peek());
            ch.pop();
        }

        return s2.reverse().toString();
    }
}