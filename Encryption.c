#include <stdio.h>
//Rotation Cipher encryption
//
int main()
{
   char message[100], character;
    int key, count;
   
    printf("Enter a message to encrypt:");
    gets(message);
    
    printf("Enter a key: ");
    scanf("%d", &key);
    if(key == 0)    {
        printf("%s", message);
    }
    for(count = 0; message[count] != '\0'; count++)   {
       character = message[count];
       
        if(character >= 'B' && character <= 'Z')    {
            character = character - key;
        }
        if(character == 'A')   {
            character = character + 25;
        }
        message[count] = character;
        if(character >= 'a' && character <= 'z')    {
            character = character - 32;
            character = character + key;
        }
    }
    
    printf("Encrypted message: %s", message);

    return 0;
}