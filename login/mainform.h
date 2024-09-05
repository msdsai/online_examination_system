#pragma once
#ifndef MAINFORM_H
#define MAINFORM_H

// Contents of mainform.h

#endif // MAINFORM_H


namespace LoginApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;
    using namespace System::Data::Odbc;

	/// <summary>
	/// Summary for mainform
	/// </summary>r mainform
	/// </summary>
	public ref class mainform : public System::Windows::Forms::Form
	{
	public:
		mainform(void)
		{
			InitializeComponent();
		}

		 event System::EventHandler^ FormClosedEvent;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected: 


	//private: System::Void mainform_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Windows::Forms::Button^  submit;



	private: System::Windows::Forms::TextBox^  mark;
	private: System::Windows::Forms::Label^  tmark;
	private: System::Windows::Forms::TextBox^  section;
	private: System::Windows::Forms::TextBox^  cAnswer;
	private: System::Windows::Forms::Label^  currectanswer;
	private: System::Windows::Forms::TextBox^  answer4;
	private: System::Windows::Forms::TextBox^  answer3;
	private: System::Windows::Forms::TextBox^  answer2;
	private: System::Windows::Forms::TextBox^  answer1;
	private: System::Windows::Forms::Label^  A4;
	private: System::Windows::Forms::Label^  A3;
	private: System::Windows::Forms::Label^  A2;
	private: System::Windows::Forms::Label^  A1;
	private: System::Windows::Forms::TextBox^  question;
	private: System::Windows::Forms::Label^  Q;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  questionType;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->questionType = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->mark = (gcnew System::Windows::Forms::TextBox());
			this->tmark = (gcnew System::Windows::Forms::Label());
			this->section = (gcnew System::Windows::Forms::TextBox());
			this->cAnswer = (gcnew System::Windows::Forms::TextBox());
			this->currectanswer = (gcnew System::Windows::Forms::Label());
			this->answer4 = (gcnew System::Windows::Forms::TextBox());
			this->answer3 = (gcnew System::Windows::Forms::TextBox());
			this->answer2 = (gcnew System::Windows::Forms::TextBox());
			this->answer1 = (gcnew System::Windows::Forms::TextBox());
			this->A4 = (gcnew System::Windows::Forms::Label());
			this->A3 = (gcnew System::Windows::Forms::Label());
			this->A2 = (gcnew System::Windows::Forms::Label());
			this->A1 = (gcnew System::Windows::Forms::Label());
			this->question = (gcnew System::Windows::Forms::TextBox());
			this->Q = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->AutoScroll = true;
			this->panel1->AutoSize = true;
			this->panel1->BackColor = System::Drawing::Color::Silver;
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->questionType);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->submit);
			this->panel1->Controls->Add(this->mark);
			this->panel1->Controls->Add(this->tmark);
			this->panel1->Controls->Add(this->section);
			this->panel1->Controls->Add(this->cAnswer);
			this->panel1->Controls->Add(this->currectanswer);
			this->panel1->Controls->Add(this->answer4);
			this->panel1->Controls->Add(this->answer3);
			this->panel1->Controls->Add(this->answer2);
			this->panel1->Controls->Add(this->answer1);
			this->panel1->Controls->Add(this->A4);
			this->panel1->Controls->Add(this->A3);
			this->panel1->Controls->Add(this->A2);
			this->panel1->Controls->Add(this->A1);
			this->panel1->Controls->Add(this->question);
			this->panel1->Controls->Add(this->Q);
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(-1, -1);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1093, 539);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &mainform::panel1_Paint);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(889, 258);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 20);
			this->label2->TabIndex = 48;
			this->label2->Text = L"Type of Question:";
			// 
			// questionType
			// 
			this->questionType->BackColor = System::Drawing::Color::WhiteSmoke;
			this->questionType->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->questionType->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->questionType->Location = System::Drawing::Point(905, 304);
			this->questionType->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->questionType->Multiline = true;
			this->questionType->Name = L"questionType";
			this->questionType->Size = System::Drawing::Size(142, 64);
			this->questionType->TabIndex = 47;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(905, 136);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(142, 64);
			this->textBox1->TabIndex = 46;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(901, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 20);
			this->label1->TabIndex = 45;
			this->label1->Text = L"Section:";
			this->label1->Click += gcnew System::EventHandler(this, &mainform::label1_Click);
			// 
			// submit
			// 
			this->submit->BackColor = System::Drawing::Color::Maroon;
			this->submit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->submit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->submit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->submit->ForeColor = System::Drawing::Color::White;
			this->submit->Location = System::Drawing::Point(772, 468);
			this->submit->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(132, 46);
			this->submit->TabIndex = 44;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = false;
			this->submit->Click += gcnew System::EventHandler(this, &mainform::submit_Click);
			// 
			// mark
			// 
			this->mark->BackColor = System::Drawing::Color::WhiteSmoke;
			this->mark->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->mark->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mark->Location = System::Drawing::Point(110, 469);
			this->mark->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->mark->Multiline = true;
			this->mark->Name = L"mark";
			this->mark->Size = System::Drawing::Size(156, 45);
			this->mark->TabIndex = 40;
			this->mark->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tmark
			// 
			this->tmark->AutoSize = true;
			this->tmark->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tmark->ForeColor = System::Drawing::Color::Black;
			this->tmark->Location = System::Drawing::Point(26, 469);
			this->tmark->Name = L"tmark";
			this->tmark->Size = System::Drawing::Size(62, 20);
			this->tmark->TabIndex = 39;
			this->tmark->Text = L"Mark: ";
			// 
			// section
			// 
			this->section->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->section->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->section->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->section->Location = System::Drawing::Point(875, 46);
			this->section->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->section->Multiline = true;
			this->section->Name = L"section";
			this->section->Size = System::Drawing::Size(184, 354);
			this->section->TabIndex = 38;
			// 
			// cAnswer
			// 
			this->cAnswer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->cAnswer->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->cAnswer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cAnswer->Location = System::Drawing::Point(173, 382);
			this->cAnswer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cAnswer->Multiline = true;
			this->cAnswer->Name = L"cAnswer";
			this->cAnswer->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->cAnswer->Size = System::Drawing::Size(661, 48);
			this->cAnswer->TabIndex = 37;
			// 
			// currectanswer
			// 
			this->currectanswer->AutoSize = true;
			this->currectanswer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->currectanswer->ForeColor = System::Drawing::Color::Black;
			this->currectanswer->Location = System::Drawing::Point(26, 382);
			this->currectanswer->Name = L"currectanswer";
			this->currectanswer->Size = System::Drawing::Size(135, 18);
			this->currectanswer->TabIndex = 36;
			this->currectanswer->Text = L"Correct Answer: ";
			// 
			// answer4
			// 
			this->answer4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->answer4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->answer4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->answer4->Location = System::Drawing::Point(469, 294);
			this->answer4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->answer4->Multiline = true;
			this->answer4->Name = L"answer4";
			this->answer4->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->answer4->Size = System::Drawing::Size(365, 62);
			this->answer4->TabIndex = 35;
			// 
			// answer3
			// 
			this->answer3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->answer3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->answer3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->answer3->Location = System::Drawing::Point(53, 294);
			this->answer3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->answer3->Multiline = true;
			this->answer3->Name = L"answer3";
			this->answer3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->answer3->Size = System::Drawing::Size(374, 61);
			this->answer3->TabIndex = 34;
			// 
			// answer2
			// 
			this->answer2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->answer2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->answer2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->answer2->Location = System::Drawing::Point(469, 214);
			this->answer2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->answer2->Multiline = true;
			this->answer2->Name = L"answer2";
			this->answer2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->answer2->Size = System::Drawing::Size(365, 64);
			this->answer2->TabIndex = 33;
			// 
			// answer1
			// 
			this->answer1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->answer1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->answer1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->answer1->Location = System::Drawing::Point(53, 214);
			this->answer1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->answer1->Multiline = true;
			this->answer1->Name = L"answer1";
			this->answer1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->answer1->Size = System::Drawing::Size(374, 63);
			this->answer1->TabIndex = 32;
			// 
			// A4
			// 
			this->A4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->A4->AutoSize = true;
			this->A4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->A4->ForeColor = System::Drawing::Color::Black;
			this->A4->Location = System::Drawing::Point(440, 294);
			this->A4->Name = L"A4";
			this->A4->Size = System::Drawing::Size(22, 18);
			this->A4->TabIndex = 31;
			this->A4->Text = L"4.";
			// 
			// A3
			// 
			this->A3->AutoSize = true;
			this->A3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->A3->ForeColor = System::Drawing::Color::Black;
			this->A3->Location = System::Drawing::Point(26, 294);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(22, 18);
			this->A3->TabIndex = 30;
			this->A3->Text = L"3.";
			// 
			// A2
			// 
			this->A2->AutoSize = true;
			this->A2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->A2->ForeColor = System::Drawing::Color::Black;
			this->A2->Location = System::Drawing::Point(440, 214);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(22, 18);
			this->A2->TabIndex = 29;
			this->A2->Text = L"2.";
			// 
			// A1
			// 
			this->A1->AutoSize = true;
			this->A1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->A1->ForeColor = System::Drawing::Color::Black;
			this->A1->Location = System::Drawing::Point(26, 214);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(22, 18);
			this->A1->TabIndex = 28;
			this->A1->Text = L"1.";
			// 
			// question
			// 
			this->question->BackColor = System::Drawing::Color::White;
			this->question->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->question->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->question->Location = System::Drawing::Point(29, 47);
			this->question->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->question->Multiline = true;
			this->question->Name = L"question";
			this->question->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->question->Size = System::Drawing::Size(805, 139);
			this->question->TabIndex = 27;
			this->question->TextChanged += gcnew System::EventHandler(this, &mainform::question_TextChanged);
			// 
			// Q
			// 
			this->Q->AutoSize = true;
			this->Q->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Q->ForeColor = System::Drawing::Color::Black;
			this->Q->Location = System::Drawing::Point(26, 20);
			this->Q->Name = L"Q";
			this->Q->Size = System::Drawing::Size(84, 20);
			this->Q->TabIndex = 26;
			this->Q->Text = L"Question";
			// 
			// mainform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(1091, 538);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::Color::Coral;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"mainform";
			this->Text = L"adminpage";
			this->Load += gcnew System::EventHandler(this, &mainform::mainform_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion

	private: System::Void mainform_Load(System::Object^  sender, System::EventArgs^  e) {
			 }

private: System::Void mainform_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
    // Raise the custom FormClosedEvent when the form is closed
    FormClosedEvent(this, EventArgs::Empty);
}

	private: System::Void qno_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void A4_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void A2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void A3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void submit_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ questionText = question->Text;
	//String^ questionType = question->Text;
	String^ qType = questionType->Text;
	String^ markText= mark->Text;
    String^ option1 = answer1->Text;
    String^ option2 = answer2->Text;
    String^ option3 = answer3->Text;
    String^ option4 = answer4->Text;
    String^ correctAnswer = cAnswer->Text;
	String^ section = textBox1->Text;
	int markValue = System::Convert::ToInt32(markText);

    try {
        String^ Connection = "Driver={SQL Server};Server=DESKTOP-1GAC8IM\\SQLEXPRESS;Database=exam;";
        OdbcConnection^ conn = gcnew OdbcConnection(Connection);
        conn->Open();

        // Begin transaction
        OdbcTransaction^ transaction = conn->BeginTransaction();

        try {
            // Insert the question
            String^ sqlInsertQuestionQuery = "INSERT INTO questions (question_text, question_type, mark,section, choice1, choice2, choice3, choice4, correct_answer ) VALUES (?, ?, ?, ?, ?, ?, ?, ?,?);";
            OdbcCommand^ cmdQuestion = gcnew OdbcCommand(sqlInsertQuestionQuery, conn);
            cmdQuestion->Parameters->AddWithValue("@questionText", questionText);
            cmdQuestion->Parameters->AddWithValue("@questiontype", qType);
            cmdQuestion->Parameters->AddWithValue("@mark", markValue);
			cmdQuestion->Parameters->AddWithValue("@section", section);
			cmdQuestion->Parameters->AddWithValue("@choice1", option1);
			cmdQuestion->Parameters->AddWithValue("@choice2", option2);
			cmdQuestion->Parameters->AddWithValue("@choice3", option3);
			cmdQuestion->Parameters->AddWithValue("@choice4", option4);
			cmdQuestion->Parameters->AddWithValue("@correct_answer", correctAnswer);

            cmdQuestion->Transaction = transaction;
            cmdQuestion->ExecuteNonQuery();
	/*
            // Retrieve the generated question_id
            String^ sqlGetLastIdQuery = "SELECT TOP 1 question_id FROM Questions ORDER BY question_id DESC;";
            OdbcCommand^ cmdGetLastId = gcnew OdbcCommand(sqlGetLastIdQuery, conn);
            cmdGetLastId->Transaction = transaction; // Assign transaction to the command
            Object^ questionId = cmdGetLastId->ExecuteScalar();
            int generatedQuestionId;
            if (questionId != DBNull::Value) {
                // Convert the result to Int32
                generatedQuestionId = Convert::ToInt32(questionId);
                MessageBox::Show(generatedQuestionId.ToString());

                // Now insert options into the Options table using the generated question_id
                String^ sqlInsertOptionQuery = "INSERT INTO Options (question_id, option_text) VALUES (?, ?)";
                OdbcCommand^ cmdOption = gcnew OdbcCommand(sqlInsertOptionQuery, conn);

                // Assign the transaction to the command
                cmdOption->Transaction = transaction;

                // Insert option1
                cmdOption->Parameters->AddWithValue("@question_id", generatedQuestionId);
                cmdOption->Parameters->AddWithValue("@option_text", option1);
                cmdOption->ExecuteNonQuery();

                // Insert option2
                cmdOption->Parameters->Clear();
                cmdOption->Parameters->AddWithValue("@question_id", generatedQuestionId);
                cmdOption->Parameters->AddWithValue("@option_text", option2);
                cmdOption->ExecuteNonQuery();

                // Insert option3
                cmdOption->Parameters->Clear();
                cmdOption->Parameters->AddWithValue("@question_id", generatedQuestionId);
                cmdOption->Parameters->AddWithValue("@option_text", option3);
                cmdOption->ExecuteNonQuery();

                // Insert option4
                cmdOption->Parameters->Clear();
                cmdOption->Parameters->AddWithValue("@question_id", generatedQuestionId);
                cmdOption->Parameters->AddWithValue("@option_text", option4);
                cmdOption->ExecuteNonQuery();

				String^ sqlInsertAnswerQuery = "INSERT INTO Answers (question_id, answer_text) VALUES (?, ?)";
				OdbcCommand^ cmdInsertAnswer = gcnew OdbcCommand(sqlInsertAnswerQuery, conn);
				cmdInsertAnswer->Transaction = transaction;

                // Insert option1
                cmdInsertAnswer->Parameters->AddWithValue("@question_id", generatedQuestionId);
                cmdInsertAnswer->Parameters->AddWithValue("@answer_text", correctAnswer);
                cmdInsertAnswer->ExecuteNonQuery();

                MessageBox::Show("Data added successfully");
            } else {
                // Handle the case where the questionId is DBNull (no records found)
                MessageBox::Show("No records found for the generated question_id.");
            }

			*/

			
            MessageBox::Show("Data added successfully");
            // Commit the transaction
            transaction->Commit();

        } catch (OdbcException^ ex) {
            // Rollback transaction on error
            transaction->Rollback();
            MessageBox::Show("Error: " + ex->Message);
        } finally {
            // Close connection
            conn->Close();
        }
    } catch (OdbcException^ ex) {
        MessageBox::Show("Error: " + ex->Message);
    }
}


private: System::Void question_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }





};
}
