//
//  main.cpp
//  cricket
//
//  Created by apple on 21/05/23.
//

#include <iostream>
using namespace std;

class Cricketer {
protected:
    string name;

public:
    void inputData() {
        cout << "Enter cricketer name: ";
        getline(cin.ignore(), name);
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    int averageRuns;
    int bestPerformance;

public:
    void calculateAverageRuns() {
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;

        averageRuns = totalRuns / bestPerformance;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman;

    batsman.inputData();
    batsman.calculateAverageRuns();
    batsman.displayData();

    return 0;
}
