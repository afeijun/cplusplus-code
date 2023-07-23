#ifndef CLASSIC_H_
#define CLASSIC_H_

class Cd
{
	private:
		char * performers;
		char * label;
		int selections;
		double playtime;
	public:
		Cd(char * s1, char * s2, int n, double x);
		Cd(const Cd & d);
		Cd();
		virtual ~Cd();
		virtual void Report() const;
		virtual Cd & operator=(const Cd & d);
};

class Classic : public Cd
{
	private:
		char * works;
	public:
		Classic(char * ws, char * s1, char * s2, int n, double x);
		Classic(const Classic & cs);
		Classic();
		virtual ~Classic();
		virtual void Report() const;
		virtual Classic & operator=(const Classic & cs);

};





#endif
