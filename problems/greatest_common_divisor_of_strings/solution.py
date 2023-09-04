class Solution(object):
    def gcdOfStrings(self, str1, str2):
        """
        :type str1: str
        :type str2: str
        :rtype: str
        """
        if len(str2) > len(str1):
            a = str1
            str1 = str2
            str2 = a
        ans = ""

        for i in range(0, len(str2)):
            temp = str2[0:i+1]
            temp1 = ""
            temp2 = ""
            if len(str1) % len(temp) == 0 and len(str2) % len(temp) == 0:
                temp1 = temp*(len(str1)//len(temp))
                temp2 = temp*(len(str2)//len(temp))
                # print(temp)
                # print(temp1)
                # print(temp2)

            if (temp1 == str1 and temp2 == str2 and len(temp) > len(ans)):
                # print(temp1, temp2)
                ans = temp
            # print(ans)
        return ans