/* 2. Create a class SET and take two sets as input from user to perform following SET
Operations:
a) Subset: Check whether one set is a subset of other or not.
b) Union and Intersection of two Sets.
c) Complement: Assume Universal Set as per the input elements from the user.
d) Set Difference and Symmetric Difference between two SETS
e) Cartesian Product of Sets */

#include <iostream>
using namespace std;

class Set
{
private:
    int n1;
    int set1[n1];
    int n2;
    int set2[n2];

public:
    void getData();        
    void subSet();          
    void Union();           
    void Intersection();    
    void complement();      
    void setDiff();         
    void symmDiff();        
    void cartesianProd();   
};

void Set::getData()
{
    cout << "Entering elements in SET:1" << endl;
    cout << "Enter number of elements you want to enter in SET:1 :";
    cin >> n1;
    cout << "Enter elements separeted by a space (SET:1) :";
    for (int i = 0; i < n1; i++)
    {
        cin >> set1[i];
    }
    cout << endl;
    cout << "Entering elements in SET:2" << endl;
    cout << "Enter number of elements you want to enter in SET:2 :";
    cin >> n2;
    cout << "Enter elements separeted by a space (SET:2) :";
    for (int i = 0; i < n2; i++)
    {
        cin >> set2[i];
    }
    cout << endl;
    cout << "Set1 and Set2 are created successfully" << endl;
    cout << endl
         << "SET:1 = { ";
    for (int i = 0; i < n1; i++)
    {
        cout << set1[i] << " ";
    }
    cout << "}" << endl;
    cout << endl
         << "SET:2 = { ";
    for (int i = 0; i < n2; i++)
    {
        cout << set2[i] << " ";
    }
    cout << "}" << endl;
    return;
}

void Set::subSet()
{
    int i, j, flag;
    if (n1 > n2)
    {
        for (i = 0; i < n2; i++)
        {
            flag = 0;
            for (j = 0; j < n1; j++)
            {
                if (set1[i] == set2[j])
                {
                    flag = 1;
                    break;
                }
            }
            if (j == n1)
            {
                flag = 0;
            }
        }
        if (flag)
        {
            cout << endl
                 << "SET:2 is a sub-set of SET:1";
        }
        else
        {
            cout << endl
                 << "SET:2 is not a sub-set of SET:1";
        }
    }
    else //  n2 > n1
    {
        for (i = 0; i < n1; i++)
        {
            flag = 0;
            for (j = 0; j < n2; j++)
            {
                if (set2[j] == set1[i])
                {
                    flag = 1;
                    break;
                }
            }
            if (j == n1)
            {
                flag = 0;
            }
        }
        if (flag)
        {
            cout << endl
                 << "SET:1 is a sub-set of SET:2";
        }
        else
        {
            cout << endl
                 << "SET:1 is not a sub-set of SET:2";
        }
    }
    return;
}

void Set::Union()
{
    cout << endl
         << "The Union of Set:1 and Set:2 is { ";
    int flag;
    for (int i = 0; i < n1; i++)
    {
        cout << set1[i] << " ";
    }

    for (int i = 0; i < n2; i++)
    {
        flag = 0;
        for (int j = 0; j < n1; j++)
        {
            if (set2[i] == set1[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag != 1)
        {
            cout << set2[i] << " ";
        }
    }
    cout << "}" << endl;
    return;
}

void Set::Intersection()
{
    cout << endl
         << "Intersection of Set:1 and Set:2 is { ";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (set1[i] == set2[j])
            {
                cout << set1[i] << " ";
            }
        }
    }
    cout << "}" << endl;
    return;
}

