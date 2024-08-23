#include <iostream>
#include <string>

// outputs the prices
void welcome(float AppleSrp, float OrangeSrp, float PineappleSrp, float WatermelonSrp, float GuyabanoSrp) {
    std::cout << "\n\nWelcome, here is the list of our products and their prices:\n";
    std::cout << "Apple: " << AppleSrp << std::endl;
    std::cout << "Orange: " << OrangeSrp << std::endl;
    std::cout << "Pineapple: " << PineappleSrp << std::endl;
    std::cout << "Watermelon: " << WatermelonSrp << std::endl;
    std::cout << "Guyabano: " << GuyabanoSrp << std::endl;
}

// check and display prices if zero
void checkAndDisplayEmptyProducts(float AppleSrp, float OrangeSrp, float PineappleSrp, float WatermelonSrp, float GuyabanoSrp) {
    bool isEmpty = false;
    int Q = 0;
    std::cout << std::endl << "__________________________________" << std::endl;

    if (AppleSrp == 0) {
        std::cout << ++Q << ". Apple\n";
        isEmpty = true;
    }
    if (OrangeSrp == 0) {
        std::cout << ++Q << ". Orange\n";
        isEmpty = true;
    }
    if (PineappleSrp == 0) {
        std::cout << ++Q << ". Pineapple\n";
        isEmpty = true;
    }
    if (WatermelonSrp == 0) {
        std::cout << ++Q << ". Watermelon\n";
        isEmpty = true;
    }
    if (GuyabanoSrp == 0) {
        std::cout << ++Q << ". Guyabano\n";
        isEmpty = true;
    }

    if (!isEmpty) {
        std::cout << "All products have valid prices.\n";
    }
}

// changing the products' prices (not done)
void changeMultiplePrices(float& AppleSrp, float& OrangeSrp, float& PineappleSrp, float& WatermelonSrp, float& GuyabanoSrp) {
    std::string product;

    while (true) {
        std::cout << std::endl << "Which product would you like to change the price for? (Apple, Orange, Pineapple, Watermelon, Guyabano) or (replace all) \n"
                  << "Enter 'done' when finished.\n" ;
        std::cin >> product;

        if (product == "Apple") {
            std::cout << "\n" << "Enter new price for Apple: ";
            std::cin >> AppleSrp;
        } else if (product == "Orange") {
            std::cout <<" \n" << "Enter new price for Orange: " ;
            std::cin >> OrangeSrp;
        } else if (product == "Pineapple") {
            std::cout << " \n" << "Enter new price for Pineapple: ";
            std::cin >> PineappleSrp;
        } else if (product == "Watermelon") {
            std::cout << " \n" << "Enter new price for Watermelon: ";
            std::cin >> WatermelonSrp;
        } else if (product == "Guyabano") {
            std::cout << " \n" << "Enter new price for Guyabano: " ;
            std::cin >> GuyabanoSrp;
        } else if (product == "done") {
            break;  // if the user is done it exits the user
        } else if (product == "Replace all" || product == "replace all") {

        } else {
            std::cout << "Invalid product name. Please try again.\n";
        }
    }
}

int main() {
    float AppleSrp = 0;
    float OrangeSrp = 0;
    float PineappleSrp = 0;
    float WatermelonSrp = 0;
    float GuyabanoSrp = 0;

    std::string FunProgram;

    while (true) { // the start of the running program
        std::cout << std::endl << "Would you like to run the program or not?\n"
                  << "To run the program enter (run) and (end) to terminate the program.\n";
        std::cin >> FunProgram;

        if (FunProgram == "run") { // if the program runs
            welcome(AppleSrp, OrangeSrp, PineappleSrp, WatermelonSrp, GuyabanoSrp);
            checkAndDisplayEmptyProducts(AppleSrp, OrangeSrp, PineappleSrp, WatermelonSrp, GuyabanoSrp);

            std::string answer; // name:PRod Ask if change the products's price
            if(AppleSrp == 0 || OrangeSrp == 0 || PineappleSrp == 0 || WatermelonSrp == 0 || GuyabanoSrp == 0)
            {std::cout << "It seems some of our products' price above are empty: would you like to change its prices? (yes/no)\n";
            std::cin >> answer;}
            else continue;
            

            if (answer == "yes") { // if PRod yes
                changeMultiplePrices(AppleSrp, OrangeSrp, PineappleSrp, WatermelonSrp, GuyabanoSrp);
            }
        } else if (FunProgram == "end") {
            break;
        } else {
            std::cout << std::endl << "__________________________________________________" 
            << std::endl << "Invalid input. Please enter either 'run' or 'end'.\n" << 
            "___________________________________________________" << std::endl;
            
        }
    }

    return 0;
}
