#include "stdafx.h"
#include <iostream>


using namespace std;
int main()
{
	int cnt = 100;
	while (cnt >= 100 && cnt <=999)
	{
		if(cnt % 2)
			cout << cnt << endl;
		cnt++;
	}
	return 0;
}

