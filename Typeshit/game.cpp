#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate remaining cost using arithmetic series logic
long long calculateRemainingUpgradeCostArithmetic(long long initialCost, int upgradesBought, int totalUpgrades) {
    // Number of remaining upgrades
    int remainingUpgrades = totalUpgrades - upgradesBought;

    // First and last terms of the remaining upgrades
    long long firstTerm = (upgradesBought + 1) * initialCost;
    long long lastTerm = totalUpgrades * initialCost;

    // Total cost using the arithmetic series formula
    long long totalCost = (remainingUpgrades * (firstTerm + lastTerm)) / 2;

    return totalCost;
}

// Function to calculate remaining cost with incremental pricing (e.g., +10% per upgrade)
long long calculateRemainingUpgradeCostIncremental(long long initialCost, int upgradesBought, int totalUpgrades) {
    // Number of remaining upgrades
    int remainingUpgrades = totalUpgrades - upgradesBought;

    long long totalCost = 0;

    // Calculate cost for each remaining upgrade
    for (int i = upgradesBought + 1; i <= totalUpgrades; ++i) {
        long long currentUpgradeCost = initialCost + (i - 1) * (initialCost / 10); // Increment by 10% of initial cost
        totalCost += currentUpgradeCost;
    }

    return totalCost;
}

int runGame() {
    long long initialCost;
    int upgradesBought, totalUpgrades;
    int choice;

    // Input values
    cout << "Enter the cost of the first upgrade: ";
    cin >> initialCost;

    cout << "Enter the total number of upgrades bought: ";
    cin >> upgradesBought;

    cout << "Enter the total number of upgrades: ";
    cin >> totalUpgrades;

    // Check if the inputs are valid
    if (upgradesBought >= totalUpgrades) {
        cout << "All upgrades are already bought or invalid input!" << endl;
        return 0;
    }

    // Ask user to choose calculation method
    cout << "Choose calculation method:\n";
    cout << "1. Arithmetic Series (e.g., 100, 200, 300...)\n";
    cout << "2. Incremental Pricing (+10% per upgrade, e.g., 100, 110, 120...)\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    long long remainingCost = 0;

    // Perform calculation based on user's choice
    if (choice == 1) {
        remainingCost = calculateRemainingUpgradeCostArithmetic(initialCost, upgradesBought, totalUpgrades);
        cout << "The total cost to finish all upgrades (Arithmetic Series) is: " << remainingCost << endl;
    } else if (choice == 2) {
        remainingCost = calculateRemainingUpgradeCostIncremental(initialCost, upgradesBought, totalUpgrades);
        cout << "The total cost to finish all upgrades (Incremental Pricing) is: " << remainingCost << endl;
    } else {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    return 0;
}