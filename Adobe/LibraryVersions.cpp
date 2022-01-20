class Solution {
public:
    int compareVersion(string version1, string version2) {
        
        int i=0,j=0;
    
        while(i<version1.length() && j<version2.length()){
            
            int num1=0,num2=0;
            
            while(version1[i]!='.'&& i<version1.length()){

            num1 =num1*10 +(version1[i]-'0');
                i++;
            }
            
            while(version2[j]!='.'&& j<version2.length()){
              num2 =num2*10 +(version2[j]-'0');
                j++;
            
            }
            if(num1>num2)return 1;
            else if(num2>num1)return -1;
            
            i++;j++;
        }
        
          while(i<version1.size()){
            if(version1[i] != '.' && version1[i] != '0') return 1;
            i++;
        }
        
        while(j<version2.size()){
            if(version2[j] != '.' && version2[j] != '0') return -1;
            j++;
        }
        return 0;
        
    
    }
};
