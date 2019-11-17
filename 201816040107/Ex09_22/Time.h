class Time
{
	public:
		explicit Time(int=0,int=0,int=0);
		Time(time_t);//声明用time函数初始化的构造函数； 
		Time(int);//声明用总秒数初始化的构造函数； 
		void settime(int,int,int);
		void sethour(int);
		void setmin(int);
		void setsec(int);
		void tick();//声明tick函数； 
		
		unsigned int gethour() const;
		unsigned int getmin() const;
		unsigned int getsec() const;
		
		void printstandard() const;
		void printuniversal() const;
	private:
		int hour;
		int min;
		int sec;
};
