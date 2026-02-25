#include "utilities.h"
using namespace std;


int main() {
    bool programIsRunning = true;
    while (programIsRunning) {
        // char necessary to prevent crashing if user input is not an int
        char userInput;
        cout << "Pasirinkite paslauga, ivesdami paslaugos numeri:" << endl;
        cout << "Valiutos kurso palyginimas - 1" << endl;
        cout << "Valiutos isigijimas - 2" << endl;
        cout << "Valiutos pardavimas - 3" << endl;
        cout << "Iseiti - 0" << endl;
        cout << endl;
        cin >> userInput;

        // turn ASCII value to int, to use in switch
        switch (static_cast<int>(userInput) - '0') {
            case 1: {
                while (true) {
                    cout << "Iveskite palyginimo operacijos numerį:" << endl;
                    printCurrencyOptions();
                    int currencyIndex;
                    cin >> currencyIndex;

                    // back to main services
                    if (currencyIndex == 0) {
                        break;
                    }

                    double exchangeRate = getCurrencyRate(currencyIndex);
                    array<string, 2> exchangeCurrencyCodes = getCurrencyCode(currencyIndex);
                    cout << "1 " << exchangeCurrencyCodes[0] << " = " << roundTo2DecimalPlaces(exchangeRate) << " " <<
                            exchangeCurrencyCodes[1]
                            << endl << endl;
                }
                // breaks switch in order to go back to choosing a service instead oftriggering case 2
                break;
            }
            case 2: {
                while (true) {
                    cout << "Iveskite valiutos pirkimo operacijos numeri:" << endl;
                    printCurrencyOptions();
                    int currencyIndex;
                    cin >> currencyIndex;

                    if (currencyIndex == 0) {
                        // back to service menu
                        break;
                    }

                    cout << "Iveskite turimos valiutos kieki:" << endl;
                    double inputAmount;
                    cin >> inputAmount;

                    double exchangeRate = getCurrencyBuyRate(currencyIndex);
                    array<string, 2> exchangeCurrencyCodes = getCurrencyCode(currencyIndex);
                    cout << inputAmount << " " << exchangeCurrencyCodes[0] << " -> " <<
                            roundTo2DecimalPlaces(exchangeRate * inputAmount) << " " <<
                            exchangeCurrencyCodes[1]
                            << endl << endl;
                }
                break;
            }
            case 3: {
                while (true) {
                    cout << "Iveskite valiutos pardavimo operacijos numeri:" << endl;
                    printCurrencyOptions();
                    int currencyIndex;
                    cin >> currencyIndex;

                    if (currencyIndex == 0) {
                        break;
                    }

                    cout << "Iveskite turimos valiutos kieki:" << endl;
                    double inputAmount;
                    cin >> inputAmount;

                    double exchangeRate = getCurrencySellRate(currencyIndex);
                    array<string, 2> exchangeCurrencyCodes = getCurrencyCode(currencyIndex);
                    cout << inputAmount << " " << exchangeCurrencyCodes[0] << " -> " << roundTo2DecimalPlaces(
                                exchangeRate * inputAmount) << " " << exchangeCurrencyCodes[1]
                            << endl << endl;
                }
                break;
            }
            case 0:
                programIsRunning = false;
                break;
            default:
                // return to main menu
                cout << "Neteisingas pasirinkimas, badyk dar karta" << endl;
        }
    }
}
