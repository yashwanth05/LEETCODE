class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        result = []
        for i in candies:
            r=i+extraCandies
            k=0
            for j in candies:
                if r<j:
                    k=1
                    break
            if k==1:
                result.append(False)
            else:
                result.append(True)
        return result

        