// Railway ticket booking system
#include <iostream>
#include <string>
using namespace std;

class User
{
public:
    string username;
    string password;
};

class Passenger
{
public:
    int id;
    string name;
    int age;
    string status;
};

class RailwaySystem
{
private:
    Passenger passengers[5];
    int total;

    int confirmedCount;
    int racCount;
    int waitingCount;

public:
    RailwaySystem()
    {
        total = 0;
        confirmedCount = 0;
        racCount = 0;
        waitingCount = 0;
    }

    void bookTicket()
    {
        if (total == 5)
        {
            cout << "\nNo Tickets Available!\n";
            return;
        }

        Passenger p;

        cout << "\nEnter Passenger ID: ";
        cin >> p.id;

        cout << "Enter Name: ";
        cin >> p.name;

        cout << "Enter Age: ";
        cin >> p.age;

        if (confirmedCount < 2)
        {
            p.status = "Confirmed";
            confirmedCount++;
        }
        else if (racCount < 1)
        {
            p.status = "RAC";
            racCount++;
        }
        else if (waitingCount < 2)
        {
            p.status = "Waiting";
            waitingCount++;
        }

        passengers[total++] = p;

        cout << "\nTicket Booked Successfully!\n";
        cout << "Status: " << p.status << endl;
    }

    void cancelTicket(int id)
    {
        int index = -1;

        for (int i = 0; i < total; i++)
        {
            if (passengers[i].id == id)
            {
                index = i;
                break;
            }
        }

        if (index == -1)
        {
            cout << "\nPassenger Not Found!\n";
            return;
        }

        string cancelledStatus = passengers[index].status;

        for (int i = index; i < total - 1; i++)
        {
            passengers[i] = passengers[i + 1];
        }

        total--;

        confirmedCount = 0;
        racCount = 0;
        waitingCount = 0;

        for (int i = 0; i < total; i++)
        {
            if (i < 2)
            {
                passengers[i].status = "Confirmed";
                confirmedCount++;
            }
            else if (i < 3)
            {
                passengers[i].status = "RAC";
                racCount++;
            }
            else
            {
                passengers[i].status = "Waiting";
                waitingCount++;
            }
        }

        cout << "\nTicket Cancelled Successfully!\n";
    }

    void displayTickets()
    {
        if (total == 0)
        {
            cout << "\nNo Bookings Found!\n";
            return;
        }

        cout << "\n==============================\n";

        for (int i = 0; i < total; i++)
        {
            cout << "Passenger ID : " << passengers[i].id << endl;
            cout << "Name         : " << passengers[i].name << endl;
            cout << "Age          : " << passengers[i].age << endl;
            cout << "Status       : " << passengers[i].status << endl;
            cout << "------------------------------\n";
        }
    }
};

int main()
{
    User users[10];
    int userCount = 0;

    RailwaySystem railway;

    int choice;

    while (true)
    {
        cout << "\n===== Railway Reservation System =====\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "\nEnter Username: ";
            cin >> users[userCount].username;

            cout << "Enter Password: ";
            cin >> users[userCount].password;

            userCount++;

            cout << "\nRegistration Successful!\n";
        }
        else if (choice == 2)
        {
            string uname, pass;

            cout << "\nEnter Username: ";
            cin >> uname;

            cout << "Enter Password: ";
            cin >> pass;

            bool found = false;

            for (int i = 0; i < userCount; i++)
            {
                if (users[i].username == uname &&
                    users[i].password == pass)
                {
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "\nInvalid Credentials!\n";
                continue;
            }

            cout << "\nLogin Successful!\n";

            int ch;

            do
            {
                cout << "\n===== User Menu =====\n";
                cout << "1. Book Ticket\n";
                cout << "2. Cancel Ticket\n";
                cout << "3. View Tickets\n";
                cout << "4. Logout\n";
                cout << "Enter Choice: ";
                cin >> ch;

                switch (ch)
                {
                case 1:
                    railway.bookTicket();
                    break;

                case 2:
                {
                    int id;
                    cout << "\nEnter Passenger ID to Cancel: ";
                    cin >> id;

                    railway.cancelTicket(id);
                    break;
                }

                case 3:
                    railway.displayTickets();
                    break;

                case 4:
                    cout << "\nLogged Out Successfully!\n";
                    break;

                default:
                    cout << "\nInvalid Choice!\n";
                }

            } while (ch != 4);
        }
        else if (choice == 3)
        {
            cout << "\nThank You!\n";
            break;
        }
        else
        {
            cout << "\nInvalid Choice!\n";
        }
    }

    return 0;
}