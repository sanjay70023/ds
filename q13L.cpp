#include <iostream>
using namespace std;

bool disjunction(int a, int b)
{
    if (a && b)
    {
        return true;
    }
    return false;
}

bool conjunction(int a, int b)
{
    if (a || b)
    {
        return true;
    }
    return false;
}

bool exclusive_or(int a, int b)
{
    if ((!a && b) || (!b && a))
    {
        return true;
    }
    return false;
}

bool singly_conditional(int p, int q)
{
    if (p)
    {
        if (q)
        {
            return true;
        }
        return false;
    }
    return true;
}

bool biconditional(int p, int q)
{
    if (p & q)
    {
        return true;
    }
    else if (!p & !q)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool exclusive_nor(int a, int b)
{
    if ((a && b) || (!a && !b))
    {
        return true;
    }
    return false;
}

bool negation(int p)
{
    return !p;
}

bool nand(int a, int b)
{
    if (a & b)
    {
        return false;
    }
    return true;
}

bool nor(int a, int b)
{
    return (!a && !b);
}

int main()
{

    int x, y;
    cout << "Enter x : ";
    cin >> x;
    cout << "Enter y : ";
    cin >> y;
    int flag = 1, choice = 0;
    while (flag > 0)
    {
        cout << endl
             << "* * * * * * * * * * * * * * * *"
             << "*                              *";
        cout << endl
             << "*           MENU               *";
        cout << endl
             << "*      1. Conjunction          *";
        cout << endl
             << "*      2. Disjunction          *";
        cout << endl
             << "*      3. Exclusive OR         *";
        cout << endl
             << "*      4. Conditional          *";
        cout << endl
             << "*      5. Biconditonal         *";
        cout << endl
             << "*      6. Exclusive NOR        *";
        cout << endl
             << "*      7. Negation             *";
        cout << endl
             << "*      8. NAND                 *";
        cout << endl
             << "*      9. NOR                  *";
        cout << endl
             << "*      10. Exit the program    *";
        cout << endl
             << "*                              *";
        cout << endl
             << "* * * * * * * * * * * * * * *  *" << endl;
        cout << endl
             << "---> Enter your choice: ";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
            cout << "x\ty\t"
                 << "x v y" << endl;
            cout << x << "\t" << y << "\t" << conjunction(x, y) << endl;
            break;
        case 2:
            cout << "x\ty\t"
                 << "x ^ y" << endl;
            cout << x << "\t" << y << "\t" << disjunction(x, y) << endl;
            break;
        case 3:
            cout << "x\ty\t"
                 << "x (+) y" << endl;
            cout << x << "\t" << y << "\t" << exclusive_or(x, y) << endl;
            break;
        case 4:
            cout << "x\ty\t"
                 << "x -> y" << endl;
            cout << x << "\t" << y << "\t" << singly_conditional(x, y) << endl;
            break;
        case 5:
            cout << "x\ty\t"
                 << "x <-> y" << endl;
            cout << x << "\t" << y << "\t" << biconditional(x, y) << endl;
            break;
        case 6:
            cout << "x\ty\t"
                 << "(x (+) y)'" << endl;
            cout << x << "\t" << y << "\t" << exclusive_nor(x, y) << endl;
            break;
        case 7:
            cout << "x\ty\t"
                 << "!x \t !y" << endl;
            cout << x <<"\t"<<y<<"\t"<<negation(x)<<"\t"<<negation(y)<< endl;
            break;
        case 8:
            cout << "x\ty\t"
                 << "(x ^ y)'" << endl;
            cout << x << "\t" << y << "\t" << nand(x, y) << endl;
            break;
        case 9:
            cout << "x\ty\t"
                 << "(x V y)'" << endl;
            cout << x << "\t" << y << "\t" << nor(x, y) << endl;
            break;
		case 10:
			cout << "Exiting the program !!!\n";
			break;
        default:
            cout << "Invalid Option !" << endl;
            break;
        }
        cout << endl
             << "--> Enter 1 to Continue and 0 to Exit <-- :";
        cin >> choice;
    }
    return 0;
}