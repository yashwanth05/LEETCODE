class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0;
        int j=0;
        int k=0;
        if(haystack.size()<needle.size()){
            return -1;
        }
        while(i<haystack.size() && j<needle.size()){
            if(haystack[k]!=needle[j]){
                i++;
                k++;
                j=0;
            }
            else{
                while(j<needle.size() && haystack[k]==needle[j]){
                    cout<<k<<" "<<j<<endl;
                    cout<<haystack[k]<<" "<<needle[j]<<endl;
                    k++;
                    j++;
                    cout<<k<<" "<<j<<endl;
                    cout<<haystack[k]<<" "<<needle[j]<<endl;
                }
                if(j==needle.size()){
                    return k-j;
                }
                else{
                    i++;
                    k=i;
                    j=0;
                    cout<<k<<" "<<j<<endl;
                }
            }
        }
        return -1;
    }
};