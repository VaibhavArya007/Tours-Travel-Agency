#include <iostream>
#include <fstream>
#include <iomanip>
#include <windows.h>
#include <string.h>

using namespace std;
void home();

class cab
{
public:
    int choicecab, cabchoosed, kms;
    double costcab;
    static double lastcabcost;

    void cabdet()
    {
        cout << "We provide you with the fastest,smartest and the safest rides around the whole country" << endl
             << endl;
        cout << "------------------Technia Cabs------------------\n"
             << endl;
        cout << "1. Standard Cab Price - Rs. 20 per Kilometer" << endl;
        cout << "2. Luxury Cab Price - Rs. 30 per Kilometer" << endl;

        cout << "\nTo know the price of your journey \nEnter the type of cab you want ";
        cin >> choicecab;
        cout << "Enter the kilometers you will travel ";
        cin >> kms;

        if (choicecab == 1)
        {
            costcab = kms * 20;
            cout << "\nThe cost of your tour is: " << costcab << " rupess" << endl;
            cout << "Enter 1 to book this cab or Enter 2 to select another cab: ";
            cin >> cabchoosed;

            system("CLS");

            if (cabchoosed == 1)
            {
                lastcabcost = costcab;
                cout << "\nSuccessfully Booked" << endl;
                cout << "GoTo Menu! & Print Receipt" << endl;
            }
            else if (cabchoosed == 2)
            {
                cabdet();
            }
            else
            {
                cout << "Enter valid choice!! Redirecting........\n";
                Sleep(1000);
                system("CLS");
                cabdet();
            }
        }

        else if (choicecab == 2)
        {

            costcab = kms * 30;
            cout << "\nThe cost of your tour is: " << costcab << " rupess" << endl;
            cout << "Enter 1 to book this cab or Enter 2 to select another cab: ";
            cin >> cabchoosed;

            system("CLS");

            if (cabchoosed == 1)
            {
                lastcabcost = costcab;
                cout << "\nSuccessfully Booked" << endl;
                cout << "GoTo Menu! & Print Receipt" << endl;
            }
            else if (cabchoosed == 2)
            {
                cabdet();
            }
            else
            {
                cout << "Enter valid choice!! Redirecting........\n";
                Sleep(1000);
                system("CLS");
                cabdet();
            }
        }
        else
        {
            cout << "Enter valid choice!! Redirecting........\n";
            Sleep(1000);
            system("CLS");
            home();
        }

        cout << "\nPress 1 for Main Menu: ";
        cin >> cabchoosed;
        system("CLS");
        if (cabchoosed == 1)
        {
            home();
        }
    }
};
double cab::lastcabcost;

class homeManage
{
protected:
    string username;
    string password;
    string pass = "USER101";

public:
    homeManage()
    {
        cout << "\n\n\n\n\n\n\n\n\n\t Enter Your Admnin Name to Continue: ";
        cin >> username;
        cout << endl;
        cout << "\t Enter your password: ";
        cin >> password;
        system("CLS");
        if (pass == password)
        {
            home();
        }
        else
        {
            cout << "Invalid Password or Admin Name";
        }
    }
    ~homeManage()
    {
    }
};
class booking
{
public:
    int hotelchoice, package, gtm;
    static double hotelcost;

