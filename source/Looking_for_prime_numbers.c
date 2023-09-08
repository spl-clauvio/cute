#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>

static int hang_set = 5;
static int line_spacing = 0;

void clear()
{
    system("cls");
}

int is_prime(int num)
{
    int i = 0;
    for (i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void single()
{
    clear();

    int single_n = 0;
    printf("Please enter a number\n");
    scanf("%d", &single_n);

    clear();

    if (is_prime(single_n))
        printf("%d is a prime number!\n\n", single_n);
    else
        printf("Error! %d is not a prime number!\n\n", single_n);
}

void main_menu()
{
    printf("#####   Welcome!   #####\n");
    printf("#####   1.Single   #####\n");
    printf("#####   2.Range    #####\n");
    printf("#####   3.Settings #####\n");
    printf("#####   4.Guide    #####\n");
    printf("#####   0.Exit     #####\n");
}

void prime_check_over()
{
    int over = 0;
    printf("#####  1.main menu  #####\n");
    scanf("%d", &over);
}

void setting_menu_hang_set()
{
    int flag_setting_menu_hang_set, hang_set_copy = 0;
    hang_set_copy = hang_set;
    clear();
    printf("Please enter a columns num you like.Default is 5\n");
    do
    {
        if (flag_setting_menu_hang_set == 0)
            printf("Enter any int type number smaller than 1 twice will cancel the operation.\n\n");
        else
            printf("Enter any int type number smaller than 1 again will cancel the operation.\n\n");

        scanf("%d", &hang_set);
        clear();
        if (hang_set > 0)
            break;
        else
        {
            flag_setting_menu_hang_set++;
            if (flag_setting_menu_hang_set == 2)
            {
                hang_set = hang_set_copy;
                break;
            }
        }
    } while (1);
    clear();

    if (hang_set > 1)
        printf("Column num set successfully!\n\nResults will display in %d columns.\n", hang_set);
    else
        printf("Column num set successfully!\n\nResults will display in %d column.\n", hang_set);
}

void setting_menu_line_spacing()
{
    clear();
    printf("Please enter a line spacing num you like.Default is 0\n");

    scanf("%d", &line_spacing);
    clear();

    printf("Line spacing set successfully!\n\n%d lines will be between results.\n", line_spacing);
}

void setting_menu()
{
    int numseen = 0;
    int setting_menu_input = 0;
    clear();
    printf("#####    1.Column set    #####\n");
    printf("##### 2.Line spacing set #####\n");
    printf("#####       0.Exit       #####\n");
    scanf("%d", &setting_menu_input);

    switch (setting_menu_input)
    {
    case 1:
        setting_menu_hang_set();
        break;
    case 2:
        setting_menu_line_spacing();
        break;
    case 0:
        clear();
        break;
    default:
        break;
    }
}

void range_menu()
{
    int i_line_spacing = 0;
    clear();

    int left, right, prime_check, hang_num, prime_num = 0;
    printf("Please enter the min number.\n");
    scanf("%d", &left);

    clear();

    printf("Left set %d successfully! Please enter the max number.\n", left);

    scanf("%d", &right);
    clear();
    printf("Prime numbers from %d to %d:\n\n", left, right);

    for (prime_check = left; prime_check <= right; prime_check++)
    {
        if (is_prime(prime_check))
        {
            printf("%8d", prime_check);
            prime_num++;
            hang_num++;
        }
        if (hang_num == hang_set)
        {
            for (i_line_spacing = 0; i_line_spacing <= line_spacing; i_line_spacing++)
            {
                printf("\n");
            }
            hang_num = 0;
        }
    }
    printf("\n%d\n", prime_num);
}

void guide_menu()
{
    clear();
    printf("Developed by spl-clauvio\n");
    printf("Copyright by spl-clauvio\n");
    printf("\n\n");
}

int main()
{
    int input = 0;
    do
    {
        system("cls");
        main_menu();
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            single();
            prime_check_over();
            break;
        case 2:
            range_menu();
            prime_check_over();
            break;
        case 3:
            setting_menu();
            prime_check_over();

            break;
        case 4:
            guide_menu();
            prime_check_over();
        default:
            break;
        }
    } while (input);
    system("pause");
    return 0;
}