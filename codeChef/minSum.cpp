#include <bits/stdc++.h> using namespace std; template <typename T> class Stacks { private:     T *data;     int capacity;     int nextIndex;  public:     Stacks()     {         data = new T[100];         capacity = 100;         nextIndex = 0;
}
int size()
{
    return nextIndex;
}
bool isEmpty()
{
    return nextIndex == 0;
}
bool isFull()
{
    return nextIndex == capacity;
}
void push(T data)
{
    if (isFull())
    {
        cout << "OVERFLOW" << endl;
        return;
    }
    this->data[nextIndex++] = data;
}

T pop()
{
    if (isEmpty())
    {
        cout << "UNDERFLOW" << endl;
        return 0;
    }
    T temp = data[--nextIndex];
    return temp;
}

T top()
{
    if (isEmpty())
    {
        cout << "UNDERFLOW" << endl;
        return 0;
    }
    return data[nextIndex - 1];
}
};
int main()
{
    Stacks<char> s;
    cout << s.top() << endl;
    s.push('N');
    s.push('A');
    s.push('K');
    s.push('N');
    s.push('A');
    cout << s.isEmpty() << endl;
    cout << s.isFull() << endl;
    while (!s.isEmpty())
    {
        cout << s.pop() << endl;
    }
    return 0;
}
