class Solution(object):
    def reverseWords(self, s):
        x = s.split(" ")
        filtered_list = [item for item in x if item != '']
        new_lst = filtered_list[::-1]
        st = " "
        return st.join(new_lst)
        
        