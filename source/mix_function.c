#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>
#include <string.h>

static int hang_set = 5;
static int line_spacing = 0;
static int hanoi_column_num = 1;
static int hanoi_plate_number, hanoi_column_check, hanoi_line_spacing = 0;
static char hanoi_beginning_pole = 'A';
static char hanoi_endding_pole = 'C';
static char hanoi_transit_pole = 'B';

void clear()
{
    system("cls");
}

void pause()
{
    system("pause");
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

void prime_single()
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

void prime_main_menu()
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
    printf("\n#####  1.Prime main menu  #####\n");
    scanf("%d", &over);
}

void hanoi_check_over()
{
    int over = 0;
    printf("\n#####  1.Hanoi main menu  #####\n");
    scanf("%d", &over);
}

void Fibonacci_sequence_return_menu()
{
    int over = 0;
    printf("\n#####  1.Fibonacci main menu  #####\n");
    scanf("%d", &over);
}

void number_counter_return_menu()
{
    int over = 0;
    printf("\n#####  1.Number counter main menu  #####\n");
    scanf("%d", &over);
}

void prime_setting_menu_hang_set()
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

void prime_setting_menu_line_spacing()
{
    clear();
    printf("Please enter a line spacing num you like.Default is 0\n");

    scanf("%d", &line_spacing);
    clear();

    printf("Line spacing set successfully!\n\n%d lines will be between results.\n", line_spacing);
}

void prime_setting_menu()
{
    int numseen = 0;
    int prime_setting_menu_input = 0;
    clear();
    printf("#####    1.Column set    #####\n");
    printf("##### 2.Line spacing set #####\n");
    printf("#####       0.Exit       #####\n");
    scanf("%d", &prime_setting_menu_input);

    switch (prime_setting_menu_input)
    {
    case 1:
        prime_setting_menu_hang_set();
        break;
    case 2:
        prime_setting_menu_line_spacing();
        break;
    case 0:
        clear();
        break;
    default:
        break;
    }
}

void prime_range_menu()
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

void prime_guide_menu()
{
    clear();
    printf("Developed by spl-clauvio\n");
    printf("Copyright by spl-clauvio\n");
    printf("\n\n");
}

void prime_main()
{
    int prime_input = 0;
    do
    {
        clear();
        prime_main_menu();
        scanf("%d", &prime_input);
        switch (prime_input)
        {
        case 1:
            prime_single();
            prime_check_over();
            break;
        case 2:
            prime_range_menu();
            prime_check_over();
            break;
        case 3:
            prime_setting_menu();
            prime_check_over();
            break;
        case 4:
            prime_guide_menu();
            prime_check_over();
            break;
        default:
            clear();
            break;
        }
    } while (prime_input);
}

void hanoi_main_menu()
{
    printf("#####     Welcome!     #####\n");
    printf("##### 1.Hanoi solution #####\n");
    printf("##### 2.Hanoi settings #####\n");
    printf("#####     3.Guide      #####\n");
    printf("#####     0.Exit       #####\n");
}

void hanoi_setting_column_set()
{
    hanoi_column_check = 0;
    printf("Please enter a column num.\n");
    scanf("%d", &hanoi_column_num);
    clear();
    printf("Column num %d set seccessfully.\n", hanoi_column_num);
}

void hanoi_setting_line_spacing_set()
{
    printf("Please enter a line spacing num.\n");
    scanf("%d", &hanoi_line_spacing);
    clear();
    printf("Line spacing num %d set seccessfully.\n", hanoi_column_num);
}

void hanoi_setting_menu()
{
    int hanoi_setting_menu_input = 0;
    printf("#####   1.Column set   #####\n");
    printf("#####  2.Line spacing  #####\n");
    printf("#####      0.Exit      #####\n");

    scanf("%d", &hanoi_setting_menu_input);

    switch (hanoi_setting_menu_input)
    {
    case 1:
        hanoi_setting_column_set();
        break;
    case 2:
        hanoi_setting_line_spacing_set();
        break;
    default:
        break;
    }
}
void hanoi_move(char wood_pole1, char wood_pole2)
{
    int i = 0;
    printf("%c -> %c    ", wood_pole1, wood_pole2);
    hanoi_column_check++;
    if (hanoi_column_check >= hanoi_column_num)
    {
        for (i = 0; i <= hanoi_line_spacing; i++)
            printf("\n");
        hanoi_column_check = 0;
    }
}