void Set::complement()
{
    int U[100], start, stop, counter = 0;
    cout << "Enter the range of Universal Set" << endl;
    cout << "From :";
    cin >> start;
    cout << "To :";
    cin >> stop;
    for (int i = start; i <= stop; i++)
    {
        U[counter] = i;
        counter++;
    }
    cout << "Universal Set is U = { ";
    for (int i = 0; i < counter; i++)
    {
        cout << U[i] << " ";
    }
    cout << "}" << endl;
    if (counter > n1 && counter > n2)
    {
        cout << "Complement Exists" << endl;
        cout << endl;
        int flag;
        cout << "Complement of Set:1 is { ";
        for (int i = 0; i < counter; i++)
        {
            flag = 0;
            for (int j = 0; j < n1; j++)
            {
                if (U[i] == set1[j])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << U[i] << " ";
            }
        }
        cout << "}";
        cout << endl;
        cout << "Complement of Set:2 is { ";
        for (int i = 0; i < counter; i++)
        {
            flag = 0;
            for (int j = 0; j < n2; j++)
            {
                if (U[i] == set2[j])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << U[i] << " ";
            }
        }
        cout << "}";
    }
    else
    {
        cout << "complement does not exist" << endl;
    }
    return;
}

void Set::setDiff()
{
    int flag;
    cout << "Set:1 - Set:2 is { ";
    for (int i = 0; i < n1; i++)
    {
        flag = 0;
        for (int j = 0; j < n2; j++)
        {
            if (set1[i] == set2[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << set1[i] << " ";
        }
    }
    cout << "}";
    cout << endl;
    cout << "Set:2 - Set:1 is { ";
    for (int i = 0; i < n2; i++)
    {
        flag = 0;
        for (int j = 0; j < n1; j++)
        {
            if (set1[i] == set2[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << set2[i] << " ";
        }
    }
    cout << "}";
    return;
}

void Set::symmDiff()
{
    // symmDiff = (A-B) U (B-A)
    int sym_diff1[n1 + n2], sym_diff2[n1 + n2], flag, counter1 = 0, counter2 = 0;
    for (int i = 0; i < n1; i++)
    {
        flag = 0;
        for (int j = 0; j < n2; j++)
        {
            if (set1[i] == set2[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            sym_diff1[counter1++] = set1[i];
        }
    }
    for (int i = 0; i < n2; i++)
    {
        flag = 0;
        for (int j = 0; j < n1; j++)
        {
            if (set1[i] == set2[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            sym_diff2[counter2++] = set2[i];
        }
    }
    cout << "Symmetric Difference of Set:1 and  Set:2 = { ";
    for (int i = 0; i < counter1; i++)
    {
        cout << sym_diff1[i] << " ";
    }

    for (int i = 0; i < counter2; i++)
    {
        flag = 0;
        for (int j = 0; j < counter1; j++)
        {
            if (sym_diff2[i] == sym_diff1[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag != 1)
        {
            cout << sym_diff2[i] << " ";
        }
    }
    cout << "}" << endl;
    return;
}

void Set::cartesianProd()
{
    cout << "Cartesian Product" << endl;
    cout << "SET:1 x SET:2 = { ";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << "(" << set1[i] << "," << set2[j] << "),";
        }
    }
    cout << " }";
    cout << endl;
    cout << "SET:2 x SET:1 = { ";
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cout << "(" << set2[i] << "," << set1[j] << ") , ";
        }
    }
    cout << " }" << endl;
    return;
}

int main()
{
    Set S;
    S.getData();
    int ch;
    do
    {
        cout << endl
             << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * *";
        cout << endl
             << "*                                                       *";
        cout << endl
             << "*                      MENU                             *";
        cout << endl
             << "*      1. Check Subset                                  *";
        cout << endl
             << "*      2. Find union and intersection of set            *";
        cout << endl
             << "*      3. Complement the set                            *";
        cout << endl
             << "*      4. Find set difference and symmetric difference  *";
        cout << endl
             << "*      5. Find cartesian product                        *";
        cout << endl
             << "*                                                       *";
        cout << endl
             << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * *" << endl;
        cout << endl
             << "Enter your choice(1, 2, 3, 4 or 5): ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            S.subSet();
            break;
        case 2:
            S.Union();
            S.Intersection();
            break;
        case 3:
            S.complement();
            break;
        case 4:
            S.setDiff();
            S.symmDiff();
            break;
        case 5:
            S.cartesianProd();
            break;
        default:
            cout << endl
                 << "You have entered a wrong choice ";
        }
        cout << endl
             << "Enter 1 to continue and 0 to exit ";
        cin >> ch;
    } while (ch == 1);
    return 0;
}