class Solution(object):
    def finalPrices(self, prices):
        n = []
        k=0
        for i in range(0,len(prices)-1):
            k=0
            for j in range(i+1,len(prices)):
                if prices[i]>=prices[j]:
                    n.append(prices[i]-prices[j])
                    k=1
                    break
            if k==0:
                n.append(prices[i])
        n.append(prices[len(prices)-1])
        return n
            
        