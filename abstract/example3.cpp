#include <iostream>
using namespace std;

// Abstract base class
class Button {
public:
    // Pure virtual function
    virtual void onClick() = 0;

    void render() {
        cout << "Rendering button on screen..." << endl;
    }

    virtual ~Button() {} // Virtual destructor for safety
};

// Derived class with actual button behavior
class SubmitButton : public Button {
public:
    void onClick() override {
        cout << "Submit button clicked! Processing form..." << endl;
    }
};

class CancelButton : public Button {
public:
    void onClick() override {
        cout << "Cancel button clicked! Closing dialog..." << endl;
    }
};

int main() {
    // Pointer to base class
    Button* btn;

    int choice;
    cout << "Choose a button to click:\n1. Submit\n2. Cancel\nChoice: ";
    cin >> choice;

    if (choice == 1) {
        btn = new SubmitButton();
    } else if (choice == 2) {
        btn = new CancelButton();
    } else {
        cout << "Invalid choice." << endl;
        return 1;
    }

    btn->render();     // Optional shared behavior
    btn->onClick();    // Abstract behavior
    delete btn;

    return 0;
}
