class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if len(strs) == 0:
            return ""
        else:
            a = strs[0]
            for i in range(len(a)):
                char = a[i]
                for s in strs:
                    if i >= len(s) or s[i] != char:
                        return a[:i]
    
            return a


        