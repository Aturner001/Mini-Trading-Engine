#include<iostream>
#include<string>
#include<chrono>
using namespace std;
using namespace std::chrono;

uint64_t getTimens() {
    return duration_cast<nanoseconds>(steady_clock::now().time_since_epoch()).count();
}

int main() {
    cout << "===Mini Trading Engine===" << endl;
    cout << "Built by Alexander Turner, Denver Colorado";

    while (true) {
        int orderType;
        double price = 0.0;
        int quantity = 0;
        string symbol;

        cout << "Enter Symbol ";
        cin >> symbol;

        if (symbol == "quit") break;

        cout << "Enter Order Type (1=MARKET, 2=LIMIT, 3=STOP, 4=CANCEL): ";
        cin >> orderType;
        if (orderType == 4) {
            cout << "CANCEL order sent for " << symbol << "\n\n";
            continue;
        }
        
        if (orderType == 2 || orderType ==3) {
            cout << "Enter price: ";
            cin >> price;
        }
        cout << "Enter quantity; ";
        cin >> quantity;

        uint64_t timestamp = getTimens();

        string action;
        switch (orderType) {
            case 1:
                action = "EXECUTE AT MARKET";
                cout << "[MARKET] " << quantity << " " << symbol << " " << action << "\n";
                break;
            case 2:
                action = "LIMIT ORDER PLACED @ " + to_string(price);
                cout << "[LIMIT] " << quantity << " " << symbol << " " << action << "\n";
                break;
            case 3:
                action = "STOP ORDER PLACED @ " + to_string(price);
                cout << "[STOP]  " << quantity << " " << symbol << " " << action << "\n";
                break;
            default:
                cout << "Invalid order type!\n";
                continue;
        }
        cout << "Timestamp: " << timestamp << " ns\n";
        cout << "Engine latency: ~" << (getTimens() - timestamp) / 1000 << " µs\n\n";
    }
    cout << "Trading engine shut down. \n";
    return 0;
}