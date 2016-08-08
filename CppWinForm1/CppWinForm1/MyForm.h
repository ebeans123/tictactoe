#pragma once
#include "Buttons.h";
namespace CppWinForm1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


		Graphics^ g;
		Pen^ pen;
		int numofCandR = 3;
		int cellSize = 150;
		int x = 130;
		Bitmap^ bmp = gcnew Bitmap(L"o.bmp");
		Buttons^ button = gcnew Buttons;
		Bitmap^ bmp2 = gcnew Bitmap(L"x.bmp");
		bool x_wins = false;
		
	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;

			 int y = 132;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(66, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(531, 477);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(618, 156);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 44);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Box 1";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(683, 156);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(49, 44);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Box 2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(748, 156);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(49, 44);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Box 3";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(618, 218);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(49, 44);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Box 4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(683, 218);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(49, 44);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Box 5";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(748, 218);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(49, 44);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Box 6";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(618, 283);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(49, 44);
			this->button8->TabIndex = 8;
			this->button8->Text = L"Box 7";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(683, 283);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(49, 44);
			this->button9->TabIndex = 9;
			this->button9->Text = L"Box 8";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(748, 283);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(49, 44);
			this->button10->TabIndex = 10;
			this->button10->Text = L"Box 9";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 25;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(0, 0);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 11;
			this->textBox1->Text = L"X WINS!";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(603, 42);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(213, 108);
			this->textBox2->TabIndex = 12;
			this->textBox2->Text = L"RULES:\r\n>The 1st Player will be \"X\"\r\n>The 2nd Player will be \"O\"\r\n>Chose the box "
				L"and the corresponding\r\n value(\"X\" or \"O\") will display where clicked.\r\n";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(816, 537);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int textWidth = 5;
		
		
		
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		g = pictureBox1->CreateGraphics();
		
		

	}
	private: System::Void MyForm_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	//	g = pictureBox1->CreateGraphics();

		
		
		

	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		g = pictureBox1->CreateGraphics();

		pen = gcnew Pen(Color::Red);

		for (int i = 1; i < numofCandR; i++)
		{
			g->DrawLine(pen, i * cellSize, 0, i * cellSize, numofCandR * cellSize);
			for (int j = 1; j < numofCandR; j++)
			{
				g->DrawLine(pen, 0, j * cellSize, numofCandR * cellSize, j * cellSize);

			}


		}
	
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	button->X_turn = !button->X_turn;
	if (button->X_turn) {
		g->DrawImage(bmp2, 0, 0);
		button->x1 = true;
	}
	else {
		g->DrawImage(bmp, 0, 0);
		button->o1 = true;
	}
	button->check_win(x_wins);
	button2->Enabled = false;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	button->X_turn = !button->X_turn;
	if (button->X_turn) {
		g->DrawImage(bmp2, 151, 0);
		button->x2 = true;
	}
	else {
		g->DrawImage(bmp, 151, 0);
		button->o2 = true;
	}
	button->check_win(x_wins);
	button3->Enabled = false;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	button->X_turn = !button->X_turn;
	if (button->X_turn) {
		g->DrawImage(bmp2, 301, 0);
		button->x3 = true;
	}
	else {
		g->DrawImage(bmp, 301, 0);
		button->o3 = true;
	}
	button->check_win(x_wins);
	button4->Enabled = false;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	button->X_turn = !button->X_turn;
	if (button->X_turn) {
		g->DrawImage(bmp2, 0, 151);
		button->x4 = true;
	}
	else {
		g->DrawImage(bmp, 0, 151);
		button->o4 = true;
	}
	button->check_win(x_wins);
	button5->Enabled = false;
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	button->X_turn = !button->X_turn;
	if (button->X_turn) {
		g->DrawImage(bmp2, 151, 151);
		button->x5= true;
	}
	else {
		g->DrawImage(bmp, 151, 151);
		button->o5 = true;
	}
	button->check_win(x_wins);
	button6->Enabled = false;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	button->X_turn = !button->X_turn;
	if (button->X_turn) {
		g->DrawImage(bmp2, 301, 151);
		button->x6 = true;
	}
	else {
		g->DrawImage(bmp, 301, 151);
		button->o6 = true;
	}
	button->check_win(x_wins);
	button7->Enabled = false;
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	button->X_turn = !button->X_turn;
	if (button->X_turn) {
		g->DrawImage(bmp2, 0, 301);
		button->x7 = true;
	}
	else {
		g->DrawImage(bmp, 0, 301);
		button->o7 = true;
	}
	button->check_win(x_wins);
	button8->Enabled = false;
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	button->X_turn = !button->X_turn;
	if (button->X_turn) {
		g->DrawImage(bmp2, 151, 301);
		button->x8 = true;
	}
	else {
		g->DrawImage(bmp, 151, 301);
		button->o8 = true;
	}
	button->check_win(x_wins);
	button9->Enabled = false;
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	button->X_turn = !button->X_turn;
	if (button->X_turn) {
		g->DrawImage(bmp2, 301, 301);
		button->x9 = true;
	}
	else {
		g->DrawImage(bmp, 301, 301);
		button->o9 = true;
	}
	button->check_win(x_wins);
	button10->Enabled = false;
}


private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

	pen = gcnew Pen(Color::Red);

	for (int i = 1; i < numofCandR; i++)
	{
		g->DrawLine(pen, i * cellSize, 0, i * cellSize, numofCandR * cellSize);
		for (int j = 1; j < numofCandR; j++)
		{
			g->DrawLine(pen, 0, j * cellSize, numofCandR * cellSize, j * cellSize);

		}


	}
	if (x_wins) {
		textWidth += 5;
		textBox1->Location = Point(textWidth, 0);
	}
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}


