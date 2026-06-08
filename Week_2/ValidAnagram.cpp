class Solution {
public:
    bool isfreqequal(int sfreq[],int tfreq[],int n){
        int freq=0;
        for(int i=0;i<26;i++){
            if(sfreq[i]==tfreq[i]){
                freq++;
            }
            
        }
        if(freq==n){
            return true;
        }
        return false;
    }
    bool isAnagram(string s, string t) {
        int sfreq[26]={0};
        int tfreq[26]={0};
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            sfreq[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++){
            tfreq[t[i]-'a']++;
        }
        if(isfreqequal(sfreq,tfreq,26)){
            return true;
        }
        
        return false;
    }
};
