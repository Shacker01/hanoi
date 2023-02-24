#include <iostream>
using namespace std;
void TOH(int d, char t1, char t2, char t3)
{
    if(d==1)
    {
        cout<<"\nShift top disk from tower"<<t1<<" to tower"<<t3;
        return;
    }
    TOH(d-1, t1,t3,t2);
    cout<<"\nShift top disk from tower"<<t1<<" to tower "<<t3;
    TOH(d-1,t3,t2,t1);
}
int main()
{
    int disk;
    cout<<"Enter the number of disks: ";
    cin>>disk;
    if(disk<1)
    cout<<"There are no disks to shift!\n";
    else
    cout<<"There are "<<disk<<" disks in tower 1\n";

    TOH(disk, '1','2','3');
    cout<<"\n\n"<<disk<<" disks in tower 1 are shifted to tower 3\n";

    return 0;
}
