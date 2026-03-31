#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int choice;
    double V, I, P;

    cout << fixed << setprecision(2);

    do {
        cout << "-------Circuit analyzer-------\n";
        cout << "1. Calculate Power (P = V * I)\n";
        cout << "2. Series Resistance\n";
        cout << "3. Parallel Resistance\n";
        cout << "4. Voltage Divider\n";
        cout << "5. Current Divider\n";
        cout << "6. Capacitors in Series\n";
        cout << "7. Capacitors in Parallel\n";
        cout << "8. Exit\n";
        cout << "Choose option: ";
        cin >> choice;

        if(choice == 1){
            cout << "Enter Voltage (V): ";
            cin >> V;
            cout << "Enter Current (I): ";
            cin >> I;

            P = V * I;

            cout << "Power = " << P << " W\n";
        }

        else if(choice == 2){
             int n;
             double R, total = 0;

             cout << "How many resistors? ";
             cin >> n;

        for(int i = 1; i <= n; i++){
             cout << "Enter R" << i << ": ";
             cin >> R;
             total += R;
        }

        cout << "Equivalent Series Resistance = " << total << " Ohms\n";
        }

        else if(choice == 3){

             int n;
             double R, sum = 0, Req;

             cout << "How many resistors? ";
             cin >> n;

        for(int i = 1; i <= n; i++){
             cout << "Enter R" << i << ": ";
             cin >> R;
        
        if(R == 0){
            cout << "Error: Resistance cannot be zero\n";
        }

        else{sum += 1 / R;
        }
        }
        if(sum == 0){
            cout << "Cannot calculate equivalent resistance\n";
        }

        else{Req = 1 / sum;

        cout << "Equivalent Parallel Resistance = " << Req << " Ohms\n";
        }
        }

        else if(choice == 4){

             double Vin, R1, R2, Vout;

             cout << "Enter input voltage (Vin): ";
             cin >> Vin;

             cout << "Enter resistor R1: ";
             cin >> R1;

             cout << "Enter resistor R2: ";
             cin >> R2;

        if(R1 + R2 == 0){
            cout << "Error: Invalid resistor values\n";
        }

        else{Vout = Vin * (R1 / (R1 + R2));

             cout << "Output Voltage = " << Vout << " V\n";
        }     
        }

        else if(choice == 5){

             double Itotal, R1, R2, I1, I2;

             cout << "Enter total current (Itotal): ";
             cin >> Itotal;

             cout << "Enter resistor R1: ";
             cin >> R1;

             cout << "Enter resistor R2: ";
             cin >> R2;

        if(R1 == 0 || R2 == 0){
             cout << "Error: Resistor cannot be zero\n";
        }
        else{
             I1 = Itotal * (R2 / (R1 + R2));
             I2 = Itotal * (R1 / (R1 + R2));

             cout << "Current through R1 = " << I1 << " A\n";
             cout << "Current through R2 = " << I2 << " A\n";
        }
        }

        else if(choice == 6){

             int n;
             double C, sum = 0, Ceq;

             cout << "How many capacitors? ";
             cin >> n;

        for(int i = 1; i <= n; i++){
             cout << "Enter C" << i << ": ";
             cin >> C;

        if(C == 0){
            cout << "Error: Capacitance cannot be zero\n";
        }    

        else{sum += 1 / C;
        }
        }
        if(sum == 0){
            cout << "Cannot calculate equivalent capacitance\n";
        }
    
        else{Ceq = 1 / sum;
             cout << "Equivalent Capacitance = " << Ceq << " F\n";
        }     
        }

        else if(choice == 7){

             int n;
             double C, total = 0;

             cout << "How many capacitors? ";
             cin >> n;
        
        for(int i = 1; i <= n; i++){
             cout << "Enter C" << i << ": ";
             cin >> C;

             total += C;
        }

             cout << "Equivalent Capacitance = " << total << " F\n";
        }

        else{
             cout << "Invalid option. Please choose a number from 1 to 8.\n";
        }  
    } while(choice != 8);

    cout << "Program Ended.";

    return 0;
}