#include <iostream>

using namespace std;


void printarr(int somearr[])
{
    for(int i=0;i<10;i++)
    {
        if(somearr[i] != -1)
        {
            cout<<somearr[i]<<"\t";
        }
    }
}


int main()
{
    int rollno[10] = {1,2,3,4,5,-1,-1,-1,-1,-1};
    int ch,num,active,pos,count = 0;

    cout<<"Press 1 for deletion at First\n Press 2 for deletion at end\n Press 3 for deletion in between\n";
    cin>> ch;

    for(int i =0;i<10;i++)
    {
        if(rollno[i] != -1)
        {
            count++;
        }
    }

    printarr(rollno);
    cout<<endl;

    switch(ch){
        case 1:
            // shift all the elements to their right starting from last element
            for(int i= count-1;i>0;i--)
            {
                rollno[i+1] = rollno[i];
            }
            rollno[0] = -1;
            rollno[1] = -1;
            printarr(rollno); 
            break;
        case 2:
            rollno[count] = -1;
            
            break;
        case 3:
            cout<<"Enter index  : ";
            cin>>pos;
            cout<<endl;
            for(int i=pos;i<=8;i++)
            {
                rollno[i] = rollno[i +1]; //shift element left
            }
            
            
            printarr(rollno);
            break;

        default:
            cout<<"Invalid choice";            
    }
}