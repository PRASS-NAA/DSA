#include <iostream>

using namespace std;


void printarr(int somearr[])
{
    for(int i=0;i<10;i++)
    {
        cout<<somearr[i];
    }
}


int main()
{
    int rollno[10] = {1,2,3,4,5,-1,-1,-1,-1,-1};
    int ch,num,active,pos,count = 0;

    cout<<"Press 1 for inserting at First\n Press 2 for Inserting at end\n Press 3 for insertion in between\n";
    cin>> ch;

    for(int i =0;i<10;i++)
    {
        if(rollno[i] != -1)
        {
            count++;
        }
    }

    switch(ch){
        case 1:
            cout<<"Enter Number : ";
            cin>>num;
            // shift all the elements to their right starting from last element
            for(int i= count-1;i>=0;i--)
            {
                rollno[i+1] = rollno[i];
            }
            rollno[0] = num;
            printarr(rollno); 
            break;
        case 2:
            cout<<"Enter Number : ";
            cin>>num;
            rollno[count] = num;
            count++;
            break;
        case 3:
            cout<<"Enter index  : ";
            cin>>pos;
            cout<<endl;
            cout<<"Enter Number : ";
            cin>>num;

            for(int i=8;i>=pos;i--)
            {
                rollno[i+1] = rollno[i];
            }
            rollno[pos] = num;
            printarr(rollno);
            break;

        default:
            cout<<"Invalid choice";            
    }
}