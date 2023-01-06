#include <iostream>

using namespace std;

struct Animal
{
	char	name[30];
	int	age;
	int	health;
	int	food;
	int	clean;
};

void	play(struct Animal* pet) {
	cout << "name : ";
	cin >> pet->name;
	cout << "age : ";
	cin >> pet->age;
	cout << "health : ";
	cin >> pet->health;
	cout << "food : ";
	cin >> pet->food;
	cout << "clean : ";
	cin >> pet->clean;
}

void	show_stat(struct Animal* pet) {
	cout << "name : ";
	cout << pet->name << endl;
	cout << "age : ";
	cout << pet->age << endl;
	cout << "health : ";
	cout << pet->health << endl;
	cout << "food : ";
	cout << pet->food << endl;
	cout << "clean : ";
	cout << pet->clean << endl;
}

int	main() {
	struct Animal* list[30];
	int	pet_num;
	int	i;
	int	quit;

	quit = 0;
	pet_num = 0;
	for(i=0; i < 30; i++)
	{
		list[i] = new struct Animal;
		cout << "Create your pet." << endl;
		play(list[i]);
		while (1)
		{
			cout << "Pet number(-1 : quit) to know : ";
			cin >> pet_num;
			if (pet_num == -1)
			{
				quit = 1;
				break;
			}
			else if (pet_num > i)
				cout << "This pet didn't created yet." << endl;
			else
				break;
		}
		if (quit)
			break;
		show_stat(list[pet_num]);
	}
	for (int j=0; j < i; j++)
	{
		delete list[j];
	}
	return 0;
}
