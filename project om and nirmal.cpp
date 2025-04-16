
#include<iostream>
using namespace std;

class CurrencyConverter {
private:
    
    string countries[11] = { "Eurozone","United States", "UAE", "England", "Indonesia", "South Korea", "China", "Japan", "Sri Lanka", "Pakisthan"};
    string currencies[11] = {"EUR","USD",  "AED", "GBP", "IDR", "KRW", "CNY", "JPY", "LKR", "Rs"};
    double exchangeRates[11] = {94.0,87.0,  24.0, 111.05, 0.005, 0.06, 12.0, 0.59, 0.29, 0.31};

public:
    
    void listCountries() {
        cout << "\nChoose a country to convert its currency into Indian INR:\n";
        for (int i = 0; i < 10; i++) {
            cout << (i + 1) << ". " << countries[i] << " (" << currencies[i] << ")\n";
        }
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  

    
    double convert(int index, double amount) {
        return amount * exchangeRates[index - 1];
    }
                                                                                                                                                             
    void displayConversion(int index, double amount) {
        cout << "\nYou have chosen to convert " << countries[index - 1] << " currency to INR.\n";
        cout << "Converted Amount: " << convert(index, amount) << " INR\n";
    }
};

int main() {
    CurrencyConverter converter;
    int choice;
    double amount;
    char repeat;

    do {
        
        converter.listCountries();
        cout << "Enter the country number: ";
        cin >> choice;
        

        while (choice < 1 || choice > 10) {
            cout << "Invalid choice! Enter again: ";
            cin >> choice;
        }

        cout << "Enter amount: ";
        cin >> amount;
        
        while (amount <= 0) {
            cout << "Invalid amount! Enter again: ";
            cin >> amount;
        }
        converter.displayConversion(choice, amount);
        cout << "\nConvert another? (y/n): ";
        cin >> repeat;
    }
	 while (repeat == 'y' || repeat == 'Y');
    cout << "Thank you for using the Currency Converter!\n";
    return 0;
}