void hanoi_solution_1(int plate_number, char p1, char p2, char p3)
{
    if (plate_number == 1)
        hanoi_move(p1, p3);
    else
    {
        hanoi_solution_1(plate_number - 1, p1, p3, p2);

        hanoi_move(p1, p3);

        hanoi_solution_1(plate_number - 1, p2, p1, p3);
    }
}

void hanoi_solution()
{

    printf("Please enter the number of plate you want to move.\n");
    hanoi_column_check = 0;

    do
    {
        scanf("%d", &hanoi_plate_number);
    } while (hanoi_plate_number < 1);
    clear();
    switch (hanoi_plate_number)
    {
    case 1:
        printf("%d plate solution:\n", hanoi_plate_number);
        hanoi_move(hanoi_beginning_pole, hanoi_endding_pole);
        break;
    default:
        printf("%d plates solution:\n", hanoi_plate_number);
        hanoi_solution_1(hanoi_plate_number, hanoi_beginning_pole, hanoi_transit_pole, hanoi_endding_pole);
        break;
    }
}

void hanoi_guide_menu()
{
    clear();
    printf("Developed by spl-clauvio\n");
    printf("Copyright by spl-clauvio\n");
    printf("\n\n");
}

void hanoi_main()
{
    int hanoi_input = 0;
    do
    {
        clear();
        hanoi_main_menu();
        scanf("%d", &hanoi_input);
        clear();

        switch (hanoi_input)
        {
        case 1:
            hanoi_solution(hanoi_input);
            hanoi_check_over();
            break;
        case 2:
            hanoi_setting_menu();
            hanoi_check_over();

            break;
        case 3:
            hanoi_guide_menu();
            hanoi_check_over();
            break;
        default:
            break;
        }
    } while (hanoi_input);
}

int fibonacci_list_member_maker(int n)
{
    int i, ret = 0;
    int l = 1;
    int r = 1;

    if (n <= 0)
        return 0;
    else if (n <= 2)
        return 1;
    else
    {
        for (i = 2; i < n; i++)
        {
            ret = l + r;
            l = r;
            r = ret;
        }
        return ret;
    }
}

void fibonacci_sequence_main_menu()
{
    printf("#####       Welcome!       #####\n");
    printf("#####   1.List fibonacci   #####\n");
    printf("#####    2.Member check    #####\n");
    // printf("#####     3.Find place     #####\n");
    printf("#####       5.Guide        #####\n");
    printf("#####        0.Exit        #####\n");
}

void fibonacci_sequence_list_maker()
{
    int length, i = 0;
    printf("Please enter the length of fibonacci sequence you want\n");
    scanf("%d", &length);
    clear();

    printf("Here are the fibonacci sequence you want:\n");
    for (i = 0; i < length; i++)
    {
        printf("%8d", fibonacci_list_member_maker(i + 1));
    }
}

void fibonacci_sequence_member_check()
{
    int member_to_check = 0;
    int member_indeed = -1;
    int member_place = 1;
    printf("Please enter a number that you want to check\n");
    scanf("%d", &member_to_check);
    clear();

    do
    {
        member_indeed = fibonacci_list_member_maker(member_place);

        if (member_indeed == member_to_check)
        {
            if (member_place % 10 > 3)
                printf("%d is the %dth of fibonacci sequence.\n", member_to_check, member_place);
            else if (member_place % 10 == 3)
                printf("%d is the %drd of fibonacci sequence.\n", member_to_check, member_place);
            else if (member_place > 10 && member_place % 10 == 1)
                printf("%d is the %dst of fibonacci sequence.\n", member_to_check, member_place);
            else if (member_place > 10 && member_place % 10 == 2)
                printf("%d is the %dnd of fibonacci sequence.\n", member_to_check, member_place);
            else
                printf("%d is the 1st or 2nd of fibonacci sequence.\n", member_to_check);
            break;
        }
        member_place++;
    } while (member_to_check > member_indeed);

    if (member_to_check < member_indeed)
    {
        printf("%d is not a fibonacci number.\n", member_to_check);
    }
}

