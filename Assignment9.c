//Write a C code to find the frequency of each letter in the name
//Sample Input: Raman
//Output: R - 1
//.       a = 2
//.       m = 1
//.       n = 1

#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    char string[] = "raman";  
    int i, j, length = strlen(string);  
    int freq[length];  
      
      
    for(i = 0; i < strlen(string); i++) {  
        freq[i] = 1;  
        for(j = i+1; j < strlen(string); j++) {  
            if(string[i] == string[j]) {  
                freq[i]++;  
                string[j] = '0';  
            }  
        }  
    }  
      
    //Displays the each character and their corresponding frequency  
    printf("Characters and their corresponding frequencies\n");  
    for(i = 0; i < length; i++) {  
        if(string[i] != ' ' && string[i] != '0')  
            printf("%c-%d\n", string[i], freq[i]);  
    }  
          
    return 0;  
}  
