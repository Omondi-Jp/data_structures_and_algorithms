#include <iostream>#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class students{
	private:
		int scores[5];
	public:
		int size=5;
		void insert()
		{
			for(int i = 0; i<size; i++)
			{
				cout<<"Enter score: ";
				cin>>scores[i];
			}
		}
		void display()
		{
			
			for(int i = 0; i<size; i++)
			{
				cout<<scores[i]<<"\n";
		
			}
		}
		int search()
		{
			int num;
			cout<<"\n enter a number to serach for: ";
			cin>>num;
			
			for (int i=0; i<size; i++)
			{
				if (scores[i]==num)
				{
					cout<<"\n the number is found: ";
					return 0;
				}
				else
				{
					cout<<"\n the number is not found: ";
					return 0;
				}
			}
				
		}
		void del()
		{
			int num;
			cout<<"\n enter a number to delete: ";
			cin>>num;
			int i=0;
			for (i=0; i<size; i++)
			{
				if (scores[i]==num)
					break;
			}
			if (i==5)
			{
				cout<<"\n the number is not found: ";
			}
			else
			{
				for (int a=i; a<5; a++)
				{
					scores[a]=scores[a+1];
					cout<<"\n number deleted!\n";
					size = size-1;
				}
			}
		}
		
};
int main() {
	students s1;
	s1.insert();
	s1.display();
	s1.search();
	s1.del();
	s1.display();
	
}
