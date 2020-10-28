#include <iostream>
using namespace std;
float A1, A2, B1, B2, C1, C2, A, B, C
main(){
    cout << "Enter A1: \n";
    cin >> A1;
    cout << "Enter B1: \n";
    cin >> B1;
    cout << "Enter C1: \n";
    cin >> C1;
    cout << "Enter A2: \n";
    cin >> A2;
    cout << "Enter B2: \n";
    cin >> B2;
    cout << "Enter C2: \n";
    cin >> C2;
    A = A1/A2;
    B = B1/B2;
    C = C1/C2;
    if (A != B) 
        cout << "The equation has one solution\n";
    else
    {
        if (A == B != C)
            cout << "The equation has no solution\n"
        
        else cout << "The equation has many solutions\n";
    }
    

}