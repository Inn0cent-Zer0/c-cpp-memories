#include <iostream>
using namespace std;

class FourWheeler {
public:
    virtual void Rental() {
        cout << "\nRenting a FourWheeler\n";
    }
    virtual ~FourWheeler() {}  // Virtual destructor for safe polymorphic deletion
};

class Lorry : public FourWheeler {
public:
    Lorry() {
        cout << "\nLorry created\n";
    }
    ~Lorry() {
        cout << "\nLorry deleted\n";
    }
};

class Car : public FourWheeler {
public:
    Car() {
        cout << "\nCar created\n";
    }
    ~Car() {
        cout << "\nCar deleted\n";
    }
    void Rental() override {
        cout << "Car can be rented!\n";
    }
};

int main() {
    FourWheeler* FW = nullptr;
    int choice;

    while (true) {
        cout << "\n1. Lorry\n";
        cout << "2. Car\n";
        cout << "3. FourWheeler (base)\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                FW = new Lorry();
                break;
            case 2:
                FW = new Car();
                break;
            case 3:
                FW = new FourWheeler();
                break;
            case 4:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice!\n";
                continue;
        }

        FW->Rental();
        delete FW;  // Safe deletion of heap-allocated object
    }

    return 0;
}
