
#include "Tests.h"
#include <../ThirdParty/mystl/Log.h>
#include <Common/Common.h>

#include <vector>

namespace ExampleTest {
	void main()
	{
		vector<int> vArr{ GetRandom(0, 10), GetRandom(0, 10), GetRandom(0, 10), GetRandom(0, 10), GetRandom(0, 10) };
		LOG("vArr: {}", vArr);
	}
}
