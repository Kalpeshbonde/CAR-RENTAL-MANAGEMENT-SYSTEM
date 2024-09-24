
# CAR RENTAL MANAGEMENT SYSTEM

The CAR RENTAL MANAGEMENT SYSTEM is a console-based project written in C++ that allows users to rent cars based on available models, track rental details, and generate customer invoices. The system simulates a real-world car rental service, providing an easy-to-use interface for users to select car models, rental periods, and generate billing information.

## Features

- User login with a password-protected system.
- Selection of different car models (Hatchback, Sedan, SUV).
- Calculation of rental fees based on car model and number of days rented.
- Displays customer invoice with rental details.
- Welcome screen with ASCII art.

## Technologies Used

- C++
- File handling for loading car model information.
- Basic console-based UI with system commands (e.g., `CLS` and `PAUSE`).

## Installation

1. Clone this repository:
   ```bash
   git clone https://github.com/Kalpeshbonde/CAR-RENTAL-MANAGEMENT-SYSTEM.git
   cd CAR-RENTAL-MANAGEMENT-SYSTEM
   ```

2. Compile the C++ code using any C++ compiler like `g++` or an IDE like Code::Blocks or Visual Studio.

   Example (using g++):
   ```bash
   g++ car_rental.cpp -o car_rental
   ```

3. Run the executable:
   ```bash
   ./car_rental
   ```

## Usage

1. Start the program and log in with the password (default password: `pass`).
2. Choose a car model from the options (Hatchback, Sedan, SUV).
3. Enter the number of cars and rental days.
4. The system will calculate the rental fee and display a customer invoice.

## Code Overview

- `customer`: Base class representing customer details like name, car model, and number.
- `rent`: Derived class that calculates rental fees and generates invoices.
- `welcome`: Class that handles the welcome message displayed at the start.
- `login()`: Function that manages user login authentication.

## Project Structure

```
CAR-RENTAL-MANAGEMENT-SYSTEM/
│
├── A.txt                          # Details of Hatchback cars
├── B.txt                          # Details of Sedan cars
├── C.txt                          # Details of SUV cars
├── welcome.txt                    # ASCII art for the welcome screen
├── car_rental.cpp                 # Main project code
└── README.md                      # Project documentation
```

## Contributing

1. Fork the project.
2. Create a new branch for your feature (`git checkout -b feature/YourFeature`).
3. Commit your changes (`git commit -am 'Add YourFeature'`).
4. Push to the branch (`git push origin feature/YourFeature`).
5. Open a pull request.

## License

This project is licensed under the MIT License.
