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
int employee(string roll);
bool addEmployee(string namE, string id, string dp, string employeeName[], string employeeId[], string employeeDepartment[], int &studentCount, int arrSize);
void displayEmployee(string employeeName[], string employeeId[], string employeeDepartment[], int studentCount);
void managerlogo();
void gotoxy(int x, int y);
int main()
{
    const int arrsize=100;
    string userName[arrsize];
    string userPassword[arrsize];
    string userRole[arrsize];
    int userCount = 0;
int loginOption=0;
while (loginOption != 3)
    {
        printHeader();
        welcome();
       int log=loginPage();
       if(log==1)
       {
            {
            system("cls");

            string name;
            string password;
            string role;
            printHeader();
            logIn();
             cout << "Enter your Name: " << endl;
            cin >> name;
            cout << "Enter your Password: " << endl;
            cin >> password;
            role = signIn(name, password, userName, userPassword, userRole, userCount);
   if (role != "Not found")
    {
        if (role == "manager" || role == "Manager")
            manager(role);
        if (role == "boss" || role == "Boss")
            boss(role);
        if (role == "employee" || role == "Employee")
            employee(role);
    }
    else
    {
        cout << "User not found. Please try again." << endl;
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
            cout << "1. User name: ";
    cin >> userName[userCount];
    gotoxy(45, 15);
    cout << "2. User Password: ";
    cin >> userPassword[userCount];
    gotoxy(45, 16);
    cout << "3. Role (Boss, Manager, Employee): ";
    cin >> userRole[userCount];
    bool isValid = signUpMe(name, password, role, userName, userPassword, userRole, userCount, arrsize);
    system("cls");
    loginPage();
}
}
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
   const int arrSize=100; 
    int studentCount = 0;
    string employeeName[arrSize];
string employeeId[arrSize];
string employeeDepartment[arrSize];
string namE,id,dp;
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
         cout << "Enter your choice(1-6): ";
            cin >> select1;
            gotoxy(40, 27);
            cout << "Enter your choice: ";
            cin >> select1;
             while (select1 > 6) {
        cout << "Invalid choice. Please enter a number from 1 to 6: ";
        cin >> select1;
            if (select1 == 1)
            {
                system("cls");
                printHeader();
                managerlogo();
                cout << "Enter Employee Name: ";
    cin >> namE;
    cout << "Enter Employee Id: ";
    cin >> id;
    cout << "Enter Employee Salary: ";
    cin >> dp;
              bool isValid=  addEmployee(namE,id,dp,employeeName,employeeId,employeeDepartment,studentCount,arrSize);
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
                displayEmployee(employeeName,employeeId,employeeDepartment,studentCount);
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
    return "undefined";
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
        cout << "Enter your choice: ";
            cin >> select2;
             while (select2 > 6) {
        cout << "Invalid choice. Please enter a number from 1 to 6: ";
        cin >> select2;
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
bool addEmployee(string namE, string id, string dp, string employeeName[], string employeeId[], string employeeDepartment[], int &studentCount, int arrSize)

{
   bool isPresent = false;

    for (int index = 0; index < studentCount; index++)
    {
        if (employeeName[index] == namE && employeeId[index]==id)
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
        studentCount++;
        return true;
    }
    else
    {
        cout<<"Employee Limit exceeded.";
        return false;
    }
}
void displayEmployee(string employeeName[], string employeeId[], string employeeDepartment[], int studentCount)
{
    if(studentCount>0)
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
    cout<<"No Employee to display.";
    system("pause");
}