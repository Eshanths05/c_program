
#include <stdio.h>
#include <string.h>
struct student

{

	int roll;
	int age;
	int pin;
};

int main()
{
	struct student esha={50,19,634117};
	struct student nisha={21,20,634118};
	struct student ravi={5,22,6341179};

		printf("%d %d %d\n",esha.roll,esha.age,esha.pin);
		printf("%d %d %d\n",nisha.roll,nisha.age,nisha.pin);
		printf("%d %d %d\n",ravi.roll,ravi.age,ravi.pin);




		return 0;
	}
