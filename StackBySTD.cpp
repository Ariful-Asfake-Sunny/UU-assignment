#include <iostream>
#include <stack>
using namespace std;

void showstack(stack<int>s)
{
    while (!s.empty())
    {
        cout << s.top()<<endl;
        s.pop();
    }
    cout << '\n';
}


int main()
{
    stack<int> s;
	s.push(10);	// Insert "10" in the stack
	s.push(20);	// Insert "20" in the stack
	s.push(30);	// Insert "30" in the stack
	s.push(40);	// Insert "40" in the stack
    cout << "The stack is : "<<endl;
    showstack(s);
	// Returns the number of elements present in the stack
	cout << "Stack size is " << s.size() << endl;
	// Prints the top of the stack ("40")
	cout << "Top element is: " << s.top() << endl;



	s.pop();	// removing the top ("40")
	s.pop();	// removing the next top ("30")
    cout << "After 2(Two) pop Operations The stack is : "<<endl;
    showstack(s);
    // Returns the number of elements present in the stack after 2(Two) pop operations
	cout << "Stack size is " << s.size() << endl;
	// Prints the top of the stack ("20")
	cout << "Top element is: " << s.top() << endl;
	// check if stack is empty
	if (s.empty())
		cout << "Stack is Empty\n";
	else
		cout << "Stack is not Empty\n";
	return 0;
}
