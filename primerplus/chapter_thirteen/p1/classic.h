#ifndef CLASSIC_H_
#define CLASSIC_H_

class Cd
{
	private:
		char performers[50];
		char label[20];
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
		char works[50];
	public:
		Classic(char * ws, char * s1, char * s2, int n, double x);
		Classic(const Classic & cs);
		Classic();
		virtual ~Classic();
		virtual void Report() const;
		virtual Classic & operator=(const Classic & cs);

};





#endif
