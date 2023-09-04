class Solution(object):
    def canPlaceFlowers(self, flowerbed, n):
        l = len(flowerbed)
        count = 0
        i = 0
        while i<l:
            if flowerbed[i] == 0 and (i == 0 or flowerbed[i - 1] == 0) and (i == len(flowerbed) - 1 or flowerbed[i + 1] == 0):
                count+=1
                flowerbed[i]=1
            i+=1
        return count >=n
            
            