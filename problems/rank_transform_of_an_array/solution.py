class Solution(object):
    def arrayRankTransform(self, arr):
        ac = sorted(arr)
        d = {}
        prev = -1
        dup = 0
        for i in range(0,len(ac)):
            if prev == ac[i]:
                dup += 1
                continue
            d[ac[i]] = i+1-dup
            prev = ac[i]
        print(d)
        for i in range(0,len(arr)):
            arr[i] = d[arr[i]]
        return arr