    void hotel()
    {
        string hotelname[] = {"Radisson", "Taj Group", "Clarks", "Ramada", "Hayat"};
        for (int i = 0; i < 5; i++)
        {
            cout << (i + 1) << ". " << hotelname[i] << " Hotel" << endl;
        }
        cout << "\nOur Current Hotel Partners are listed above!" << endl;
        cout << "Press the key to enter the number of hotel you want to book: ";
        cin >> hotelchoice;
        system("CLS");

        if (hotelchoice >= 1 && hotelchoice <= 5)
        {
            string hotelName;
            double standardPrice = 6000.00;
            double premiumPrice = 8000.00;
            double luxuryPrice = 10000.00;

            switch (hotelchoice)
            {
            case 1:
                hotelName = "HOTEL RADISSON";
                break;
            case 2:
                hotelName = "TAJ GROUPS";
                break;
            case 3:
                hotelName = "HOTEL CLARK";
                break;
            case 4:
                hotelName = "HOTEL RAMADA";
                break;
            case 5:
                hotelName = "HOTEL HAYAT";
                break;
            default:
                break;
            }

            cout << "................. WELCOME TO " << hotelName << " .................\n\n"
                 << endl;
            cout << "We provide you with excellent features of food, beverages, garden, music & dance. Stay Cool & Enjoy your holidays!\n"
                 << endl;
            cout << "Packages Offered by us:\n"
                 << endl;
            cout << "1. Standard Package" << endl;
            cout << "All the basic facilities you need at the cost of: Rs-6000/day" << endl;
            cout << "2. Premium Package" << endl;
            cout << "All the basic facilities you need & Swimming Pool with Gym at the cost of: Rs-8000/day" << endl;
            cout << "3. Luxury Package" << endl;
            cout << "All the basic facilities you need with Swimming Pool, Gym, Club & Lounge at the cost of: Rs-10000/day\n"
                 << endl;

            cout << "Enter the choice of package you want to select: ";
            cin >> hotelchoice;

            switch (hotelchoice)
            {
            case 1:
                hotelcost = standardPrice;
                cout << "\nYou have successfully booked the standard pack at the hotel!" << endl;
                break;
            case 2:
                hotelcost = premiumPrice;
                cout << "\nYou have successfully booked the premium pack at the hotel!" << endl;
                break;
            case 3:
                hotelcost = luxuryPrice;
                cout << "\nYou have successfully booked the luxury pack at the hotel!" << endl;
                break;
            default:
                cout << "INVALID INPUT! Redirecting........" << endl;
                Sleep(1000);
                system("CLS");
                hotel();
                return;
            }

            cout << "Return to menu and take receipt" << endl;
            cout << "Press 0 to return to the menu: ";
            cin >> gtm;

            if (gtm == 0)
            {
                system("CLS");
                home();
            }
        }
        else
        {
            cout << "Enter a valid choice!! Redirecting........" << endl;
            Sleep(1000);
            system("CLS");
            home();
        }
    }
};
double booking::hotelcost;

class customer
{
public:
    string name, gender, add;
    long long int mob;
    int age;
    static int custid;
    long long int aadhar;
    char oop[1000];

    void getdet()
    {
        ofstream out("customers.txt", ios::app);
        {
            cout << "Enter Customer Id: ";
            cin >> custid;
            cout << "Enter Customer Name: ";
            cin >> name;
            cout << "Enter Customer Age: ";
            cin >> age;
            cout << "Enter Customer Gender: ";
            cin >> gender;
            cout << "Enter Customer Address: ";
            cin >> add;
            cout << "Enter Customer Mobile Number: ";
            cin >> mob;
            cout << "Enter Customer Aadhar Number: ";
            cin >> aadhar;
        }
        out << "\nCustomer ID: " << custid << "\nName: " << name << "\nAge: " << age << "\nGender: " << gender << "\nAddress: " << add << "\nMobile Number: " << mob << "\nAadhar Number: " << endl;
        out.close();
        cout << "\nData Saved \nNOTE: Your Record has been saved for future use\n"
             << endl;
    }

    void clearFileContent()
    {
        ofstream out("customers.txt", ios::trunc);
        out.close();
        cout << "File content cleared." << endl;
    }

    void displaydetails()
    {
        ifstream in("customers.txt");
        {
            if (!in)
            {
                cout << "File Not Found" << endl;
            }
            while (!(in.eof()))
            {
                in.getline(oop, 1000);
                cout << oop << endl;
            }
            in.close();
        }
    }
};
int customer::custid;

