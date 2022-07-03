//#include<iostream>
//using namespace std;
//class stack {
//
//	int* ptr = 0;
//	int* alt = 0;
//	int i = -1;
//public:
//	stack(int size = 10)
//	{
//		ptr = new int[size];
//		alt = ptr;
//	}
//
//	void push(int data)
//	{
//		i++;
//		ptr[i] = data;
//	}
//
//	int pop()
//	{
//		int num = 0;
//		if (!iss_empty())
//		{
//			num = ptr[i];
//			i--;
//			return num;
//		}
//		else
//		{
//			cout << "Stack is empty " << endl;
//			return -1;
//		}
//		
//	}
//
//	int peek()
//	{
//		if (!iss_empty())
//		{
//			int num = 0;
//			num = ptr[i];
//			return num;
//		}
//		else
//		{
//			cout << "Stack is empty " << endl;
//			return -1;
//		}
//	}
//
//	bool iss_empty()
//	{
//		return(i == -1);
//	}
//
//	void display()
//	{
//		for (int j = i; j >= 0; j--)
//		{
//			cout << alt[j] << endl;
//		}
//	}
//};
//int main()
//{
//	int size = 0;
//	int check = 0;
//	int num1 = 0, num2 = 0;
//	int limit = 0;
//	while (true)
//	{
//		cout << "What should be the size of the stack ";
//		cin >> size;
//		if (size > 0)
//		{
//			break;
//		}
//		else
//		{
//			cout << "Invalid size " << endl;
//		}
//	}
//	if (size % 2)
//	{
//		limit = -3;
//	}
//	else
//	{
//		limit = 0;
//	}
//	check = size;
//	stack stack1(size);
//	stack stack2(size);
//	for (int i = 0; i < size; i++)
//	{
//		cout << "Enter the element ";
//		cin >> num1;
//		stack1.push(num1);
//	}
//	cout << "STACK 1 " << endl;
//	stack1.display();
//
//	while (check > limit)
//	{
//		for (int i = 0; i < check; i++)
//		{
//			stack2.push(stack1.pop());
//		}
//		check = check - 2;
//		num1 = stack2.pop();
//		num2 = stack2.pop();
//		for (int i = 0; i < check; i++)
//		{
//			stack1.push(stack2.pop());
//		}
//		stack2.push(num1);
//		stack2.push(num2);
//
//	}
//	cout << "STACK 2 " << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << stack2.pop();
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}