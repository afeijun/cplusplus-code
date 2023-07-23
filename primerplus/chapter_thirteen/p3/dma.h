// inheritance and dynamic memory allocation
#ifndef DMA_H_
#define DMA_H_
#include <iostream>

// base class Using DMA
class ABC
{
	private:
		char * label;
		int rating;
	public:
		ABC(const char * l = "null", int r = 0);
		ABC(const ABC & ab);
		virtual ~ABC();
		ABC & operator=(const ABC & ab);
		friend std::ostream & operator<<(std::ostream & os, const ABC & ab);
		virtual void View();
};

// Base Class Using DMA
class baseDMA : public ABC
{
	public:
		baseDMA(const char * l = "null", int r = 0) : ABC(l, r) {}
		baseDMA(const baseDMA & rs) : ABC(rs) {}
		virtual ~baseDMA();
		virtual void View();
};

// derived class without DMA
class lacksDMA : public ABC
{
	private:
		enum {COL_LEN = 40};
		char color[COL_LEN];
	public:
		lacksDMA(const char * c = "blank", const char * l = "null", int r = 0);
		lacksDMA(const char * c, const ABC & rs);
		friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);
		virtual void View();
};

// derived class with DMA
class hasDMA : public ABC
{
	private:
		char * style;
	public:
		hasDMA(const char * s = "none", const char * l = "null", int r = 0);
		hasDMA(const char * s, const ABC & rs);
		hasDMA(const hasDMA & hs);
		~hasDMA();
		hasDMA & operator=(const hasDMA & rs);
		friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
		virtual void View();
};

#endif
