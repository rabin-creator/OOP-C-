#include <iostream>
using namespace std;

class house {
public:
    enum model { rock, brick, wood };

private:
    int room_no;
    string address;
    model house_model;

public:
    void input() {
        cout << "Enter room number: ";
        cin >> room_no;
        cout << "Enter address: ";
        cin.ignore();
        getline(cin, address);
        cout << "Enter house model (rock/brick/wood): ";
        string model_str;
        cin >> model_str;
        if (model_str == "rock")
            house_model = rock;
        else if (model_str == "brick")
            house_model = brick;
        else
            house_model = wood;
    }

    void show() {
        cout << "\n==============================\n";
        cout << "      HOUSE DETAILS\n";
        cout << "==============================\n";
        cout << "Room No   : " << room_no << endl;
        cout << "Address   : " << address << endl;
        cout << "Model     : ";
        switch (house_model) {
            case rock: cout << "Rock"; break;
            case brick: cout << "Brick"; break;
            case wood: cout << "Wood"; break;
        }
        cout << endl;
        cout << "------------------------------\n";
        show_safety();
        cout << "==============================\n";
    }

private:
    void show_safety() {
        cout << "Safety Measures: ";
        switch (house_model) {
            case rock:
                cout << "Medium safety. Ensure regular inspection for cracks." << endl;
                break;
            case brick:
                cout << "High safety. Good resistance to fire and weather." << endl;
                break;
            case wood:
                cout << "Low safety. Take precautions against fire and termites." << endl;
                break;
        }
    }
};

int main() {
    house h1;
    h1.input();
    h1.show();
    return 0;
}