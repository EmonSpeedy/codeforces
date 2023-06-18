#include <stdio.h>

int main(){
    char string[10];
    scanf("%s",string);

    for(int k=0; string[k]!= '\0'; k++){
       if(string[k] >= 'A' && string[k] <= 'Z'){
        string[k]+=32;
       }
       else if(string[k] >= 'a' && string[k] <= 'z'){
        string[k]-=32;
       }
    }
    printf("%s\n",string);
   

    return 0;
}