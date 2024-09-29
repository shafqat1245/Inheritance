#include<iostream>
using namespace std;
class student{
protected:
int roll_number;
public:
void get_number(int a)
{
roll_number=a;
}
void put_number(void)
{
cout << "roll_number" <<roll_number<< endl;
}
};
class test : public student {
protected:
float part1,part2;
public:
void get_marks(float x,float y)
{
part1=x;
part2=y;
}
void put_marks()
{
cout << "marks obtained=" << endl;
cout << "part1 =" <<part1<< endl;
cout << "part2" <<part2<<endl;
}
};
class sports{
protected:
float score;
public:
void get_score(float x)
{
score=x;
}
void put_score(void)
{
cout << "sports wt:" << score<<"\n\n";
}
};
class result:public test ,public sports{
float total;
public:
void display(void);
};
void result:: display (void)
{total=part1+part2+score;
put_number();
put_marks();
put_score();
cout << "total score is=" << total<<endl;
};
int main()
{
result stu;
stu.get_number(23);
stu.get_marks(45.7,65.4);
stu.get_score(6.0);
stu.display();

    return 0;
}