#include <iostream>
#include <vector>
#include <random>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <Windows.h>


using namespace std;


int main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> distribution(100, 999);
	int computer_num = distribution(gen);

	int user_num;

	int computer_num_arr[3] = { computer_num / 100, computer_num % 100 / 10, computer_num % 10 };

	int guessed_nums = 0;
	int guessed_nums_ord = 0;


	while (true) {
		int guessed_nums = 0;
		int guessed_nums_ord = 0;

		cout << "ваш вариант >>> ";
		cin >> user_num;
		int user_num_arr[3] = { user_num / 100, user_num % 100 / 10, user_num % 10 };


		if (user_num_arr[0] == computer_num_arr[0])
			guessed_nums += 1;
		else if (user_num_arr[1] == computer_num_arr[0])
			guessed_nums += 1;
		else if (user_num_arr[2] == computer_num_arr[0])
			guessed_nums += 1;
		if (user_num_arr[0] == computer_num_arr[1])
			guessed_nums += 1;
		else if (user_num_arr[1] == computer_num_arr[1])
			guessed_nums += 1;
		else if (user_num_arr[2] == computer_num_arr[1])
			guessed_nums += 1;
		if (user_num_arr[0] == computer_num_arr[2])
			guessed_nums += 1;
		else if (user_num_arr[1] == computer_num_arr[2])
			guessed_nums += 1;
		else if (user_num_arr[2] == computer_num_arr[2])
			guessed_nums += 1;

		if (user_num_arr[0] == computer_num_arr[0])
			guessed_nums_ord += 1;
		if (user_num_arr[1] == computer_num_arr[1])
			guessed_nums_ord += 1;
		if (user_num_arr[2] == computer_num_arr[2])
			guessed_nums_ord += 1;


		if (user_num == computer_num)
			break;
		else
			cout << " Угадано: " << guessed_nums << endl;
			cout << " На своём месте: " << guessed_nums_ord << endl;
			cout << endl;

	}
	cout << "\nВы победили";

	return 0;
}