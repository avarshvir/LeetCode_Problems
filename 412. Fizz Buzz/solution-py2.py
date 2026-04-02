class Solution(object):
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        ans = []
        
        fizz = 0
        buzz = 0
        for i in range(1, n+1):
            fizz += 1
            buzz += 1
            if fizz == 3 and buzz == 5:
                ans.append("FizzBuzz")
                fizz = buzz = 0
            elif fizz == 3:
                ans.append("Fizz")
                fizz = 0
            elif buzz == 5:
                ans.append("Buzz")
                buzz = 0
            else:
                ans.append(str(i))

        return ans