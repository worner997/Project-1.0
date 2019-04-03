#include <stdio.h>
//Rotation Cipher encryption

int main()
{
   char message[100], character;
    int key, count;
   
    printf("Enter a message to encrypt:");
    gets(message);
    
    printf("Enter a key: ");
    scanf("%d", &key);
    
    for(count = 0; message[count] != '\0'; count++)   {
       character = message[count];
       
        if(character >= 'A' && character <= 'Z')    {
            character = character + key;
            
        if(character > 'Z')   {
            character = character - 'Z' + 'A' - 1;
        }
        message[count] = character;
        }
    }
    
    printf("Encrypted message: %s", message);

    return 0;
}
