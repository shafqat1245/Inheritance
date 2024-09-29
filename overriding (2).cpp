#include<iostream>
using namespace std;
class parent {
protected:
int n;
parent( int p){
n=p;}
void show(){
cout << "n=" <<n<< endl;}
};
class child : public parent
{
private:
char ch;
public:
child(char c,int m):parent(m)
{
ch=c;
}
void show()
{
parent::show();
cout << "ch=" <<ch<<endl;}};
int main()
{
child b('@',100);
b.show();
}
