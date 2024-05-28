#include <iostream>
#include <vector>
#include <time.h>
#include <conio.h>
#include <windows.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77


using namespace std;

int main()
{
#pragma region 기본 템플릿 라이브러리

#pragma region 선형 컨테이너
	
	// 데이터를 선형으로 저장하며, 특별한 제약이나 규칙이 없는 일반적인 컨테이너입니다. 

	
#pragma region Vector
	// std::vector<int> vector;
	// 
	//  vector.reserve(6);
	// 
	//  cout << "vector의 capacity 값 : " << vector.capacity() << endl;
	// 
	// vector.push_back(10); // [10]
	// vector.push_back(20); // [10][20]
	// vector.push_back(30); // [10][20][30]
	// vector.push_back(40); // [10][20][30][40]
	// 
	// vector.pop_back();  // [10][20][30]
	// 
	// vector.clear(); 
	// 
	// for (int i = 0; i < vector.size(); i++)
	// {
	// 	cout << "vector["<<i<<"]의 값 : " << vector[i] << endl;
	// }

#pragma endregion

#pragma region Rhythm Game
	vector<const char *> RhythmGame;

	RhythmGame.reserve(6);

	srand(time(NULL));

	

	int count = 4;
	
	for (int i = 0; i < count; i++)
	{
		int direction = rand() % 4;

		switch (direction)
		{
		case 0:
			RhythmGame.push_back("↑");
			break;
		case 1:
			RhythmGame.push_back("←");
			break;
		case 2:
			RhythmGame.push_back("→");
			break;
		case 3:
			RhythmGame.push_back("↓");
			break;
		}
	}

	for (const char * & element : RhythmGame)
	{
		cout << element << " ";
	}
	int health = 3;
	int key;
	const char* input = NULL;
	while (health > 0 )
	{
		if (_kbhit)
		{
			key = _getch();
		
			switch (key)
			{
			case 72:
				input = "↑";
				break;
			case 80:
				input = "↓";
				break;
			case 75:
				input = "←";
				break;
			case 77:
				input = "→";
				break;

			}
		}
		if (input == RhythmGame.back())
		{
			RhythmGame.pop_back();
		}
		else
		{
			health--;
		}

		
	}


	

#pragma endregion


#pragma endregion


#pragma endregion


	return 0;
}