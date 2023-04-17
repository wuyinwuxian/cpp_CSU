#include <iostream>
using namespace std;

class Watch
{
	private:
    	int h, m, s;
	public:
    	void SetTime(int hh, int mm, int ss)
		{
        	h = hh; m = mm; s = ss;
    	}
    	void ShowTime( )
    	{
        	cout << h << ":" << m << ":" << s << endl;
    	}
};

int main()
{
    Watch MyWatch,*YourWatch;
    cout<<sizeof(MyWatch) <<endl;
    cout<<sizeof(YourWatch) <<endl;
    MyWatch.SetTime(10,50,30);
    MyWatch.ShowTime();
    YourWatch = &MyWatch;
    (*YourWatch).SetTime(11,40,20);
    //(*YourWatch).ShowTime();
    YourWatch->ShowTime();
} 

