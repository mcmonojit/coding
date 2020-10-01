/*Display a Linked List*/
#include <bits/stdc++.h>
using namespace std;

//Basic structure of Nodes Of A Linked List
struct Node
{
	int data;
	struct Node *next;
}*start = NULL;

//Creaing Nodes of the Linked List
struct Node *create(struct Node *start, int n)
{
	struct Node *ptr, *new_node;
	int x;
	int p = 1;
	while (p <= n)
	{
		cout << "enter the " << p << " element " << endl;
		cin >> x;
		new_node = new(Node);
		new_node->data = x;
		if (start == NULL)
		{
			new_node->next = NULL;
			start = new_node;

		}
		else
		{
			ptr = start;
			while (ptr->next != NULL)
				ptr = ptr->next;
			ptr->next = new_node;
			new_node->next = NULL;
		}
		p++;
	}
	return start;

}

//Displaying the Linked List
void display(struct Node *start)
{
	struct Node *ptr;
	ptr = start;
	while (ptr != NULL)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
}


//main function
int main()
{
	int n;
	cout << "enter number of nodes" << endl;;
	cin >> n;
	start = create(start, n);
	display(start);

}

