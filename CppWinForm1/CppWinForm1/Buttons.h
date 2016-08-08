#pragma once
using namespace System::Windows::Forms;
ref class Buttons
{
public:
	bool X_turn = false;
	bool x1 = false;
	bool x2 = false;
	bool x3 = false;
	bool x4 = false;
	bool x5 = false;
	bool x6 = false;
	bool x7 = false;
	bool x8 = false;
	bool x9 = false;

	bool o1 = false;
	bool o2 = false;
	bool o3 = false;
	bool o4 = false;
	bool o5 = false;
	bool o6 = false;
	bool o7 = false;
	bool o8 = false;
	bool o9 = false;

	bool check_win(bool  x_wins) {
		if ((this->x1 && this->x2 && this->x3 )
		 ||( this->x4 && this->x5 && this->x6)
		 ||( this->x7 && this->x8 && this->x9 )
		 ||( this->x1 && this->x4 && this->x7)
		 ||( this->x2 && this->x5 && this->x8)
		 || (this->x3 && this->x6 && this->x9) 
		 || (this->x1 && this->x5 && this->x9) 
		 || (this->x3 && this->x5 && this->x7)) {
			MessageBox::Show("Player X Wins!");
			x_wins = true;
			return true;
			
		}




		///////////
		if ((this->o1 && this->o2 && this->o3)
		|| (this->o4 && this->o5 && this->o6) 
		|| (this->o7 && this->o8 && this->o9) 
		|| (this->o1 && this->o4 && this->o7) 
		|| (this->o3 && this->o6 && this->o9) 
		|| (this->o1 && this->o5 && this->o9) 
		|| (this->o2 && this->o5 && this->o8)
		|| (this->o3 && this->o5 && this->o7)) {
			MessageBox::Show("Player O Wins!");
			return true;
		}
}


public: 
	Buttons();
};

