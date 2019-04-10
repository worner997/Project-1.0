#include <stdio.h>

int main()
{
    char message[100], character;
    int key, count;
    
    printf("Enter a message to Decrypt: ");
    gets(message);
    
    printf("Enter the rotation key ");
    scanf("%d", &key);
    if(key == 0)    {
        printf("%s", message);
    }
    for(count = 0; message[count]; count++) {
        character = message[count];  
        
        if(character >= 'A' && character < 'Z')    {
            character = character + key;
        }       
        if(character == 'Z') {
            character = character - 24 - key;
        }
        message[count] = character;
    }
    printf("Decrypted message: %s", message);
    

    return 0;
}