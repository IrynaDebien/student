#include "student.h"

int main()
{

	Student st1;



	//   Student student("John", "Smith", 25);	
	//   student.Show();

	   //Student student2("Oleg", "Popov", 19);
	   //student2.Show();


	   //Student mas[2]{ student,student2 };
	Student mas[2]{
		{ "John", "Smith", 25 },
		{ "Oleg", "Popov", 19 }
	};
	for (int i = 0; i < 2; ++i)
	{
		mas[i].Show();
	}

	cout << "Total number of students: " << Student::getCount() << endl;

	return 0;
}