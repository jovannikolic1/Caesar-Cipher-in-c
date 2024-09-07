#include <stdio.h>

int main() {
    //initaliazing variables
    int key;
    char text[1000];
    int expression;
    //do-while for commands in terminal
    do {
        printf("\n1-encryption\n2-decryption\n");
        scanf("%d",&expression);
        switch (expression) {
            case 1:
                printf("Please enter a message to encrypt: \n");
                scanf("%s",&text);
                printf("Please enter the key: \n");
                scanf("%d",&key);
                //encryption of input
                for (int i = 0;text[i]!='\0'; i++)
                {
                      if(!(text[i]>47 && text[i]<58))
                      {
                          if(text[i]>64 && text[i]<91)
                          {
                              text[i]=(text[i]-'A'+key)%26+'A';
                          }
                          else if(text[i]>96 && text[i]<123)
                          {
                              text[i]=(text[i]-'a'+key)%26+'a';
                          }
                          else
                          {
                              printf("\nInvalid character");
                          }
                      }
                      else
                      {
                          text[i]=(text[i]-'0'+key)%10+'0';
                      }
                }
                printf("\nEncrypted message: %s",text);
                break;
            case 2:
                //decryption of input
                printf("\nPlease enter a message to decrypt: ");
                scanf("%s",&text);
                printf("\nPlease enter the key: ");
                scanf("%d",&key);
                for (int i = 0;text[i]!='\0'; i++)
                {
                    if(!(text[i]>47 && text[i]<58))
                    {
                        if(text[i]>64 && text[i]<91)
                        {
                            text[i]=(text[i]-'A'-key+26)%26+'A';
                        }
                        else if(text[i]>96 && text[i]<123)
                        {
                            text[i]=(text[i]-'a'-key+26)%26+'a';
                        }
                        else
                        {
                            printf("\nInvalid character");
                        }
                    }
                    else
                    {
                        text[i]=(text[i]-'0'-key+10)%10+'0';
                    }
                }
                printf("\nEncrypted message: %s",text);

            case 0:
               break;
        }

}
    while(expression!=0);



    return 0;
}
