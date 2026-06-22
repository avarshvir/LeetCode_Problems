class Solution:
    def removeStars(self, s: str) -> str:
        stack = []

        for i in s:
            stack.append(i)
            if i == '*':
                stack.pop()
                stack.pop()
        
        s2 = ""
        while stack:
            s2 += stack.pop()

        return s2[::-1]
        
        