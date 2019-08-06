#pragma once
#include <conio.h>
#include <iostream>
namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ lblDisplay;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->lblDisplay = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 87);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(41, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(59, 87);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(41, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(106, 87);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(41, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 116);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(41, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(59, 116);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(41, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(106, 116);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(41, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 145);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(41, 23);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(59, 145);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(41, 23);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::Button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(106, 145);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(41, 23);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::Button9_Click);
			// 
			// lblDisplay
			// 
			this->lblDisplay->BackColor = System::Drawing::SystemColors::Menu;
			this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lblDisplay->Location = System::Drawing::Point(27, 28);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(189, 13);
			this->lblDisplay->TabIndex = 10;
			this->lblDisplay->Text = L"0";
			this->lblDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(59, 174);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(41, 23);
			this->button10->TabIndex = 11;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::Button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(106, 174);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(41, 23);
			this->button11->TabIndex = 12;
			this->button11->Text = L"C";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::Button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(153, 87);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(41, 23);
			this->button12->TabIndex = 13;
			this->button12->Text = L"/";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::Button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(153, 174);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(41, 23);
			this->button13->TabIndex = 14;
			this->button13->Text = L"*";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::Button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(153, 145);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(41, 23);
			this->button14->TabIndex = 15;
			this->button14->Text = L"+";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::Button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(153, 116);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(41, 23);
			this->button15->TabIndex = 16;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::Button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(142, 203);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(93, 46);
			this->button16->TabIndex = 17;
			this->button16->Text = L"=";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::Button16_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->lblDisplay);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		float firstnum;
		float secondnum;
		float Result;
		char operation;
		unsigned char znaki = getch();
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lblDisplay->Text == "0") {
			lblDisplay->Text = "1";
		}
		else {
			lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "1";
		}



	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lblDisplay->Text == "0") {
			lblDisplay->Text = "2";
		}
		else {
			lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "2";
		}
	}
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lblDisplay->Text == "0") {
			lblDisplay->Text = "3";
		}
		else {
			lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "3";
		}
	}
	private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lblDisplay->Text == "0") {
			lblDisplay->Text = "4";
		}
		else {
			lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "4";
		}
	}

	private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lblDisplay->Text == "0") {
			lblDisplay->Text = "5";
		}
		else {
			lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "5";
		}
	}

	private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lblDisplay->Text == "0") {
			lblDisplay->Text = "6";
		}
		else {
			lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "6";
		}
	}
	private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lblDisplay->Text == "0") {
			lblDisplay->Text = "7";
		}
		else {
			lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "7";
		}

	}
	private: System::Void Button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lblDisplay->Text == "0") {
			lblDisplay->Text = "8";
		}
		else {
			lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "8";
		}

	}
	private: System::Void Button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lblDisplay->Text == "0") {
			lblDisplay->Text = "9";
		}
		else {
			lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "9";
		}

	}
	private: System::Void Button12_Click(System::Object^ sender, System::EventArgs^ e) {
		firstnum = Convert::ToInt32(lblDisplay->Text);
		lblDisplay->Text == " ";
		lblDisplay->Text = "0";
		operation = '/';
	}
	private: System::Void Button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lblDisplay->Text == "0") {
			lblDisplay->Text = "0";
		}
		else {
			lblDisplay->Text = Convert::ToInt32(lblDisplay->Text) + "0";
		}
	}
	private: System::Void Button11_Click(System::Object^ sender, System::EventArgs^ e) {
		lblDisplay->Text == " ";
		lblDisplay->Text = "0";
	}
	private: System::Void Button13_Click(System::Object^ sender, System::EventArgs^ e) {
		firstnum = Convert::ToInt32(lblDisplay->Text);
		lblDisplay->Text == " ";
		lblDisplay->Text = "0";
		operation = '*';
	}
private: System::Void Button14_Click(System::Object^ sender, System::EventArgs^ e) {
	firstnum = Convert::ToInt32(lblDisplay->Text);
	lblDisplay->Text == " ";
	lblDisplay->Text = "0";
	operation = '+';
}
private: System::Void Button15_Click(System::Object^ sender, System::EventArgs^ e) {
	firstnum = Convert::ToInt32(lblDisplay->Text);
	lblDisplay->Text == " ";
	lblDisplay->Text = "0";
	operation = '-';
}
	private: System::Void Button16_Click(System::Object^ sender, System::EventArgs^ e) {

		secondnum = Convert::ToInt32(lblDisplay->Text);

		switch (operation)
		{
		case '+':
			Result = firstnum + secondnum;
			lblDisplay->Text = System::Convert::ToString(Result);
			break;
		case '-':
			Result = firstnum - secondnum;
			lblDisplay->Text = System::Convert::ToString(Result);
			break;
		case '/':
			Result = firstnum / secondnum;
			lblDisplay->Text = System::Convert::ToString(Result);
			break;
		case '*':
			Result = firstnum * secondnum;
			lblDisplay->Text = System::Convert::ToString(Result);
			break;
		}
	}
};
}
