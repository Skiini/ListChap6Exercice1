/* Author : Martins Filipe
 * Name : Remove from list
 * Date : 2016.11.30
 */

#include <list>
#include <iostream>


struct Enemy {
	unsigned int hp;
	unsigned int speed;
};




void remove_dead_enemies(std::list<Enemy>& enemies)
{
	//TODO: Remove enemies with hp == 0
	for (auto it = enemies.begin(); it != enemies.end(); ++it)
	{
		if ((*it).hp == 0)
		{
			enemies.erase(it++);  // alternatively, i = items.erase(i);
		}
	}
}
void show_enemies(std::list<Enemy>& enemies)
{
	std::cout << "Enemies: \n";
	for (Enemy e : enemies)
	{
		std::cout << e.hp << " " << e.speed << "\n";
	}
	std::cout << "\n";
}
int main() {
	std::list<Enemy> enemies = {
		{ 1U,2U },
		{ 3U,1U },
		{ 0U,1U },
		{ 3U,1U },
		{ 0U,1U },
		{ 4U,1U },

	};

	show_enemies(enemies);

	remove_dead_enemies(enemies);

	show_enemies(enemies);

	system("pause");

}

