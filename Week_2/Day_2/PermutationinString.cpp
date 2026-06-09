class Solution {
public:
    bool isfreqsame(int fre[],int winfreq[]){
        for(int i=0;i<26;i++){
            if(fre[i]!=winfreq[i]){
                return false;
            }
        }
        return true;


    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;
        }
        int windsize=s1.length();
        for(int i=0;i<s2.length();i++){
            int windidx=0,idx=i;
            int winfreq[26]={0};
            while(windidx<windsize && idx<s2.length()){
                winfreq[s2[idx]-'a']++;
                windidx++;
                idx++;
            }
            if(isfreqsame(freq,winfreq)){
                return true;
            }
        }
        return false;
    }
};
