#include <iostream>
using namespace std;
#include <cstdlib>
// Jignesh Patel 

class Employee_Node {
public:

	string firstName;
	string LastName;
	int employeeId;
	//int salary;
	Employee_Node* next;

}; 
class Linkedlist {
public :

	Employee_Node* head = NULL;
	void Insert() {
		string Fname; 
		string Lname;
		int Eid; 
		int pay; 
		Employee_Node* new_node = new Employee_Node;
		cout << "Enter the first Name : " << endl;
		cin >> Fname; 
		cout << "Enter the last Name : " << endl; 
		cin >> Lname; 
		cout << "Enter the Employee id of Employee" << endl; 
		cin >> Eid; 
           
		new_node->firstName = Fname;
		new_node->LastName = Lname;
		new_node->employeeId = Eid; 
		// new_node->salary = pay; 
		new_node->next = NULL; 
		if (head == NULL) {
			head = new_node; 

		}
		else {
			Employee_Node* ptr = head; 
			while (ptr->next != NULL) {
				ptr = ptr->next; 

			}
			ptr->next = new_node; 

		}
		cout << "Node inserted sucessfully " << endl;


	}

	void searchRecord() {
		int Eno =0 ;

		int i =0;


		if (head == NULL) {
			cout << "Error: Linked list is empty" << endl;

		}
		else {
			cout << "Enter the Id of an Employee you are looking for " << endl;
			cin >> Eno;
			Employee_Node* ptr = head;

			while (ptr!= NULL) {
				if (Eno == ptr->employeeId) {

					cout << "Record Found" << endl;
					cout << "Employee's first Name : " << ptr->firstName << endl;
					cout << "Employee's last Name :" << ptr->LastName << endl;
					cout << "Employee id : " << ptr->employeeId << endl;
					i++;

				}
				ptr = ptr->next; 

			}
			if (i == 0) {
				cout << "Error , Eid cannot find";

			}

		}

	}
	int count_Nodes() {
		if (head == NULL) {
			cout << "Linked list empty "; 

		}
		int i = 0; 
		Employee_Node* ptr = head; 
		if (ptr != NULL) {
			i++; 
			ptr = ptr->next; 


		}
	
		return i; 
	}

};


int main(void) {
	Linkedlist obj; 
	int choice; 
	
	cout << "Welcome to the employee management system " << endl;
	cout << "Enter how many Employee Records you want to insert : " << endl; 
	cin >> choice; 
	for (int i = 0; i < choice; i++) {
		obj.Insert(); 

	}
	cout << "Total number of  Employees registered in a record is " << obj.count_Nodes() << endl;
     


	cout <<"To find an Employee 's record Enter the Employee id of an employee "<<endl; 
	obj.searchRecord(); 


	}

