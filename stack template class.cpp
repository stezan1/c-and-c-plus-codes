#include<iostream>
using namespace std;
#define SIZE 10
template <class T>
class stack
{
	int top;
	T st[SIZE];
	public:
		stack(); //empty constructor
		void push(T x); // insert x 
		T pop(); // remove top element
		T peek(); //return top element
		bool isFull();
		bool isEmpty();		
};
template<class T>
stack<T>::stack()
{
	top = -1; //initialize
}
template<class T>
void stack<T>::push(T x)
{
	if(isFull())
	{
		cout<<"Stack is overflow"<<endl;
	}
	top = top + 1;
	st[top] = x;
	cout<<"Inserted element : " << x <<endl;
}
template<class T>
T stack<T>::pop()
{
	if(isEmpty())
	{
		cout<<"Stack is underflow"<<endl;
	}
	T rem_element ;
	rem_element = st[top];
	st[top--];
	return rem_element;
}
template<class T>
T stack<T>::peek()
{
	T top_element;
	top_element = st[top];
	return top_element;
}
template<class T>
bool stack<T>::isFull()
{
	if(top == (SIZE - 1))
		return 1;
	else
		return 0;
}
template<class T>
bool stack<T>::isEmpty()
{
	if(top == -1)
		return 1;
	else
		return 0;
}
int main()
{
	stack<int>obj1;
	stack<string>obj2;
	
	obj1.push(5);
	obj1.push(6);
	obj1.push(8);
	
	obj2.push("Ram");
	obj2.push("Hari");
	obj2.push("Raju");
	
	cout<<obj1.pop() << " is removed from stack "<<endl;
	cout<<obj2.pop() << " is removed from stack "<<endl;
	
	cout<<"Top element is "<<obj1.peek()<<endl;
	cout<<"Top element is "<<obj2.peek()<<endl;
	
	return 0;
}
