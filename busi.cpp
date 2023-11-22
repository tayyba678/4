#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cmath>
using namespace std;
string signIn(string name, string password, string userName[], string userPassword[], string userRole[], int userCount);
bool signUpMe(string name, string password, string role, string userName[], string userPassword[], string userRole[], int &usersCount, int arrsize);
void printHeader();
void welcome();
int loginPage();
void logIn();
void signUp();
void bossLogo();
int manager(string roll);
int boss(string roll);

bool addEmployee(string namE, string id, string dp, string salary, string employeeName[], string employeeId[], string employeeDepartment[], string employeeSalary[], int &studentCount, int arrSize);
void displayEmployee(string employeeName[], string employeeId[], string employeeDepartment[], int studentCount);
void employeeInfo(string employeeId[], string employeeDepartment[], int studentCount);
void averageSalary(string employeeSalary[], int studentCount);
void increaseSalary(string employeeId[], string employeeSalary[], int studentCount);
void checkTask(string employeeId[], string employeeName[], int studentCount);
void totalSalary(string employeeSalary[], int studentCount);
void giveBonus(string employeeId[], string employeeSalary[], string employeeName[], int studentCount);
void managerlogo();
void exitP();
void gotoxy(int x, int y);
int main()
{
    const int arrsize = 100;
    string userName[arrsize];
    string userPassword[arrsize];
    string userRole[arrsize];
    int userCount = 0;
    int loginOption = 0;
    while (loginOption != 3)
    {
        system("cls");
        loginOption = loginPage();
        if (loginOption == 1)
        {
            {
                system("cls");
                string name;
                string password;
                string role;
                printHeader();
                logIn();
                gotoxy(45, 15);
                cout << "Enter your Name: " << endl;
                cin >> name;
                gotoxy(45, 16);
                cout << "Enter your Password: " << endl;
                cin >> password;
                role = signIn(name, password, userName, userPassword, userRole, userCount);
                if (role != "Not found")
                {
                    if (role == "manager" || role == "Manager")
                        manager(role);
                    if (role == "boss" || role == "Boss")
                        boss(role);
                }
                else
                {
                    cout << "User not found. Please try again." << endl;
                }
            }
        }
        if (loginOption == 2)
        {
            system("cls");
            string name;
            string password;
            string role;
            printHeader();
            signUp();
            gotoxy(45, 15);
            cout << "1. User name: ";
            cin >> name;
            gotoxy(45, 16);
            cout << "2. User Password: ";
            cin >> password;
            gotoxy(45, 17);
            cout << "3. Role (Boss, Manager, Employee): ";
            cin >> role;
            bool isValid = signUpMe(name, password, role, userName, userPassword, userRole, userCount, arrsize);
            system("cls");
            loginPage();
        }
    }
      if(loginOption==3)
        {
            exitP();
        }
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
int loginPage()
{
    int op;
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
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
int manager(string roll)
{
    const int arrSize = 100;
    int studentCount = 0;
    string employeeName[arrSize];
    string employeeId[arrSize];
    string employeeDepartment[arrSize];
    string employeeSalary[arrSize];
    string yearsWorked[arrSize];
    string namE, id, dp, salary;
    int select1;
    system("cls");
    printHeader();
    {
        managerlogo();
        {
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
            cout << "Enter your choice(1-6): ";
            cin >> select1;
            gotoxy(40, 27);
            while (select1 > 7)
            {
                cout << "Invalid choice. Please enter a number from 1 to 6: ";
                cin >> select1;
            }
            if (select1 == 1)
            {
                system("cls");
                printHeader();
                managerlogo();
                cout << "Enter Employee Name: ";
                cin >> namE;
                cout << "Enter Employee Id: ";
                cin >> id;
                cout << "Enter Employee Department: ";
                cin >> dp;
                cout << "Enter Employee Salary: ";
                cin >> salary;
                bool isValid = addEmployee(namE, id, dp, salary, employeeName, employeeId, employeeDepartment, employeeSalary, studentCount, arrSize);
                if (isValid)
                {
                    cout << "Employee added successfully." << endl;
                }
                if (!isValid)
                {
                    cout << "Warning! Employee already exist." << endl;
                }
                system("cls");
                manager("manager");
            }
            if (select1 == 2)
            {
                system("cls");
                printHeader();
                managerlogo();
                displayEmployee(employeeName, employeeId, employeeDepartment, studentCount);
                system("cls");
                manager("manager");
            }
            if (select1 == 3)
            {
                system("cls");
                printHeader();
                managerlogo();
                employeeInfo(employeeId, employeeDepartment, studentCount);
                system("cls");
                manager("manager");
            }
            if (select1 == 4)
            {
                system("cls");
                printHeader();
                managerlogo();
                averageSalary(employeeSalary, studentCount);
                system("cls");
                manager("manager");
            }
            if (select1 == 5)
            {
                system("cls");
                printHeader();
                managerlogo();
                increaseSalary(employeeId, employeeSalary, studentCount);
                system("cls");
                manager("manager");
            }
            if (select1 == 6)
            {
                system("cls");
                printHeader();
                managerlogo();
                checkTask(employeeId, employeeName, studentCount);
                system("cls");
                manager("manager");
            }
            if (select1 == 7)
            {
                system("cls");
                printHeader();
                managerlogo();
                exitP();
                system("cls");
                manager("manager");
            }
        }
    }
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
}
bool signUpMe(string name, string password, string role, string userName[], string userPassword[], string userRole[], int &userCount, int arrsize)
{
    bool isPresent = false;

    for (int index = 0; index < userCount; index++)
    {
        if (userName[index] == name && userPassword[index] == password)
        {
            isPresent = true;
            break;
        }
    }
    if (isPresent == true)
    {
        return 0;
    }
    else if (userCount < arrsize)
    {
        userName[userCount] = name;
        userPassword[userCount] = password;
        userRole[userCount] = role;
        userCount++;
        return true;
    }
    else
    {
        return false;
    }
}
string signIn(string name, string password, string userName[], string userPassword[], string userRole[], int userCount)
{
    for (int index = 0; index < userCount; index++)
    {
        if (userName[index] == name && userPassword[index] == password)
        {
            return userRole[index];
        }
    }
    return "Not Found";
}
int boss(string roll)
{
    system("cls");
    printHeader();
    const int arrSize = 100;
    int studentCount = 0;
    string employeeName[arrSize];
    string employeeId[arrSize];
    string employeeDepartment[arrSize];
    string employeeSalary[arrSize];
    string yearsWorked[arrSize];
    string namE, id, dp, salary;
    int select2;
    {
        bossLogo();
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
        cout << "Enter your choice: ";
        cin >> select2;
        while (select2 > 7)
        {
            cout << "Invalid choice. Please enter a number from 1 to 6: ";
            cin >> select2;
        }
        if (select2 == 1)
        {
            system("cls");
            printHeader();
            bossLogo();
            displayEmployee(employeeName, employeeId, employeeDepartment, studentCount);
            system("cls");
            boss("boss");
        }
        if (select2 == 2)
        {
            system("cls");
            printHeader();
            bossLogo();
            totalSalary(employeeSalary, studentCount);
            system("cls");
            boss("boss");
        }
        if (select2 == 3)
        {
            system("cls");
            printHeader();
            bossLogo();
            averageSalary(employeeSalary, studentCount);
            system("cls");
            boss("boss");
        }
        if (select2 == 4)
        {
            system("cls");
            printHeader();
            bossLogo();
            giveBonus(employeeId, employeeSalary, employeeName, studentCount);
            system("cls");
            boss("boss");
        }
    }
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
bool addEmployee(string namE, string id, string dp, string salary, string employeeName[], string employeeId[], string employeeDepartment[], string employeeSalary[], int &studentCount, int arrSize)

{
    bool isPresent = false;

    for (int index = 0; index < studentCount; index++)
    {
        if (employeeName[index] == namE && employeeId[index] == id)
        {
            isPresent = true;
            break;
        }
    }
    if (isPresent == true)
    {
        return 0;
    }
    else if (studentCount < arrSize)
    {
        employeeName[studentCount] = namE;
        employeeId[studentCount] = id;
        employeeDepartment[studentCount] = dp;
        employeeSalary[studentCount] = salary;
        studentCount++;
        return true;
    }
    else
    {
        cout << "Employee Limit exceeded.";
        return false;
    }
}
void displayEmployee(string employeeName[], string employeeId[], string employeeDepartment[], int studentCount)
{
    if (studentCount > 0)
    {
        for (int x = 0; x < studentCount; x++)
        {
            cout << "Employee Name: " << employeeName[x] << endl;
            cout << "Employee Id: " << employeeId[x] << endl;
            cout << "Employee Department: " << employeeDepartment[x] << endl;
            cout << endl;
        }
    }
    else
        cout << "No Employee to display.";
    system("pause");
}
void employeeInfo(string employeeId[], string employeeDepartment[], int studentCount)
{
    string yearsWorked[100];
    string employee;
    string id;
    cout << "Enter Employee ID: ";
    cin >> id;
    for (int i = 0; i < studentCount; ++i)
    {
        if (employeeId[i] == id)
        {
            cout << "\nEmployee Department: " << employeeDepartment[i] << endl;
            cout << "Enter number of years: ";
            cin >> yearsWorked[i];
        }
        else
            cout << "Employee with ID " << employeeId << " not found." << endl;
    }
}
void averageSalary(string employeeSalary[], int studentCount)
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
void increaseSalary(string employeeId[], string employeeSalary[], int studentCount)
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
            cout << "Enter the joining year: ";
            string year;
            cin >> year;
            float years = stof(year);
            years = 2023 - years;
            if (years >= 5)
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
}
void checkTask(string employeeId[], string employeeName[], int studentCount)
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
void exitP()
{
    cout << "Have a nice day ";
    getch();
}
void totalSalary(string employeeSalary[], int studentCount)
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
void giveBonus(string employeeId[], string employeeSalary[], string employeeName[], int studentCount)
{
    {
        string taskCompleted;
        string id;
        cout << "Enter Employee ID to check and give bonus: ";
        cin >> id;

        bool employeeFound = false;

        for (int i = 0; i < studentCount; i++)
        {
            if (employeeId[i] == id)
            {
                employeeFound = true;
                cout << "Is Employee " << employeeName[i] << " completed tasks (1 for Yes and 0 for No ): ";
                cin >> taskCompleted;
                int taskCom = stoi(taskCompleted);
                if (taskCom == 1)
                {
                    // Bonus for completing tasks
                    float currentSalary = stof(employeeSalary[i]);
                    float bonusAmount = 0.1 * currentSalary; // 10% bonus
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