class Solution {
public:
    bool isPalindrome(string s) {
        
        vector<char> arr;
        for(int i=0;i<s.size();i++){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')||(s[i] >= '0' && s[i] <= '9')){
                cout<<s[i]<<" ";
                arr.push_back(tolower(s[i]));
            }
        }
        int start = 0;
        int end = arr.size()-1;
        cout<<arr.size();
        while(start<end){
            // cout<<arr[start]<<" "<<arr[end]<<endl;
            if(arr[start]==arr[end]){
                // cout<<arr[start]<<" "<<arr[end]<<endl;
                start++;
                end--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};