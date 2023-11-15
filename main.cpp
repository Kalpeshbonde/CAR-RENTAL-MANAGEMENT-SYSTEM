#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Class representing a customer
class customer {
private:
public:
    string customername;
    string carmodel;
    string carnumber;
    char data;
    // variables defined in this class in public mode.
};

// Class representing rental information, inheriting from the customer class
class rent : public customer {
public:
    int days=0,rentalfee=0; // additional int variables defined

    // Function to get data from the user
    void data() {
        int login();
        login();

        cout << "\t\t\t\tPlease Enter your Name: "; // taking data from the user
        cin >> customername;
        cout << endl;

        {
            cout << "\t\t\t\tPlease Select a Car" << endl; // giving the user a choice to select among three different models
            cout << "\t\t\t\tEnter 'A' for Hatchback " << endl;
            cout << "\t\t\t\tEnter 'B' for Sedan " << endl;
            cout << "\t\t\t\tEnter 'C' for SUV" << endl;
            cout << endl;
            cout << "\t\t\t\tChoose a Car from the above options: ";
            cin >> carmodel;
            cout << endl;
            cout << "--------------------------------------------------------------------------" << endl;

            if(carmodel == "A") {
                // Display details of model A
                system("CLS");
                cout << "You have chosen Hatchback model" << endl;
                ifstream inA("A.txt");
                char str[200];
                while(inA) {
                    inA.getline(str, 200);
                    if(inA) cout << str << endl;
                }
            }
            // Similar blocks for model B and C
            // ...
            
            if(carmodel != "A" && carmodel != "B" && carmodel != "C" )
                cout << "Invalid Car Model. Please try again!" << endl;
        }

        while(carmodel != "A" && carmodel != "B" && carmodel != "C");
        
        cout << "--------------------------------------------------------------------------" << endl;
        cout << "Please provide the following information: " << endl;
        
        // Getting data from the user related to rental service
        cout << "Please select Number of Cars to be rented : ";
        cin >> carnumber;
        cout << "Number of days you wish to rent the car : ";
        cin >> days;
        cout << endl;
    }

    // Function to calculate rental fee based on car model and rental days
    void calculate() {
        cout << "Calculating rent. Please wait......" << endl;
        // Simulate calculation based on car model (A, B, C)
        if(carmodel == "A" || carmodel == "a")
            rentalfee = days * 56;
        if(carmodel == "B" || carmodel == "b")
            rentalfee = days * 60;
        if(carmodel == "C" || carmodel == "c")
            rentalfee = days * 75;
    }

    // Function to display the rental invoice
    void showrent() {
        cout << "\n\t\t Car Rental - Customer Invoice  " << endl;
        // Display invoice details
        // ...
    }
};

// Class for displaying a welcome message
class welcome {
public:
    // Function to display a welcome message
    int welcum() {
        ifstream in("welcome.txt"); // Displaying welcome ASCII image text on the output screen

        if(!in) {
            cout << "Cannot open input file.\n";
        }

        char str[1000];
        while(in) {
            in.getline(str, 1000);  // delim defaults to '\n'
            if(in) cout << str << endl;
        }

        in.close();

        cout << "\nStarting the program please wait....." << endl;
        // Simulate loading files
        cout << "\nloading up files....." << endl;
        // Simulate loading time
        cout << "\n";
    }
};

// Function to handle user login
int login() {
    string pass = "";
    char ch;
    
    cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
    cout << "\t\t\t\t\t------------------------------";
    cout << "\n\t\t\t\t\t\t     LOGIN \n";
    cout << "\t\t\t\t\t------------------------------\n\n";
    
    cout << "\t\t\t\t\tEnter Password: ";
    ch = _getch();
    
    while(ch != 13) { // character 13 is enter
        pass.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    
    if(pass == "pass") {
        cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
        system("PAUSE");
        system ("CLS");
    } else {
        cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
        system("PAUSE");
        system("CLS");
        login();
    }
}

int main() {
    welcome obj1; // object created for welcome class
    obj1.welcum(); // welcum function is called
    
    rent obj2; // object created for rent class and further member functions are called
    obj2.data();
    obj2.calculate();
    obj2.showrent();
    
    return 0; // end of the program
}
