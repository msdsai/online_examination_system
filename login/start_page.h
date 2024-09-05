#pragma once

#include "examPage.h"

namespace LoginApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for start_page
	/// </summary>
	public ref class start_page : public System::Windows::Forms::Form
	{

	
	private:
    String^ mail;

	public:
		start_page(String^ email) : mail(email)
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
		~start_page()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	protected: 

	protected: 

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(start_page::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 138);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(952, 120);
			this->label1->TabIndex = 0;
			this->label1->Text = L"The test will be conducted as follows:\n 1. Online computer based\n 2. No negative marking \n 3.Results of the test should be available immediately on completion of the test.\n\nThe question palette displayed on the right side of the screen will show the status of each question using one of the following symbols:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			//this->label1->Click += gcnew System::EventHandler(this, &start_page::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Location = System::Drawing::Point(104, 301);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"     ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Lime;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Location = System::Drawing::Point(104, 340);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 22);
			this->label3->TabIndex = 2;
			this->label3->Text = L"     ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Red;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Location = System::Drawing::Point(104, 382);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(31, 22);
			this->label4->TabIndex = 3;
			this->label4->Text = L"     ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(141, 304);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(309, 100);
			this->label5->TabIndex = 4;
			this->label5->Text = L" : You have not attempted the question yet\r\n\r\n : You have saved the answer\r\n\r\n : " 
				L"You have flagged the question for review";
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::SkyBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(452, 530);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 30);
			this->button1->TabIndex = 5;
			this->button1->Text = L"I\'m ready to begin!";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &start_page::button1_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::SkyBlue;
			this->label6->Dock = System::Windows::Forms::DockStyle::Top;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(0, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(1011, 32);
			this->label6->TabIndex = 6;
			this->label6->Text = L"General Instructions";
			this->label6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(30, 482);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(249, 24);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"I have read all the instructions.";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// start_page
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1011, 572);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"start_page";
			this->Text = L"start_page";
			this->Load += gcnew System::EventHandler(this, &start_page::start_page_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void start_page_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 examPage^ ep = gcnew examPage(mail);
			 ep->Show();
			 //start_page::Hide();
		 }
};
}
