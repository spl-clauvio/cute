#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

static int difficulty = 0;
static int hard = 100;

void main_menu()
{
    system("cls");
    printf("#####  welcome!  #####\n");
    printf("#####   1.play   #####\n");
    printf("##### 2.settings #####\n");
    printf("#####   0.exit   #####\n");
}

void setting_menu()
{
    int countdown = 0;
    int time_left = 0;
    int time_chosen = 3;
    system("cls");
    printf("#####   1.easy   #####\n");
    printf("#####   2.mid    #####\n");
    printf("#####   3.hard   #####\n");
    printf("#####   4.time   #####\n");
    printf("#####  0.cancel  #####\n");

    scanf("%d", &difficulty);
    system("cls");
    switch (difficulty)
    {
    case 1:
        hard = 100;
        printf("Difficulty is set easy successfully!\n");
        break;
    case 2:
        hard = 1000;
        printf("Difficulty is set mid successfully!\n");
        break;
    case 3:
        hard = 10000;
        printf("Difficulty is set hard successfully!\n");
        break;
    case 4:
        printf("Set waiting time:__second\n");
        scanf("%d", &time_chosen);
        system("cls");
        printf("Waiting time %d second set successfully!\n", time_chosen);

        break;
    case 0:
        printf("Operation was canceled!\n");
        break;

    default:
        system("cls");
        printf("Wrong difficulty! Please re-enter!\n");
    }
    for (time_left = time_chosen; time_left >= 1; time_left--)
    {
        printf("\nReturn to main menu in %d second\n", time_left);
        Sleep(1000);
    }
    system("cls");
    printf("Returning to main menu.\n");
    Sleep(500);
    // break;
}

void gameover()
{
    int op = 0;

    printf("\n#####  1.main menu  #####\n");
    scanf("%d", &op);
}
void game()
{
    system("cls");
    int ret, guess, step, flag = 0;
    ret = rand();
    ret = rand(); // Filter the first rand().
    ret = ret * hard / 32767;

    printf("Tips: range is 0~%d\n", hard);
    do
    {
        scanf("%d", &guess);
        step++;
        if (guess > hard)
        {
            flag++;
            if (flag == 2)
            {
                break;
            }
            printf("Your number is over the difficulty range!\n\nYou can interrupt game by entering a number over the range twice.\n");
        }
        else if (guess > ret)
        {
            printf("Your number is bigger than it.\n");
        }
        else if (guess < ret)
        {
            printf("Your number is smaller than it.\n");
        }
        else
        {
            system("cls");
            printf("You guessed the correct number!\nCongratulations!\n");
        }
    } while (guess != ret);

    if (flag < 2)
    {
        printf("The final answer is %d\n", ret);
        if (step > 1)
            printf("It took you %d steps!\n", step);
        else
            printf("It took you %d step!\n", step);
    }
    gameover();
}

int main()
{
    srand((unsigned int)time(NULL));
    int input = 0;

    do
    {
        main_menu();
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 2:
            setting_menu();
            break;
        case 0:
            system("cls");
            printf("Exit the game!\n");
            printf("Expecting your next play!\n\n");
            break;
        default:
            printf("Wrong input! Please enter a number(0/1) again.\n");
        }
    } while (input);

    system("pause");
    return 0;
}