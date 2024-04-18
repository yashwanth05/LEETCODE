class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> ma;
        set<string> myset;
        string st = "";
        int j=0;
        int i=0;
        int words = 0;
        while(i<s.size()+1){
            if(i==s.size() || s[i]==' '){
                words++;
                if(ma.find(pattern[j]) != ma.end()){
                    cout<<ma[pattern[j]]<<"||"<<st<<endl;
                   if(ma[pattern[j]]!=st){return false;} 
                   j++;
                }
                else{
                    cout<<pattern[j]<<" "<<st<<endl;
                    if(myset.find(st) != myset.end()){return false;}
                    myset.insert(st);
                    ma[pattern[j]]=st;
                    j++;
                }
                st = "";
                
            }
            else{
                st+=s[i];
            }
            i++;
            cout<<i<<" "<<s.size()<<endl;
        }
        if(words!=pattern.size()){return false;}
        return true;
    }
};