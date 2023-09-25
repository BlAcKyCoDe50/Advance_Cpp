#include <iostream>
using namespace std;
int b;
const int n=b;    //constant variables because array size only take constant 
//variables means that is not changed and fixed 
// int Size;
int arr[n];
//global variables
void Size(b){
    cout<<"\nEnter the Size of an Array:- ";
    cin>>b;
}






void insert(int s)
{
     for (int i = 0; i < s; i++)
    {
        cout << "Enter the Element " << (i+1) << ": ";
        cin >> arr[i];
        cout << "Element " << (i+1) << " inserted." << endl;
    }
}

void traversal(){
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==0){
            cout<<"\nEmpty Space ";
        }
        else
        cout<<"\nElement "<<i<<" = "<<""<<arr[i];
    }
    
}

void Delete(int el){
  for (int i = 0; i < 10; i++)
  {
    if (arr[i]==el)
    {
        arr[i]=arr[i+1];
    }
    n--;

    
  }
  
}

int main()
{
    // cout<<"\nEnter the Size of an Array:- ";
    // cin>>n;

    Size(int n);
    int choice;

    while (1)
    {
        cout<<"\n";
        cout << "\nPress 1 for Inserting element";
        cout << "\nPress 2 for inserting at given index";
        cout << "\nPress 3 for Deleting the element";
        
        cout << "\nPress 4 for Deleting from given index";
        cout << "\nPress 5 for Traversal of an Array";
        cout << "\nPress 6 for updating the element of given index";
        cout << "\nPress 7 for searching of an element";
        cout << "\nPress 8 for Exit..!";
        cout<<  "\nPress 9 for Sorting of an Array";

        cout<<"\n";
        cout << "\nEnter the choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                int s;
                cout<<"\nHow many elements you want to store??";
                cin>>s;
                insert(s);
                break;

            case 2:
            //    insertAtIndex()
                break;

            case 3:
                 int el;
                cout<<"Enter the Element you want to Delete:- ";
                cin>>el;      
                Delete(el);
                break;

            case 4:
                // delete_at_index();
                break;

            case 5:
                traversal();
                break;

            case 6:
                // update_at_index();
                break;

            case 7:
                // search();
                break;

            default:
                cout << "\nExiting.....!!!" << endl;
                exit(0);
                return 0;
        }
    }

    return 0;
}
