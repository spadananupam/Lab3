#include <iostream>
using namespace std;
int main(){
	float p,c,m,b,cs,t,pc;
	cout <<"Please enter the marks obtained in physics, chemistry , maths , biology and computer\n";
	cin >>p>>c>>m>>b>>cs;
	cout << "Please enter the total marks of each subject\n";
	cin >>t;
	pc=((p+c+m+b+cs)/(5*t))*100;
	cout <<"The percentage obtained is, "<<pc <<" %"<<endl;
	if (pc>=90){cout <<"The grade is A";
	}
	else if (pc>=80){cout << "The grade is B\n";}
	else if (pc>=70){cout << "The grade is C\n";}
	else if (pc>=60){cout << "The grade is D\n";}
	else if (pc>=40){cout << "The grade is E\n";}
	else {cout << "You secured grade F\n";}

	return 0;
}
