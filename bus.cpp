#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#include <cmath>
using namespace std;
void printHeader();
void welcome();
int loginPage();
void logIn();
void signUp();
void signCheck(int userCount);
void exit();
void gotoxy(int x, int y);
string signIn(string name, string password);
void validationCheck(int studentCount);
int manager(string roll);
int boss(string roll);
int employee(string roll);
void addEmployee();
void displayEmployee();
void employeeInfo();
void averageSalary();
void increaseSalary();
void checkTask();
void managerlogo();
void bossLogo();
void totalSalary();
void giveBonus();
int userCount = 0;
int studentCount = 0;
int dcount = 0;
string userName[100];
string userPassword[100];
string roll[100];
string employeeName[100];
string employeeId[100];
string employeeSalary[100];
string employeeDepartment[100];
string yearsWorked[100];
string taskCompleted[100];
int op;
int choice;
int main()
{
    system("cls");
    loginPage();
    while (op < 4)
    {
        system("cls");
        printHeader();

        if (op == 1)
        {
            logIn();
        }
        else if (op == 2)
        {
            signUp();
        }
        else if (op == 3)
        {
            exit();
        }
    }
    return 0;
}
void printHeader()
{

    cout << "                               _   _                               ____                                                " << endl;
    cout << "                              | | | |_   _ _ __ ___   __ _ _ __   |  _ \\ ___  ___  ___  _   _ _ __ ___ ___             " << endl;
    cout << "                              | |_| | | | | '_ ` _ \\ / _` | '_ \\  | |_) / _ \\/ __|/ _ \\| | | | '__/ __/ _ \\       " << endl;
    cout << "                              |  _  | |_| | | | | | | (_| | | | | |  _ <  __/\\__ \\ (_) | |_| | | | (_|  __/          " << endl;
    cout << "                              |_| |_|\\__,_|_| |_| |_|\\__,_|_| |_| |_| \\_\\___||___/\\___/ \\__,_|_|  \\___\\___|    " << endl;

    cout << "                   __    __                                                  _     ____            _                          " << endl;
    cout << "                   |  \\/  | __ _ _ __   __ _  __ _  ___ _ __ ___   ___ _ __ | |_  / ___| _   _ ___| |_ ___ _ __ ___          " << endl;
    cout << "                   | |\\/| |/ _` | '_ \\ / _` |/ _` | / _\\  '_ ` _ \\ / _\\ '_ \\| __| \\___ \\| | | / __| __/ _ \\ '_ ` _ \\" << endl;
    cout << "                   | |  | | (_| | | | | (_| | (_| |  __/ | | | | |  __/ | | | |_   ___) | |_| \\__ \\ ||  __/ | | | | |       " << endl;
    cout << "                   |_|  |_|\\___ |_| |_|\\__,_|\\__  |\\___|_| |_| |_|\\___|_| |_|\\__| |____/ \\__, |___/\\__\\___|_| |_| |_|" << endl;
    cout << "                                             |___/                                       |___/                                " << endl;
    cout << endl;
}
int loginPage()
{
    printHeader();
    welcome();
    gotoxy(45, 15);
    cout << "1. Sign In" << endl;
    gotoxy(45, 16);
    cout << "2. Sign Up" << endl;
    gotoxy(45, 17);
    cout << "3. Exit" << endl;
    gotoxy(45, 18);
    cout << "Select your Option (press 1 or 2 or 3): ";
    cin >> op;
    return op;
}
void logIn()
{
    string name, password;
    gotoxy(45, 30);
    cout << "   _____ _                ____        " << endl;
    gotoxy(45, 31);
    cout << "  / ___/(_)___ _____     /  _/___     " << endl;
    gotoxy(45, 32);
    cout << "  \\__ \\/ / __ `/ __ \\    / // __ \\   " << endl;
    gotoxy(45, 33);
    cout << " ___/ / / /_/ / / / /  _/ // / / /     " << endl;
    gotoxy(45, 34);
    cout << "/____/_/\\__, /_/ /_/  /___/_/ /_/      " << endl;
    gotoxy(45, 35);
    cout << "       /____/                          " << endl;
    gotoxy(45, 12);
    {
        cout << "1. User name: ";
        cin >> name;
        gotoxy(45, 13);
        cout << "2. User Password: ";
        cin >> password;
    }
    string roll = signIn(name, password);
    if (roll != "Not found")
    {
        if (roll == "manager" || roll == "Manager")
            manager(roll);
        if (roll == "boss" || roll == "Boss")
            boss(roll);
        if (roll == "employee" || roll == "Employee")
            employee(roll);
    }
    else
    {
        cout << "User not found. Please try again." << endl;
    }
}
string signIn(string name, string password)
{

    for (int x = 0; x < userCount; x++)
    {
        if (name == userName[x] && password == userPassword[x])
        {

            return roll[x];
        }
    }
    return "Not found";
}
int manager(string roll)
{
    system("cls");
    printHeader();
    {
        managerlogo();
        {
            int select1;
            gotoxy(40, 19);
            cout << "1. Add Employee" << endl;
            gotoxy(40, 20);
            cout << "2. Display All Employees" << endl;
            gotoxy(40, 21);
            cout << "3. Employees Working Info" << endl;
            gotoxy(40, 22);
            cout << "4. Calculate Average Salary" << endl;
            gotoxy(40, 23);
            cout << "5. Increase Salary" << endl;
            gotoxy(40, 24);
            cout << "6. Check tasks" << endl;
            gotoxy(40, 25);
            cout << "7. Exit" << endl;
            gotoxy(40, 26);
        select:
            gotoxy(40, 26);
            cout << "Enter your choice: ";
            cin >> select1;
            if (select1 > 6)
                goto select;
            if (select1 == 1)
            {
                system("cls");
                printHeader();
                managerlogo();
                addEmployee();
                system("cls");
                manager("manager");
            }
            if (select1 == 2)
            {
                system("cls");
                printHeader();
                managerlogo();
                displayEmployee();
                system("cls");
                manager("manager");
            }
            if (select1 == 3)
            {
                system("cls");
                printHeader();
                managerlogo();
                employeeInfo();
                system("cls");
                manager("manager");
            }
            if (select1 == 4)
            {
                system("cls");
                printHeader();
                managerlogo();
                averageSalary();
                system("cls");
                manager("manager");
            }
            if (select1 == 5)
            {
                system("cls");
                printHeader();
                managerlogo();
                increaseSalary();
                system("cls");
                manager("manager");
            }
            if (select1 == 6)
            {
                system("cls");
                printHeader();
                managerlogo();
                checkTask();
                system("cls");
                manager("manager");
            }
            if (select1 == 7)
            {
                system("cls");
                printHeader();
                managerlogo();
                exit();
                system("cls");
                manager("manager");
            }
        }
    }
}
int boss(string roll)
{
    system("cls");
    printHeader();
    {
        bossLogo();
        int select2;
        gotoxy(40, 18);
        cout << "1. View Employees" << endl;
        gotoxy(40, 19);
        cout << "2. View Total Salary Of Employees" << endl;
        gotoxy(40, 20);
        cout << "3. View Average Salary Of Employees" << endl;
        gotoxy(40, 21);
        cout << "4. Give Bonus " << endl;
        gotoxy(40, 22);
        cout << "5. Fier Employees " << endl;
        gotoxy(40, 23);
        cout << "6. Exit " << endl;
        gotoxy(40, 24);
    select:
        cout << "Enter your choice: ";
        cin >> select2;
        if (select2 > 6)
            goto select;
        else
            return select2;
        if (select2 == 1)                    
        {
            system("cls");
            printHeader();
            bossLogo();
            displayEmployee();
            system("cls");
            boss("boss");
        }
        if (select2 == 2)
        {
            system("cls");
            printHeader();
            bossLogo();
            totalSalary();
            system("cls");
            boss("boss");
        }
        if (select2 == 3)
        {
            system("cls");
            printHeader();
            bossLogo();
            averageSalary();
            system("cls");
            boss("boss");
        }
        if (select2 == 4)
        {
            system("cls");
            printHeader();
            bossLogo();
            giveBonus();
            system("cls");
            boss("boss");
        }
    }
}
int employee(string roll)
{
    system("cls");
    printHeader();
    {
        gotoxy(8, 13);
        cout << "    ________  _______  __    ______  ______________      " << endl;
        gotoxy(8, 14);
        cout << "   / ____/  |/  / __ \\/ /   / __ \\ \\/ / ____/ ____/   " << endl;
        gotoxy(8, 15);
        cout << "  / __/ / /\\_/ / /_/ / /   / / / /\\  / __/ / __/       " << endl;
        gotoxy(8, 16);
        cout << " / /___/ /  / / ____/ /___/ /_/ / / / /___/ /___         " << endl;
        gotoxy(8, 17);
        cout << "/_____/_/  /_/_/   /_____/\\____/ /_/_____/_____/        " << endl;
        {
            int select3;
            gotoxy(40, 19);
            cout << "1. Check Status " << endl;
            gotoxy(40, 20);
            cout << "2. View Salary Status " << endl;
            gotoxy(40, 21);
            cout << "3. Update Work " << endl;
            gotoxy(40, 22);
            cout << "4. View Bonus " << endl;
            gotoxy(40, 23);
            cout << "5. Exit " << endl;
            gotoxy(40, 24);
        select:
            cout << "Enter your choice: ";
            cin >> select3;
            if (select3 > 6)
                goto select;
            else
                return select3;
        }
    }
}
void signUp()
{
    gotoxy(45, 30);
    cout << "   _____ _                __  __    " << endl;
    gotoxy(45, 31);
    cout << "  / ___/(_)___ _____     / / / /___ " << endl;
    gotoxy(45, 32);
    cout << "  \\__ \\/ / __ `/ __ \\   / / / / __ \\" << endl;
    gotoxy(45, 33);
    cout << " ___/ / / /_/ / / / /  / /_/ / /_/ /" << endl;
    gotoxy(45, 34);
    cout << "/____/_/\\__, /_/ /_/   \\____/ .___/ " << endl;
    gotoxy(45, 35);
    cout << "       /____/              /_/      " << endl;
    gotoxy(45, 14);
    cout << "1. User name: ";
    cin >> userName[userCount];
    gotoxy(45, 15);
    cout << "2. User Password: ";
    cin >> userPassword[userCount];
    gotoxy(45, 16);
    cout << "3. Role (Boss, Manager, Employee): ";
    cin >> roll[userCount];
    userCount++;
    signCheck(userCount);
    system("cls");
    loginPage();
}
void signCheck(int userCount)
{
    int a = 0;
    if (userCount > 1)
    {
        for (int x = 0; x < (userCount - 1); x++)
        {
            if (userName[x] == userName[x + 1] && userPassword[x] == userPassword[x + 1])
            {
                a = 1;
            }
            else if (userName[x] != userName[x + 1] || userPassword[x] != userPassword[x + 1])
            {
                a = 0;
            }
        }
        if (a == 1)
        {
            cout << "Warning! Alread Exist." << endl;
            userCount--;
            system("pause");
        }
        if (a == 0)
        {
            cout << "Sign Up Successfully!" << endl;
            system("pause");
        }
    }
}
void exit()
{
    cout << "Have a nice day ";
    getch();
}
void addEmployee()
{

    cout << "Enter Employee Name: ";
    cin >> employeeName[studentCount];
    cout << "Enter Employee Id: ";
    cin >> employeeId[studentCount];
    cout << "Enter Employee Salary: ";
    cin >> employeeSalary[studentCount];
    studentCount++;
    validationCheck(studentCount);
    system("cls");
}
void displayEmployee()
{
    if(studentCount>0)
    {
    for (int x = 0; x < studentCount; x++)
    {
        cout << "Employee Name: " << employeeName[x] << endl;
        cout << "Employee Id: " << employeeId[x] << endl;
        cout << "Employee Salary: " << employeeSalary[x] << endl;
        cout << endl;
    }
    }
    else
    cout<<"No Employee to display.";
    system("pause");
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void managerlogo()
{
    gotoxy(8, 12);
    cout << "     __  ___                  ______          " << endl;
    gotoxy(8, 13);
    cout << "    /  |/  /___ _____  ____ _/ ____/__  _____" << endl;
    gotoxy(8, 14);
    cout << "   / /|_/ / __ `/ __ \\/ __ `/ / __/ _ \\/ ___/" << endl;
    gotoxy(8, 15);
    cout << "  / /  / / /_/ / / / / /_/ / /_/ /  __/ /    " << endl;
    gotoxy(8, 16);
    cout << " /_/  /_/\\__,_/_/ /_/\\__,_/\\____/\\___/_/     " << endl;
}
void validationCheck(int studentCount)
{
    int b = 0;
    if (studentCount > 1)
    {
        for (int l = 0; l < (studentCount - 1); l++)
        {
            if (employeeId[l] == employeeId[l + 1])
            {
                b = 1;
            }
            else if (employeeId[l] != employeeId[l + 1])
            {
                b = 0;
            }
        }
        if (b == 1)
        {
            cout << "Warning! Employee Id Already exist." << endl;
            studentCount--;
            system("pause");
        }
        if (b == 0)
        {
            cout << "Employee Added Successfully" << endl;
            system("pause");
        }
    }
}
void averageSalary()
{
    float sum = 0;
    float average;

    for (int l = 0; l < studentCount; l++)
    {
        sum += stof(employeeSalary[l]);
    }
    if (studentCount > 0)
    {
        average = sum / studentCount;
        cout << "Average Salary: " << average << endl;
    }
    else
    {
        cout << "No employees to calculate average salary." << endl;
    }
    system("pause");
}
void increaseSalary()
{
    string targetId;
    int increasePercentage;

    cout << "Enter Employee ID to check and increase salary: ";
    cin >> targetId;

    bool employeeFound = false;

    for (int i = 0; i < studentCount; i++)
    {
        if (employeeId[i] == targetId)
        {
            employeeFound = true;
            float currentSalary = stof(employeeSalary[i]);
            cout << "Employee ID: " << employeeId[i] << endl;
            cout << "Current Salary: " << currentSalary << endl;
            cout << "Enter the percentage increase for salary: ";
            cin >> increasePercentage;
            int yearsWorkedInt = stoi(yearsWorked[i]);
            if (yearsWorkedInt >= 5)
            {
                float increaseAmount = (currentSalary * increasePercentage) / 100;
                float newSalary = currentSalary + increaseAmount;
                employeeSalary[i] = to_string(newSalary);

                cout << "Salary increased to: " << newSalary << endl;
            }
            else
            {
                cout << "No salary increase as the employee has not worked for the required number of years." << endl;
            }
        }
        system("pause");
    }
    if (!employeeFound)
    {
        cout << "Employee with ID " << targetId << " not found." << endl;
    }
}
void employeeInfo()
{
    string id;
    cout << "Enter Employee ID: ";
    cin >> id;
    int a=0;

    for (int i = 0; i < studentCount; ++i)
    {
        if (employeeId[i] == id)
        {
            cout << "\nEmployee Name: " << employeeName[i] << endl;
            continue;
        }
        else
            cout << "Employee with ID " << employeeId << " not found." << endl;
    }
    cout << "Enter Employee Department: ";
    cin >> employeeDepartment[dcount];
    cout << "Enter number of years: ";
    cin >> yearsWorked[dcount];
}
void welcome()
{
    gotoxy(45, 30);
    cout << "  _       __     __                         " << endl;
    gotoxy(45, 31);
    cout << " | |     / /__  / /________  ____ ___  ___ " << endl;
    gotoxy(45, 32);
    cout << " | | /| / / _ \\/ / ___/ __ \\/ __ `__ \\/ _ " << endl;
    gotoxy(45, 33);
    cout << " | |/ |/ /  __/ / /__/ /_/ / / / / / /  __/" << endl;
    gotoxy(45, 34);
    cout << " |__/|__/\\___/_/\\___/\\____/_/ /_/ /_/\\___/ " << endl;
}
void checkTask()
{
    string id;
    cout << "Enter Employee ID: ";
    cin >> id;

    for (int i = 0; i < studentCount; ++i)
    {
        if (employeeId[i] == id)
        {
            cout << "\nEmployee Name: " << employeeName[i] << endl;
        }
        else
            cout << "Employee with ID " << employeeId << " not found." << endl;
    }
    int task;
    cout << "Have you done tasks(1=Yes,0=No)?" << endl;
    cin >> task;
    if (task == 1)
        cout << "Task done successfully";
    if (task == 0)
        cout << "Warning!";
}
void bossLogo()
{
    gotoxy(8, 12);
    cout << "    ____                    " << endl;
    gotoxy(8, 13);
    cout << "   / __ )____  __________   " << endl;
    gotoxy(8, 14);
    cout << "  / __  / __ \\/ ___/ ___/  " << endl;
    gotoxy(8, 15);
    cout << " / /_/ / /_/ (__  |__  )    " << endl;
    gotoxy(8, 16);
    cout << "/_____/\\____/____/____/    " << endl;
}
void totalSalary()
{
     float sum = 0;
    float total;

    for (int l = 0; l < studentCount; l++)
    {
        sum += stof(employeeSalary[l]);
    }
    if (studentCount > 0)
    {
        total = sum;
        cout << "Total Salary: " << total << endl;
    }
    else
    {
        cout << "No employees to calculate Total salary." << endl;
    }
    system("pause");
}
void giveBonus()
{
    {
    string id;
    cout << "Enter Employee ID to check and give bonus: ";
    cin >> id;
    cout<<"Task Status (1 for Yes and 0 for No ): ";
    cin>>taskCompleted[studentCount];

    bool employeeFound = false;

    for (int i = 0; i < studentCount; i++)
    {
        if (employeeId[i] == id)
        {
            employeeFound = true;
            int taskCom = stoi(taskCompleted[i]);
            if (taskCom == 1)
            {
                // Bonus for completing tasks
                float currentSalary = stof(employeeSalary[i]);
                float bonusAmount = 0.1 * currentSalary;  // 10% bonus
                float newSalary = currentSalary + bonusAmount;
                employeeSalary[i] = to_string(newSalary);

                cout << "Bonus given successfully. New salary: " << newSalary << endl;
            }
            else
            {
                cout << "No bonus given as the employee has not completed tasks." << endl;
            }
        }
    }

    if (!employeeFound)
    {
        cout << "Employee with ID " << id << " not found." << endl;
    }

    system("pause");
}
}