class charge : public cab, booking, customer
{
public:
    void billprint()
    {
        ofstream outf("receipt.txt");
        {
            outf << "............Transitioning Travel Agency............" << endl;
            outf << "...................BILL RECEIPT...................." << endl;
            outf << "___________________________________________________" << endl
                 << endl;
            outf << "Customer ID: " << customer::custid << endl
                 << endl;
            outf << "Description\t\t Total" << endl
                 << endl;
            outf << "Hotel Cost:\t\t " << fixed << setprecision(2) << booking::hotelcost << endl;
            outf << "Cab Cost:\t\t " << fixed << setprecision(2) << cab::lastcabcost << endl;
            outf << "___________________________________________________" << endl
                 << endl;
            outf << "Total Cost:\t\t " << fixed << setprecision(2) << booking::hotelcost + cab::lastcabcost << endl;
            outf << "___________________________________________________" << endl
                 << endl;
            outf << ".....................THANK YOU....................." << endl;
            outf << "------------------HAVE A GOOD DAY------------------" << endl;
        }
        outf.close();
    }

    void showbill()
    {
        ifstream inf("receipt.txt");
        {
            if (!inf)
            {
                cout << "ERROR IN THE SYSTEM!" << endl;
            }
            while (!(inf.eof()))
            {
                inf.getline(oop, 1000);
                cout << oop << endl;
            }
        }
        inf.close();
    }
};

void home()
{
    int choicehome;
    int opt;
    int go;
    cout << "------------------THE TRAVELLING AGENCY------------------" << endl;
    cout << "_________________________________________________________" << endl;
    cout << "                        MAIN MENU                        " << endl;
    cout << "........................................................." << endl;
    cout << "|\t                  \t\t\t\t|" << endl;
    cout << "|\t-Customer Management -> 1\t\t\t|" << endl;
    cout << "|\t-Cabs Management -> 2\t\t\t\t|" << endl;
    cout << "|\t-Bookings Management -> 3\t\t\t|" << endl;
    cout << "|\t-Bill & Receipt Management -> 4\t\t\t|" << endl;
    cout << "|\t-Exit System -> 5\t\t\t\t|" << endl;
    cout << "|\t                  \t\t\t\t|" << endl;
    cout << "---------------------------------------------------------" << endl;

    cout << "\nChoose An Option: ";
    cin >> choicehome;
    system("CLS");
    customer x;
    cab y;
    booking z;
    charge c;

    if (choicehome == 1)
    {
        cout << "----------CUSTOMER OPTIONS----------\n"
             << endl;
        cout << "1. Enter New Customer" << endl;
        cout << "2. Look For An Old Customer" << endl;
        cout << "3. Remove All The Previous Entries" << endl;
        cout << "\nChoose an option: ";
        cin >> opt;

        system("CLS");
        if (opt == 1)
        {
            x.getdet();
        }
        else if (opt == 2)
        {
            x.displaydetails();
        }
        else if (opt == 3)
        {
            x.clearFileContent();
        }
        else
        {
            cout << "Enter valid choice!! Redirecting........\n";
            Sleep(1000);
            system("CLS");
            home();
        }
        cout << "\nPress 1 to go to main menu: ";
        cin >> go;
        system("CLS");
        if (go == 1)
        {
            home();
        }
    }
    else if (choicehome == 2)
    {
        y.cabdet();
    }
    else if (choicehome == 3)
    {
        cout << "---> BOOK A HOTEL NOW!!" << endl;
        z.hotel();
    }
    else if (choicehome == 4)
    {
        cout << "---> TAKE YOUR BILL & RECEIPT" << endl;
        c.billprint();
        cout << "Your receipt is ready in the file\n"
             << endl;
        cout << "To show to bill here press: 1 " << endl;
        cout << "To go back to the home page press: 0 " << endl;
        cin >> go;
        if (go == 1)
        {
            system("CLS");
            c.showbill();
            cout << "Press 0 to go to main menu: " << endl;
            cin >> go;
            system("CLS");
            if (go == 0)
            {
                home();
            }
            else
            {
                home();
            }
        }
        else
        {
            system("CLS");
            home();
        }
    }
    else if (choicehome == 5)
    {
        cout << "-----THANK YOU-----" << endl;
        Sleep(1000);
        system("CLS");
        home();
    }
    else
    {
        cout << "Enter valid choice!! Redirecting........\n";
        Sleep(1000);
        system("CLS");
        home();
    }
}

int main()
{
    homeManage run;
    return 0;
}
