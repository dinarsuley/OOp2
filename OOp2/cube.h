#include "square.h"
class cube : public square
{
private:
	int h;
	int get_volume();
public:
	cube(square& obj, int h_vale);
	cube(square& obj);
	cube(const cube& obj);
	~cube();
	int set_h(int h_value);
	void get_info();
};

