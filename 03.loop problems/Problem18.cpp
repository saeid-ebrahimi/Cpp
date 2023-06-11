#include "stdafx.h"
#include <iostream>


using namespace std;
int main()
{
	int cnt = 1000;
	while (cnt >= 1000 && cnt <=9999)
	{
		if(cnt % 7 ==0)
			if(cnt % 3)
				cout << cnt << endl;
		cnt++;
	}
	return 0;
}

