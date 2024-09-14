#include <iostream>
#include <string>

using namespace std;

#define SIZE 5

template <class T>
class Stack
{
public:
    Stack()  { top = -1; };

    void push(T k)
    {

        if (isFull())
        {
           
            cout << "Stack is full\n";
        }

        cout << "Inserted element " << k << endl;
        top = top + 1;

        st[top] = k;
    }
    T pop()
    {
        T popped_element = st[top];   //1 ta matra value halda tei janxa tara 1 2 3 4 5 garda aba top ma 5 hunxa
        cout << "\npopopop " << st[top]<<endl;
        top--;
        return popped_element;
    }
    T topElement()
    {
        T top_element = st[top];
        return top_element;
    }

    bool isFull()
    {
        if (top == (SIZE - 1))
            return 1;
        else
            return 0;
    }
    bool isEmpty()
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }

private:
    int top;

    T st[SIZE];
};




int main()
{

    Stack<int> integer_stack;
    Stack<string> string_stack;

    integer_stack.push(4);
    integer_stack.push(2);
    integer_stack.push(54);
    integer_stack.push(255);

   
    string_stack.push("Welcome");
    string_stack.push("to");
    string_stack.push("GeeksforGeeks");

     cout << integer_stack.pop() << " is removed from stack"
      << endl;

     cout << string_stack.pop() << " is removed from stack "
      << endl;

    cout << "Top element is " << integer_stack.topElement()
      << endl;

    cout << "Top element is " << string_stack.topElement()
      << endl;

    return 0;
}