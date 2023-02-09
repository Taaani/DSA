#include "iostream"
using namespace std;
struct node
{
	int info;
	node *link;
};
class linklist
{
	private : 
	node *start, *temp, *cur;
	public:
		linklist()
		{
			start=NULL;
			
		}
		void addNode(int n)
		{
			if(start==NULL)
			{
				start=new node();
				start->info=n;
				start->link=NULL;
			}
			else
			{
				cur=start;
				while(cur->link!=NULL)
				cur=cur->link;
				
				temp=new node();
				temp->info=n;
				temp->link=NULL;
				cur->link = temp;
				
			}
		}
		void show()
		{
			cur=start;
			while(cur->info!=NULL)
			{
				cout<<cur->info<<endl;
				cur=cur->link;
			}
		}
};
int main()
{
	int num;
	linklist obj;
	for(int i=0 ; i<5; i++)
	{
		cout<<"enter node info ";
		cin>>num;
		obj.addNode(num);
		
	}
	cout<<"linklist values are \n";
	obj.show();
	return 0;
}
