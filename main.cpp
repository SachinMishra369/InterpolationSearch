#include <iostream>
using namespace std;
void InterpolationSearch(int a[],int l,int r,int key)
{

int mid=l+(r-1-l)*(key-a[l])/(a[r-1]-a[l]);
   if(a[mid]==key)
  {
    cout<<"Found at position"<<mid+1;
   }
else
  {
    cout<<"\n404";
  }

}
int main() {
  int size;
  int key;
  cout<<"Enter Size:";
  cin>>size;
  int data[size];
  cout<<"\n Enter Data"<<endl;
  for(int i=0;i<size;i++)
  {
    cin>>data[i];
  }
  cout<<"\n Enter Data to be found:"<<endl;
  cin>>key;
 InterpolationSearch(data,0, size, key);

}