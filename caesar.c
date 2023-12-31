﻿#include<stdio.h>
#include<string.h> // Added string.h for using strlen()


int main()
{
    char message[100], ch;
    int i, key;
    
    printf("Enter a message to encrypt: ");
    fgets(message, sizeof(message), stdin); // Replaced gets() with fgets() for safer input reading
    
    printf("Enter key: ");
    scanf("%d", &key);
    
    for(i = 0; i < strlen(message); ++i){ // Changed the loop condition to use strlen()
        ch = message[i];
        
        if(ch >= 'a' && ch <= 'z'){
            ch = ch + key;
            
            if(ch > 'z'){
                ch = ch - 'z' + 'a' - 1;
            }
            
            message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch = ch + key;
            
            if(ch > 'Z'){
                ch = ch - 'Z' + 'A' - 1;
            }
            
            message[i] = ch;
        }
    }
    
    printf("Encrypted message: %s", message);
    
    return 0;
}