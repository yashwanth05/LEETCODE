class Solution(object):
    def mergeAlternately(self, word1, word2):
        len1 = len(word1)
        len2 = len(word2)
        r=0
        i=0
        j=0
        st = ""
        while(i<len1 or j<len2):
            if(i<len1):
                st = st+word1[i]
                i+=1
            if(j<len2):
                st = st+word2[j]
                j+=1
        return st
        