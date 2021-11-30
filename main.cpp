#include "std_lib_facilities.h"
using namespace std;


int main()
{
    double a, b, c, discriminant, root1, root2;
    cout << "Enter coefficient a of quadratic equation: "; 
    cin >> a;

    cout << "Enter coefficient b of quadratic equation: "; 
    cin >> b;

    cout << "Enter coefficient c of quadratic equation: "; 
    cin >> c;

    discriminant = b*b-4*a*c;

    if (discriminant > 0){
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Two real roots: " << root1 << " and " << root2 << endl;
    }

    else if (discriminant == 0){
        cout << "One real root: " << -b/(2*a)<< endl;
    }

    else {
        cout << "Equation has no real roots" << endl;
    }

    return 0;
}

