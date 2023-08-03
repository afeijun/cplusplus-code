// TV and Remote classes
#ifndef TV_H_
#define TV_H_
#include <iostream>
class Remote;
class Tv
{
	public:
		friend class Remote;
		enum {Off, On};
		enum {MinVal, MaxVal = 20};
		enum {Antenna, Cable};
		enum {TV, DVD};
		enum {Routine, Interaction};

		Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV){}
		void onoff() {state = (state == On) ? Off : On;}
		bool ison() const {return state == On;}
		bool volup();
		bool voldown();
		void chanup();
		void chandown();
		void set_mode() {mode = (mode == Antenna)? Cable : Antenna;}
		void set_input() {input = (input == TV)? DVD : TV;}
		void settings() const;
		void set_rstate(Remote & r);
	private:
		int state;         // on or off
		int volume;        // assumed to be digitized
		int maxchannel;    // maximum number of channels
		int channel;       // current channel setting
		int mode;          // broadcast or cable
		int input;         // TV or DVD
};

class Remote
{

	private:
		int mode;      // controls TV or DVD
		int rstate;    // Routine or Interaction
	public:
		friend class Tv;
		Remote(int m = Tv::TV, int r = Tv::Routine) : mode(m), rstate(r) {}
		bool volup(Tv & t) {return t.volup();}
		bool voldown(Tv & t) {return t.voldown();}
		void onoff(Tv & t) {t.onoff();}
		void chanup(Tv & t) {t.chanup();}
		void chandown(Tv & t) {t.chandown();}
		void set_chan(Tv & t, int c) {t.channel = c;}
		void set_mode(Tv & t) {t.set_mode();}
		void set_input(Tv & t) {t.set_input();}
		void show_rstate() const {std::cout << "Rstate: " << rstate << std::endl;}
		void set_rstate() {rstate = (rstate == Tv::Routine) ? Tv::Interaction : Tv::Routine;}
};

#endif
