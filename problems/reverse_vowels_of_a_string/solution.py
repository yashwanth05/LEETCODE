class Solution(object):
    def reverseVowels(self, s):
        v=['a', 'e', 'i', 'o','u','A','E','I','O','U']
        l=[]
        for i in s:
            if i in v:
                l.append(i)
        
        r=len(l)-1
        st = ""
        for j in s:
            if j in v:
                st=st+l[r]
                r-=1
            else:
                st=st+j
        return st