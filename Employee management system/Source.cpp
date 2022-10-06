#include <iostream>
using namespace std;


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
		int Eid; 
	
		
		if (head == NULL) {
			cout << "Error: Linked list is empty" << endl;

		}
		else {
			cout << "Enter the Id of an Employee you are looking for " << endl;
			cin >> Eid;
			Employee_Node* ptr = head; 
		
			while (head != NULL) {
				if (ptr->employeeId== Eid) {

					cout << "Record Found" << endl; 
					cout << "Employee's first Name : " << ptr->firstName << endl;
					cout << "Employee's last Name :" << ptr->LastName << endl; 
					cout << "Employee id : " << ptr->employeeId << endl; 
				}
			}
		}
	}
};


int main(void) {




}
