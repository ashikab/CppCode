//							.......Linked List Basics.......
//****************** Insert(Begining, at Specified position and at End) *********************
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//struct node {
//	int data;
//	struct node* next;
//};
//
//struct node* BuildInitialList(struct node* head, struct node* second, struct node* third) {
//	head->data = 1; // setup first node
//	head->next = second; // note: pointer assignment rule
//
//	second->data = 2; // setup second node
//	second->next = third;
//
//	third->data = 3; // setup third link
//	third->next = NULL;
//
//	return head;
//}
//
//struct node* addAtBegining(struct node* head)
//{
//	int num;
//	cout << "Enter Number: ";
//	cin >> num;
//
//	struct node* temp=(struct node *)malloc(sizeof(struct node)); 
//	temp->data = num;
//
//	if (head == NULL)  //List is Empty
//	{
//		head = temp;
//		head->next = NULL;
//	}
//	else  
//	{  
//		temp->next = head;
//		head = temp;
//	}
//	return head;
//}
//
//struct node* deleteAtBegining(struct node* head)
//{
//	struct node* temp=(struct node *)malloc(sizeof(struct node)); 
//
//	if (head == NULL)  //List is Empty
//	{
//		cout << "It is a empty List" << endl;
//	}
//	else  
//	{  
//		temp = head->next;
//		free(head);
//	}
//	return temp;
//}
//
//void deleteByDataMatching(struct node* head, int len)
//{
//	int data, currentPosition = 1;
//	bool nodeFound = false;
//	cout << "Data: ";
//	cin >> data;
//
//	struct node* temp2 = (struct node *)malloc(sizeof(struct node));
//	struct node* temp3 = (struct node *)malloc(sizeof(struct node));
//
//	temp2 = head;
//	temp3 = head;
//
//	while ((nodeFound != true) && (temp2 != NULL))
//	{
//		
//		if(temp2->next->data == data)
//		{
//			nodeFound = true;
//		}
//		else
//		{
//			temp2 = temp2->next;
//			temp3 = temp3->next;
//		}
//			
//	}
//
//	if(nodeFound == false)
//	{
//		cout << "Node Not Found..." << endl;
//	}
//	else
//	{
//		temp2 = temp2->next; // Ei line ta eikhane na diya 1 line namaile keyamot hoiya jai... bohut kosto koira ber kora hoise.
//		temp3->next = temp3->next->next;
//		free(temp2);
//	}
//
//}
//
//void addAtSpecifiedPosition(struct node* head, int len)
//{
//	int num, position;
//	cout << "Enter Number and position respectively: ";
//	cin >> num >> position;
//
//	if(position > len || position <= 0)
//		cout << "Invalid Position" << endl;
//	else
//	{
//		int currentPosition = 0;
//		struct node* temp1 = (struct node *)malloc(sizeof(struct node)); // will contain new node
//		struct node* temp2 = (struct node *)malloc(sizeof(struct node)); // will contain node just before specified node
//		struct node* temp3 = (struct node *)malloc(sizeof(struct node)); // will contain node just after specified node
//
//		temp1->data = num;
//		temp2 = head;
//		temp3 = head;
//
//		while(currentPosition != (position - 1)) // fetch the node just before specified node
//		{
//			temp2 = temp2->next;
//			temp3 = temp3->next;
//			currentPosition++;
//		}
//
//		temp3 = temp3->next; // goes to next node
//		temp1->next = temp3; // new node link with next node
//		temp2->next = temp1; // prev node link with new node
//	}
//}
//
//void addAtEnd(struct node* head)
//{
//	int num;
//	cout << "Enter Number: ";
//	cin >> num;
//
//	struct node* temp1 = (struct node *)malloc(sizeof(struct node));
//	struct node* temp2 = (struct node *)malloc(sizeof(struct node));
//
//	temp1->data = num;
//	temp2 = head;
//
//	if(head == NULL)	//List is Empty
//	{
//		head = temp1;
//		head->next = NULL;
//	}
//	else  
//	{  
//		while(temp2->next != NULL)
//		{
//			temp2 = temp2->next;
//		}
//
//		temp1->next = NULL;
//		temp2->next = temp1;
//	}
//}
//
//int length(struct node* head)
//{
//	struct node* current = head;
//	int count = 0 ;
//	while (current != NULL) {
//		count++;
//		current = current->next;
//	}
//	return count;
//}
//
//void showList(struct node* head)
//{
//	struct node* current = head;
//	while (current != NULL)
//	{
//		cout << current->data << " -> ";
//		current = current->next;
//	}
//	cout << "NULL" << endl;
//}
//
//int main()
//{
//	struct node* head = (struct node *)malloc(sizeof(struct node));
//	struct node* first = (struct node *)malloc(sizeof(struct node));
//	struct node* second = (struct node *)malloc(sizeof(struct node));
//	struct node* third = (struct node *) malloc(sizeof(struct node));
//
//	int input, len;
//	head = BuildInitialList(first, second, third);
//	showList(head);
//
//	cout << "Press 1 if you want to add a node at begining" << endl;
//	cout << "Press 2 if you want to add a node at End" << endl;
//	cout << "Press 3 if you want to add a node in a Specified position" << endl;
//	cout << "Press -1 if you want to delete a node" << endl;
//	cout << "Press -2 if you want to delete a node from begining" << endl;
//	cout << "Press 0 if you want to add a node at Exit" << endl;
//
//	while(true)
//	{
//		cin >> input;
//
//		if(input == -1)
//		{
//			len = length(head);
//			deleteByDataMatching(head, len);
//			len = length(head);
//			cout << "Length: " << len << endl;
//			showList(head);
//		}
//		else if(input == -2)
//		{
//			head = deleteAtBegining(head);
//			len = length(head);
//			cout << "Length: " << len << endl;
//			showList(head);
//		}
//		else if(input == 1)
//		{
//			head = addAtBegining(head);
//			len = length(head);
//			cout << "Length: " << len << endl;
//			showList(head);
//		}
//		else if(input == 2)
//		{
//			addAtEnd(head);
//			len = length(head);
//			cout << "Length: " << len << endl;
//			showList(head);
//		}
//		else if(input == 3)
//		{
//			len = length(head);
//			addAtSpecifiedPosition(head, len);
//			len = length(head);
//			cout << "Length: " << len << endl;
//			showList(head);
//		}
//		else if(input == 0)
//		{
//			break;
//		}
//	}
//	return 0;
//}