void fibonacci_sequence_main()
{
    int fibonacci_input = 0;

    do
    {
        clear();
        fibonacci_sequence_main_menu();

        scanf("%d", &fibonacci_input);
        clear();
        switch (fibonacci_input)
        {
        case 1:
            fibonacci_sequence_list_maker();
            Fibonacci_sequence_return_menu();
            break;
        case 2:
            fibonacci_sequence_member_check();
            Fibonacci_sequence_return_menu();
            break;
        case 3:
            Fibonacci_sequence_return_menu();
            break;
        case 4:
            Fibonacci_sequence_return_menu();
            break;
        default:
            break;
        }
    } while (fibonacci_input);
}

void number_counter_main_menu()
{
    printf("#####       Welcome!       #####\n");
    printf("#####       1.Count        #####\n");
    printf("#####        0.exit        #####\n");
}

int number_counter_single_counter(int input, int check)
{
    int count = 0;
    int remainder = 0;
    input = abs(input);

    do
    {
        remainder = input % 10;
        input = input / 10;
        if (remainder == check)
        {
            count++;
        }
    } while (input);

    return count;
}
void number_counter_count()
{
    int l = 0;
    int r = 0;
    int i = 0;
    int single_return = 0;
    int sum = 0;
    int number_counter_count_input = 0;

    printf("Please enter the beginning of a continuous arroy.\n");
    scanf("%d", &l);
    clear();

    printf("Please enter the end of a continuous arroy.\n");
    scanf("%d", &r);
    clear();

    printf("Please enter the number to count\n");
    scanf("%d", &number_counter_count_input);
    clear();

    for (i = l; i <= r; i++)
    {
        single_return = number_counter_single_counter(i, number_counter_count_input);

        sum += single_return;

        printf("%8d has %d \'%d\'.\n", i, single_return, number_counter_count_input);
    }
    printf("%d\n", sum);
}

void number_counter_main()
{
    int number_counter_input = 0;

    do
    {
        clear();
        number_counter_main_menu();
        scanf("%d", &number_counter_input);
        clear();

        switch (number_counter_input)
        {
        case 1:
            number_counter_count();
            number_counter_return_menu();
            break;
        default:
            break;
        }
    } while (number_counter_input);
}

void main_menu()
{
    printf("#####       Welcome!       #####\n");
    Sleep(300);
    printf("#####    1.Prime number    #####\n");
    Sleep(300);
    printf("#####   2.Tower of Hanoi   #####\n");
    Sleep(300);
    printf("##### 3.Fibonacci sequence #####\n");
    Sleep(300);
    printf("#####   4.Number counter   #####\n");
    Sleep(300);
    printf("#####        0.Exit        #####\n");
    Sleep(200);
    printf("\nMain menu load successfully!\n");
}

int account()
{
    int password_trying_times = 0;
    char password[20] = {"123zlaw123"};
    char password_enter[20] = {"0"};
    printf("Please enter your password.\n");
    for (password_trying_times = 0; password_trying_times < 3; password_trying_times++)
    {
        switch (password_trying_times)
        {
        case 0:
            printf("First entering.\n");
            break;
        case 1:
            printf("Second entering.\n");
            break;
        case 2:
            printf("Third entering.\n");
            break;
        }

        scanf("%s", password_enter);
        clear();
        if (!strcmp(password, password_enter))
        {
            printf("Password correct!\n\n");
            return 1;
            break;
        }
        else
        {
            printf("Password incorrect!\n");
            switch (password_trying_times)
            {
            case 0:
                printf("Two trying chances left.\n");
                break;
            case 1:
                printf("One trying chance left.\n");
                break;
            case 2:
                printf("You have used up all entering chances,program is about to exit.\n");

                pause();
                return 0;
                break;
            }
        }
    }
}

int main()
{
    int input = 0;
    int password_flag = 1;

    if (password_flag)
    {
        if (0 == account())
        {
            return 0;
        }
    }

    do
    {

        main_menu();
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            prime_main();
            break;
        case 2:
            hanoi_main();
            break;
        case 3:
            fibonacci_sequence_main();
            break;
        case 4:
            number_counter_main();
            break;
        default:
            break;
        }

    } while (input);

    clear();
    pause();
    return 0;
}