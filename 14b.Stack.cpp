// #include <iostream>
// using namespace std;

// // Stack implementation using INT data type.

// class stack
// {
// private:
//     int *arr;
//     int top = -1;
//     int capacity;

// public:
//     stack(int size)
//     {
//         arr = (int *)malloc(size * sizeof(int));
//         capacity = size;
//     }
//     ~stack()
//     {
//         free(arr);
//     }
//     void push(int value)
//     {
//         if (top == capacity - 1)
//         {
//             cout << "Stack Overflow." << endl;
//         }
//         else
//         {
//             top++;
//             arr[top] = value;
//             cout << "Insertion Complete." << endl;
//         }
//     }
//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "Stack Underflow." << endl;
//         }
//         else
//         {
//             arr[top--];
//         }
//     }
//     void peek() const
//     {
//         cout << "Top: " << top << endl;
//     }
//     void display() const
//     {
//         if (top == -1)
//         {
//             cout << "Stack is Empty.\n";
//         }
//         else
//         {
//             for (int i = top; i >= 0; i--)
//             {
//                 cout << arr[i] << " ";
//             }
//             cout << endl;
//         }
//     }
// };

// int main()
// {
//     stack arr(5);

//     for (int i = 0; i < 5; i++)
//     {
//         arr.push(i + 1);
//     }
//     arr.display();

//     arr.pop();
//     arr.pop();
//     arr.display();
//     arr.pop();

//     cout << endl;
//     return 0;
// }

//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

// Stack implementation using String data type.

class stack
{
private:
    string *arr;
    int top = -1;
    int capacity;

public:
    stack(int size) : capacity(size)
    {
        arr = (string *)malloc(size * sizeof(string));
    }
    ~stack()
    {
        free(arr);
    }
    void push(string ch_string)
    {
        if (top == capacity - 1)
        {
            cout << "Stack is Overflow.\n";
        }
        else
        {
            arr[++top] = ch_string;
            cout << "String had pushed: " << ch_string << endl;
        }
    }
    void poped()
    {
        if (top == -1)
        {
            cout << "Stack is Underflow\n";
        }
        else
        {
            cout << "the string have poped: " << arr[top] << endl;
            arr[top--];
        }
    }
    void peek()
    {
        if (top != -1)
        {
            cout << "The peek is: " << arr[top] << endl;
        }
        else
        {
            cout << "Stack is Underflow.\n";
        }
    }
};

int main()
{
    stack arr(2);
    arr.push("Haseeb khan");
    arr.push("aaaaaaaaaaa");
    arr.push("sssssssssss");
    arr.push("rrrrrrrrrrr");

    arr.peek();
    arr.poped();
    arr.poped();
    arr.poped();
    arr.poped();
    arr.poped();

    cout << endl;
    return 0;
}

//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////


#include <iostream>
using namespace std;

// Stack implementation using char data type.

class stack
{
private:
    char *arr;
    int top;
    int capacity;

public:
    stack(int size) : capacity(size), top(-1)
    {
        arr = new char[size];
    }
    ~stack()
    {
        delete[] arr;
    }
    void push(char ch)
    {
        if (top == capacity - 1)
        {
            cout << "Stack is Overflow.\n";
        }
        else
        {
            arr[++top] = ch;
            cout << "Character has been pushed: " << ch << endl;
        }
    }
    void poped()
    {
        if (top == -1)
        {
            cout << "Stack is Underflow\n";
        }
        else
        {
            cout << "The character that has been popped: " << arr[top--] << endl;
        }
    }
    void peek()
    {
        if (top != -1)
        {
            cout << "The peek is: " << arr[top] << endl;
        }
        else
        {
            cout << "Stack is Underflow.\n";
        }
    }
};

int main()
{
    stack arr(2);
    arr.push('A');
    arr.push('B');
    arr.push('C');
    arr.push('D');

    arr.peek();
    arr.poped();
    arr.poped();
    arr.poped();

    cout << endl;
    return 0;
}