//....Access Prvate Variables....

//#include <iostream>
//using namespace std;
//
//class Box
//{
//	private:
//		double length;
//		double breadth;
//		double height;
//	public:
//		double volume(double l, double b, double h)
//		{
//			double volume;
//			length = l;
//			breadth = b;
//			height = h;
//			volume = length * breadth * height;
//			return volume;
//		}
//};
//
//int main( )
//{
//	Box Box1;        // Declare Box1 of type Box
//	Box Box2;        // Declare Box2 of type Box
//	double volume = 0.0;     // Store the volume of a box here
//
//	// box 1 specification
//	volume = Box1.volume(5.0,6.0,2.0); 
//	cout << "Volume of Box1 : " << volume <<endl;
//
//	// volume of box 2
//	volume = Box1.volume(5.7,6.8,2.4); 
//	cout << "Volume of Box1 : " << volume <<endl;
//	return 0;
//}


//....Understanding Copy Constructor....
//#include <iostream>
//using namespace std;
//
//class Line
//{
//   public:
//      int getLength( void );
//      Line( int len );          // simple constructor
//      Line( const Line &obj);	// copy constructor
//      ~Line();                  // destructor
//
//   private:
//      int *ptr;
//};
//
//Line::Line(int len)
//{
//    cout << "Normal constructor allocating ptr" << endl;
//    ptr = new int;
//    *ptr = len;
//}
//
//Line::Line(const Line &obj)
//{
//    cout << "Copy constructor allocating ptr." << endl;
//    ptr = new int;
//   *ptr = *obj.ptr; // copy the value
//}
//
//Line::~Line(void)
//{
//    cout << "Freeing memory!" << endl;
//    delete ptr;
//}
//int Line::getLength( void )
//{
//    return *ptr;
//}
//
//void display(Line obj)
//{
//   cout << "Length of line : " << obj.getLength() <<endl;
//}
//
//int main( )
//{
//   Line line1(10);
//
//   Line line2 = line1; // This also calls copy constructor
//
//   display(line1);	// This also calls copy constructor
//   display(line2);	// This also calls copy constructor
//
//   return 0;
//}


