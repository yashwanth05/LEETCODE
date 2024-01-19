class Solution(object):
    def longestCommonPrefix(self, strs):
        st=""
        s = strs[0]
        i=0
        while i<len(s):
            k=1
            for j in strs:
                if i<len(j):
                    if s[i] !=j[i]:
                        k=0
                else:
                    return st
            if k==1:
                st=st+s[i]
            if k==0:
                break
            i=i+1
        return st 
        
            
        