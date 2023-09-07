#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i = 0;
    char password_input[20] = {0};
    char password[] = {"123zlaw123"};

    for (i = 0; i < 3; i++)
    {
        printf("Please enter your password.\n");
        scanf("%s", password_input);

        if (!strcmp(password, password_input))
        // strcmp return 0:means a==b;
        {
            printf("Login successfully!\n");
            break;
        }
        else
        {
            printf("Wrong password;%d chances left.\n", 3 - 1 - i);
            if (i >= 2)
            {
                system("cls");
                printf("\aExit system! Too many fault password!\n");
            }
        }
    }

    system("pause");
    return 0;
}