//... Pointer to C++ classes ...
//#include <iostream>
//using namespace std;
//
//class Box
//{
//   public:
//      Box(double l=2.0, double b=2.0, double h=2.0)
//      {
//         cout <<"Constructor called." << endl;
//         length = l;
//         breadth = b;
//         height = h;
//      }
//      double Volume()
//      {
//         return length * breadth * height;
//      }
//   private:
//      double length;     // Length of a box
//      double breadth;    // Breadth of a box
//      double height;     // Height of a box
//};
//
//int main(void)
//{
//   Box Box1(3.3, 1.2, 1.5);    // Declare box1
//   Box Box2(8.5, 6.0, 2.0);    // Declare box2
//   Box *ptrBox;                // Declare pointer to a class.
//
//   ptrBox = &Box1;
//
//   cout << "Volume of Box1: " << ptrBox->Volume() << endl;
//
//   ptrBox = &Box2;
//
//   cout << "Volume of Box2: " << ptrBox->Volume() << endl;
//  
//   return 0;
//}

//	Operator Overloading in C++ (FROM http://www.thegeekstuff.com/2013/09/cpp-operator-overloading/)
//#include <iostream>
//using namespace std;
//
//class example
//{
//public:
//	int a;
//	int b;
//	example operator+(const example& obj);
//	example operator-(const example& obj);
//	void operator=(const example& obj);
//};
//
//void example::operator=(const example& obj)
//{
//	(*this).a = obj.a;
//	(*this).b = obj.b;
//
//	return;
//}
//
//example example::operator+(const example& objRighToOperator) //This is the obj right to +
//{
//	example tmp_obj = *this; //This is the obj left to +
//	tmp_obj.a = tmp_obj.a + objRighToOperator.a;
//	tmp_obj.b = tmp_obj.b + objRighToOperator.b;
//	return tmp_obj;
//}
//
//example example::operator-(const example& objRighToOperator)
//{
//	example tmp_obj = *this;	//This is the obj left to -
//	tmp_obj.a = tmp_obj.a - objRighToOperator.a;
//	tmp_obj.b = tmp_obj.b - objRighToOperator.b;
//	return tmp_obj;
//}
//
//int main(void)
//{
//	example obj1, obj2, obj3, obj4, obj5;
//
//	obj1.a = 1;
//	obj1.b = 1;
//
//	obj2.a = 2;
//	obj2.b = 2;
//
//	obj3.a = 0;
//	obj3.b = 0;
//
//	obj3 = obj1 + obj2;
//
//	obj4 = obj1 - obj2;
//	obj5 = obj2 - obj1;
//
//	cout << obj3.a << "  " << obj3.b << "\n";
//	cout << obj3.a << "  " << obj3.b << "\n";
//	cout << obj3.a << "  " << obj3.b << "\n";
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Base
//{
//public:
//	virtual void show()
//	{
//		cout << "From Base Class\t";
//	}
//};
//
//class Derived: public Base
//{
//public:
//	void show()
//	{
//		cout << "From Derived Class\t";
//	}
//};
//
//int main(void)
//{
//   Base *b;
//   Derived d;
//   b = &d;
//   b->show();
//   d.show();
//   return 0;
//}