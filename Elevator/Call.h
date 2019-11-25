#pragma once

enum directions { down = -1, indiff = 0, up = 1 };

struct Call {

	unsigned int FromFloor;
	unsigned int TargetFloor;
	directions direction = indiff;

};

directions getCallDir(Call call);