// using STL functions
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

struct Review{
	string title;
	int rating;
	double price;
};

bool operator<(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool ratingascend(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool ratingdescend(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool priceascend(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool pricedescend(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool FillReview(Review & rr);
void ShowReview(const shared_ptr<Review> & rr);

int main(void)
{
	vector<shared_ptr<Review> > books;
	Review temp;
	while (FillReview(temp))
		books.push_back(shared_ptr<Review>(new Review(temp)));
	vector<shared_ptr<Review>> bt(books);
	if (books.size() > 0)
	{
		cout << "Thank you. You entered the following " << books.size() << endl;
		char selection;
		cout << "Please enter show way (o: display in original order, a: display in alpha order, \n"
			"R: display in ascending order of rating, r: display in descending order of rating,\n"
			"P: display in ascending order of price, p: display in descending order of price, q to quit\n";
		cout << "please enter your selection: ";
		while (cin >> selection && selection != 'q')
		{
			cout << "Rating\t\tBook    \t\tPrice\n";
			switch(selection)
			{
				case 'o':
					for_each(books.begin(), books.end(), ShowReview);
					break;
				case 'a':
					sort(bt.begin(), bt.end());
					for_each(bt.begin(), bt.end(), ShowReview);
					break;
				case 'R':
					sort(bt.begin(), bt.end(), ratingascend);
					for_each(bt.begin(), bt.end(), ShowReview);
					break;
				case 'r':
					sort(bt.begin(), bt.end(), ratingdescend);
					for_each(bt.begin(), bt.end(), ShowReview);
					break;
				case 'P':
					sort(bt.begin(), bt.end(), priceascend);
					for_each(bt.begin(), bt.end(), ShowReview);
					break;
				case 'p':
					sort(bt.begin(), bt.end(), pricedescend);
					for_each(bt.begin(), bt.end(), ShowReview);
					break;
			}
			bt = books;
			cout << "please enter your selection: ";
		}	
	}
	else
		cout << "No entries. ";
	cout << "Bye.\n";
	return 0;
}

bool operator<(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
	if (r1->title < r2->title)
		return true;
	else
		return false;
}

bool ratingascend(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
	if (r1->rating < r2->rating)
		return true;
	else 
		return false;
}
bool ratingdescend(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
	if (r1->rating > r2->rating)
		return true;
	else
		return false;
}

bool priceascend(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
	if (r1->price < r2->price)
		return true;
	else
		return false;
}
bool pricedescend(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)
{
	if (r1->price > r2->price)
		return true;
	else
		return false;
}

bool FillReview(Review & rr)
{
	std::cout << "Enter book title (quit to quit): ";
	std::getline(std::cin, rr.title);
	if (rr.title == "quit")
		return false;
	std::cout << "Enter book rating: ";
	std::cin >> rr.rating;
	if (!std::cin)
		return false;
	while (std::cin.get() != '\n')
		continue;
	std::cout << "Enter book price: ";
	std::cin >> rr.price;
	if (!std::cin)
		return false;
	while (std::cin.get() != '\n')
		continue;
	return true;
}

void ShowReview(const shared_ptr<Review> & rr)
{
	std::cout << rr->rating << "\t\t" << rr->title << "    \t\t" << rr->price << std::endl;
}
