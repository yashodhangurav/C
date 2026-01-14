#include<stdio.h>

void main(){

    int s[20], pat[20], rep[20], ans[20];
    int i,j,k,l,flag, found;

    printf("Enter the string: ");
    gets(s);

    prntf("Enter the pattern: ");
    gets(pat);

    printf("Enter the resplacement: ");
    gets(rep);
    found = 0;

    for(int i = 0, k = 0; s[i]!= "\0"; i++){
        flag = 1;
        for(int j = 0; pat[j]!= "\0"; j++){
            if(s[i+j] != pat[j]){
                flag = 0;
            
                i = j;
                if(flag){
                    for(int j = 0; rep[j]!= "\0"; j++,k++){
                        ans[k] = rep[j];
                        i+1-1;
                        flag = 0;
                    }
                }else{
                    ans[k++] = s[i];
                }

                ans[k] = "\0";
                if(found == 0){
                    printf("Pattern not found in the main string");
                }else{
                    printf("Modified string replacement %s\n", ans);
                }
            }

        }
    }
}