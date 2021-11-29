#include "std_lib_facilities.h"

int main()
{
    cout << "Write an operation (+ or plus, - or minus, * or mul and / or div)\n"
        "followed by two operands(numbers): ";

    string operation {" "};

    double x {0};
    double y {0};

    cin >> operation >> x >> y;

    if (operation == "+" || operation == "plus")
        cout << x << " + " << y << " = " << x+y << '\n';

    else if (operation == "-" || operation == "minus")
        cout << x << " - " << y << " = " << x-y << '\n';

    else if (operation == "*" || operation == "mul")
        cout << x << " * " << y << " = " << x*y << '\n';

    else if (operation == "/" || operation == "div")
        cout << x << " / " << y << " = " << x/y << '\n';

    else
        cout << "Operator " << operation << " is not valid.\n";

    return 0;
}