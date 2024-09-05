#include "scoreCard.h"
#include <Windows.h>
#include <sqltypes.h>
#include <sql.h>
#include <sqlext.h>
#include <string>
#include <iostream>
#include <vcclr.h>
#include <msclr\marshal_cppstd.h>
#include <algorithm>
#include <list>

//using namespace Buttons;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace System::Collections::Generic;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace System::Data::Odbc;

namespace LoginApp {



    public ref class examPage : public System::Windows::Forms::Form
    {
	
	private:String^ mail;
    public:
        examPage(String^ email) : mail(email)
        {
            InitializeComponent();
            ques = gcnew List<int>();
            display_order = gcnew List<List<int>^>();
            sections = gcnew List<String^>();
			this->Load += gcnew System::EventHandler(this, &examPage::examPage_Load);
			
			timeLeft = TimeSpan(0, 2, 0); // Example: 1 hour countdown
            timer = gcnew Timer();
            timer->Interval = 1000; // 1 second
            timer->Tick += gcnew EventHandler(this, &examPage::Timer_Tick);
            timer->Start();
        }
        
    protected:
        ~examPage()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container^ components;
        List<int>^ ques;
        List<List<int>^>^ display_order;
        List<String^>^ sections;
		String^ sec_name;
		static int selectedQuestionNumber; 		  
		static int currentQuestionId = 1;
		static int userScore;
		String^ type;
		Timer^ timer;
        TimeSpan timeLeft;

		System::Windows::Forms::Panel^ panel_sec;
		System::Windows::Forms::Panel^ panel_que;
		System::Windows::Forms::Button^  saveButton; 
		System::Windows::Forms::Label^  label1;
		System::Windows::Forms::Label^  label2;
		System::Windows::Forms::TextBox^  box;
		System::Windows::Forms::RadioButton^  radioButton1;
		System::Windows::Forms::RadioButton^  radioButton2;
		System::Windows::Forms::RadioButton^  radioButton3;
		System::Windows::Forms::RadioButton^  radioButton4;
		System::Windows::Forms::Button^  nextButton;
		System::Windows::Forms::Button^  prevButton;
		System::Windows::Forms::Button^  clearButton;
		System::Windows::Forms::Button^  flagButton;
		System::Windows::Forms::Button^  submitButton;

		array<System::Windows::Forms::Panel^>^ panelArray;

		

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
			this->panel_sec = (gcnew System::Windows::Forms::Panel());
			this->panel_que = (gcnew System::Windows::Forms::Panel());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->box = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->nextButton = (gcnew System::Windows::Forms::Button()); // Instantiate the Next Question button
			this->prevButton = (gcnew System::Windows::Forms::Button());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->flagButton = (gcnew System::Windows::Forms::Button());
			this->submitButton = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();

			//bo = gcnew System::Windows::Forms::TextBox();
			this->box->Multiline = true;
			this->box->ScrollBars = System::Windows::Forms::ScrollBars::Vertical; // Optional: Add vertical scrollbar
			this->box->Size = System::Drawing::Size(300, 40); // Set size as needed
			this->box->Location = System::Drawing::Point(169, 200); // Adjust location as needed
			this->Controls->Add(box);

			// 
			// button1
			// 
			this->saveButton->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->saveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->saveButton->Location = System::Drawing::Point(800, 459);
			this->saveButton->Name = L"button1";
			this->saveButton->Size = System::Drawing::Size(118, 49);
			this->saveButton->TabIndex = 0;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = false;
			this->Controls->Add(saveButton);
			this->saveButton->Click += gcnew System::EventHandler(this, &examPage::saveButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(169, 152);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(459, 32);
			this->label1->TabIndex = 1;
			this->Controls->Add(label1);


			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(400, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 32);
			this->label2->TabIndex = 1;
			this->Controls->Add(label2);
			
			/*box->AutoSize = true;
			box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			box->Location = System::Drawing::Point(300, 200);
			box->Name = L"label1";
			box->Size = System::Drawing::Size(35, 15);
			box->TabIndex = 1;
			this->Controls->Add(box);*/
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(196, 209);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(148, 30);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->Controls->Add(radioButton1);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton2->Location = System::Drawing::Point(196, 268);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(188, 30);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			this->Controls->Add(radioButton2);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton3->Location = System::Drawing::Point(196, 326);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(108, 30);
			this->radioButton3->TabIndex = 4;
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
			this->Controls->Add(radioButton3);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->radioButton4->Location = System::Drawing::Point(196, 389);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(112, 30);
			this->radioButton4->TabIndex = 5;
			this->radioButton4->TabStop = true;
			this->radioButton4->UseVisualStyleBackColor = true;
			this->Controls->Add(radioButton4);

			//add prev question
			this->prevButton->Text = "Prev";
			this->prevButton->Size = System::Drawing::Size(120, 40);
			this->prevButton->Location = System::Drawing::Point(500, 459);
			this->prevButton->Click += gcnew EventHandler(this, &examPage::PrevButton_Click);
			this->Controls->Add(prevButton);


			// Add Next Question button
			this->nextButton->Text = "Next";
			this->nextButton->Size = System::Drawing::Size(120, 40);
			this->nextButton->Location = System::Drawing::Point(623,459); // Adjust the location as needed
			this->nextButton->Click += gcnew EventHandler(this, &examPage::NextButton_Click);
			this->Controls->Add(nextButton);
			
			//Clear button
			this->clearButton->Text = "Clear";
			this->clearButton->Size = System::Drawing::Size(120, 40); // Adjust size as needed
			int clearButtonX = 30; // Adjust X-coordinate as needed
			int clearButtonY = this->radioButton4->Location.Y + this->radioButton4->Height + 10; // Adjust Y-coordinate as needed
			this->clearButton->Location = System::Drawing::Point(clearButtonX, clearButtonY);
			this->clearButton->Click += gcnew EventHandler(this, &examPage::ClearButton_Click);
			this->Controls->Add(clearButton);

			//flag button
			this->flagButton->Text = "Flag";
			this->flagButton->Size = System::Drawing::Size(120, 40); // Adjust size as needed
			int flagButtonX = this->clearButton->Location.X + this->clearButton->Width + 10; // Adjust X-coordinate as needed
			int flagButtonY = this->clearButton->Location.Y; // Align with the "Clear" button
			this->flagButton->Location = System::Drawing::Point(flagButtonX, flagButtonY);
			this->flagButton->Click += gcnew EventHandler(this, &examPage::FlagButton_Click);
			this->Controls->Add(flagButton);

			//submit button
			this->submitButton->Text = "Submit";
			this->submitButton->Size = System::Drawing::Size(120, 40);
			this->submitButton->Location = System::Drawing::Point(200, 500); // Adjust the location as needed
			this->submitButton->Click += gcnew EventHandler(this, &examPage::submitButton_Click);
			this->Controls->Add(submitButton);

			this->Text = "Dynamic Button Form";
            this->Size = System::Drawing::Size(1000, 600);
            this->AutoScroll = true;
			
			this->panel_sec->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel_sec->Location = System::Drawing::Point(0, 0);
			this->panel_sec->Size = System::Drawing::Size(400, 50);
			this->panel_sec->AutoScroll = true;
			this->Controls->Add(panel_sec);

			this->ResumeLayout(false);
			/*
			panel_que->Dock = System::Windows::Forms::DockStyle::Right;
			panel_que->Location = System::Drawing::Point(700, 50);
			panel_que->Size = System::Drawing::Size(400, 100);
			panel_que->AutoScroll = true; // Enable auto-scrolling
            this->Controls->Add(panel_que);

           

           int numRows = GetNumberOfRowsFromDatabase();
            int buttonWidth = 50;
            int buttonHeight = 30;
            int buttonSpacing = 10;
            int maxButtonsPerRow = 5;

            for (int i = 0; i < numRows; i++)
            {
                int row = i / maxButtonsPerRow;
                int col = i % maxButtonsPerRow;

                Button^ button = gcnew Button();
                button->Name = i.ToString(); // Set button name to section name
                button->Text = (i+1).ToString(); // Set button text to section name
                button->Size = System::Drawing::Size(buttonWidth, buttonHeight);
                int xPos = buttonSpacing + col * (buttonWidth + buttonSpacing);
                int yPos = buttonSpacing + row * (buttonHeight + buttonSpacing);
                button->Location = System::Drawing::Point(xPos, yPos);
                button->Click += gcnew EventHandler(this, &examPage::Button_Click);
                panel_que->Controls->Add(button);
            }
			*/

		}
#pragma endregion
		/*void InitializePanel() {
            panel->Size = System::Drawing::Size(400, 100);
            panel->Location = System::Drawing::Point(10, 10);
            panel->AutoScroll = true;
            this->Controls->Add(panel);
	private: System::Void examPage_Load_2(System::Object^  sender, System::EventArgs^  e) {
			 }
	}*/
    private:
        System::Void examPage_Load(System::Object^ sender, System::EventArgs^ e) 
		{
			MessageBox::Show(mail);
			
            String^ connectionString = "Driver={SQL Server};Server=DESKTOP-1GAC8IM\\SQLEXPRESS;Database=exam;";
            String^ sqlQuery = "SELECT DISTINCT(section) AS sec FROM questions";

            try {
                OdbcConnection^ connection = gcnew OdbcConnection(connectionString);
                connection->Open();
                OdbcCommand^ command = gcnew OdbcCommand(sqlQuery, connection);
                OdbcDataReader^ reader = command->ExecuteReader();

                if (reader->HasRows) {
                    while (reader->Read()) {
                        String^ section = reader["sec"]->ToString();
                        sections->Add(section);
                    }
                }
                else {
                    MessageBox::Show("No data found1.");
                }

                reader->Close();

				
				int i=0;
                for each (String^ item in sections) {
					Button^ button = gcnew Button();
					button->Name = item; // Set button name
					button->Text = item; // Set button text to the section name
					button->Size = System::Drawing::Size(100, 30);
					int xPos = i * 100;
					int yPos = 10; // Adjust spacing between buttons
					button->Location = System::Drawing::Point(xPos, yPos);
					panel_sec->Controls->Add(button);
					button->Click += gcnew EventHandler(this, &examPage::SectionButton_Click);
					i++;
                    sqlQuery = "SELECT question_id FROM questions WHERE section=(?)";
                    command = gcnew OdbcCommand(sqlQuery, connection);
                    command->Parameters->AddWithValue("@section", item);
                    reader = command->ExecuteReader();

                    if (reader->HasRows) {
                        while (reader->Read()) {
                            String^ que_id = reader["question_id"]->ToString();
                            std::string stdStr = msclr::interop::marshal_as<std::string>(que_id);
                            int intValue = System::Convert::ToInt32(gcnew String(stdStr.c_str()));
                            ques->Add(intValue);
                        }
                        ShuffleList(ques);

						//List<int>^ ques1 = ques;
                        display_order->Add(gcnew List<int>(ques));

						
						
                        ques->Clear();
						
                    }
                    else {
                        MessageBox::Show("No data found1.");
                    }
                    reader->Close();

					
                }
                connection->Close();
            }
            catch (Exception^ ex) {
                MessageBox::Show("An error occurred: " + ex->Message);
            }

			panels();
			sec_name = sections[0];
			currentQuestionId = 0;
			print(sec_name, display_order[0][currentQuestionId]);
        }

		void Timer_Tick(System::Object^ sender, System::EventArgs^ e)
        {
            // Update the time left
            timeLeft = timeLeft.Subtract(TimeSpan::FromSeconds(1));

            // Display the remaining time
            if (timeLeft.TotalSeconds > 0)
            {
                // Format the time and update label1
                String^ formattedTime = timeLeft.ToString("hh\\:mm\\:ss");
                label2->Text = formattedTime; // Uncomment this line and replace label1 with your label control name
            }
            else
            {
                // Stop the timer when it reaches 0:00:00
                timer->Stop();
                label2->Text = "0:00:00"; // Uncomment this line and replace label1 with your label control name
                MessageBox::Show("Countdown finished!");
				submit();
            }
        }

		void ShuffleList(List<int>^ list) {
            Random^ rnd = gcnew Random();
            for (int i = list->Count - 1; i >= 1; --i) {
                int j = rnd->Next(i + 1);
                int temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }

		void submit(){
			int final_score = 0;
			String^ Connection = "Driver={SQL Server};Server=DESKTOP-1GAC8IM\\SQLEXPRESS;Database=exam;";
            OdbcConnection^ conn = gcnew OdbcConnection(Connection);
            conn->Open();

            String^ query = "SELECT a.answer, q.correct_answer, q.mark FROM questions q JOIN answers a ON q.question_id = a.question_id WHERE a.user_id=?";
            OdbcCommand^ cmd = gcnew OdbcCommand(query, conn);
			cmd->Parameters->AddWithValue("user_id", mail);
			OdbcDataReader^ reader = cmd->ExecuteReader();
			if (reader->HasRows) {
				while (reader->Read()) {
					String^ ans = reader["answer"]->ToString();
					String^ corr_ans = reader["correct_answer"]->ToString();
					if(ans==corr_ans){
						final_score += Convert::ToInt32(reader["mark"]->ToString());
					} 
				}
			}
			reader->Close();
			String^ query_score = "INSERT INTO scores (user_id, score) VALUES (?, ?)";
			OdbcCommand^ cmd_score = gcnew OdbcCommand(query_score, conn);
			cmd_score->Parameters->AddWithValue("user_id", mail);
			cmd_score->Parameters->AddWithValue("score", final_score);
			cmd_score->ExecuteNonQuery();
            conn->Close();
			MessageBox::Show(final_score.ToString());
			scoreCard^ card = gcnew scoreCard(mail);
			card->Show();
		}
		void submitButton_Click(Object^ sender, EventArgs^ e){
			submit();

			/*int final_score = 0;
			String^ Connection = "Driver={SQL Server};Server=MAJJI\\SQLEXPRESS01;Database=Online_Examination;";
            OdbcConnection^ conn = gcnew OdbcConnection(Connection);
            conn->Open();

            String^ query = "SELECT a.answer, q.correct_answer, q.mark FROM Questions q JOIN answers a ON q.question_id = a.question_id";
            OdbcCommand^ cmd = gcnew OdbcCommand(query, conn);
			OdbcDataReader^ reader = cmd->ExecuteReader();
			if (reader->HasRows) {
				while (reader->Read()) {
					String^ ans = reader["answer"]->ToString();
					String^ corr_ans = reader["correct_answer"]->ToString();
					if(ans==corr_ans){
						final_score += Convert::ToInt32(reader["mark"]->ToString());
					} 
				}
			}
			reader->Close();
            conn->Close();
			MessageBox::Show(final_score.ToString());*/
		}

        System::Void SectionButton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
            Button^ sectionButton = dynamic_cast<Button^>(sender);
			int sect = 0;
            sec_name = sectionButton->Text; 
			for (int i = 0; i < sections->Count; i++)
			{
				// Check if the current string matches the search string
				if (sections[i] == sec_name)
				{
					// Return the position (index) if found
					sect = i; break;
				}
			}
			currentQuestionId = 0;
			print(sec_name, display_order[sect][currentQuestionId]);
        }

		void saveButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			
			int sec = fetch_sec(sec_name);
			String^ selectedAnswer="";
			if(type == "mcq")
			{
				
				if (radioButton1->Checked)
					selectedAnswer = "a";
				else if (radioButton2->Checked)
					selectedAnswer = "b";
				else if (radioButton3->Checked)
					selectedAnswer = "c";
				else if (radioButton4->Checked)
					selectedAnswer = "d";

				
			}
			else
			{
				selectedAnswer = box->Text;
			}
			if(selectedAnswer == "") MessageBox::Show("Choose any one option.");
			else
			{
				
				String^ button_name = (currentQuestionId+1).ToString();
				InsertAnswerIntoDatabase(display_order[sec][currentQuestionId], selectedAnswer);
				Button^ questionButton = dynamic_cast<Button^>(panelArray[sec]->Controls->Find(button_name, true)[0]); // Find the corresponding question button

				if (questionButton != nullptr) 
				{
					questionButton->BackColor = Color::Green;
				}
					
			}
			if(currentQuestionId == display_order[sec]->Count - 1){}
			else 
			{
				currentQuestionId++; // Move to the next question
			}
			print(sec_name, display_order[sec][currentQuestionId]);
		}
		

		void panels()
		{
			int num_sec = sections->Count;
			
			panelArray = gcnew array<System::Windows::Forms::Panel^>(num_sec); // Change the size as needed
			for(int i = 0; i < num_sec; i++)
			{
				panelArray[i] = gcnew System::Windows::Forms::Panel();
				// Set properties for each panel if needed
				panelArray[i]->Location = System::Drawing::Point(600, 50);
				panelArray[i]->Size = System::Drawing::Size(400, 100); // Example location
				panelArray[i]->AutoScroll = true;
				//panelArray[i]->BackColor = System::Drawing::Color::Red;
				this->Controls->Add(panelArray[i]);

				int numRows = display_order[i]->Count;
				
				int buttonWidth = 50;
				int buttonHeight = 30;
				int buttonSpacing = 10;
				int maxButtonsPerRow = 5;

				for (int j = 0; j < numRows; j++)
				{
					int row = j / maxButtonsPerRow;
					int col = j % maxButtonsPerRow;

					Button^ button = gcnew Button();
					button->Name = (j+1).ToString(); // Set button name to section name
					button->Text = (j+1).ToString(); // Set button text to section name
					button->Size = System::Drawing::Size(buttonWidth, buttonHeight);
					int xPos = buttonSpacing + col * (buttonWidth + buttonSpacing);
					int yPos = buttonSpacing + row * (buttonHeight + buttonSpacing);
					button->Location = System::Drawing::Point(xPos, yPos);
					button->Click += gcnew EventHandler(this, &examPage::Button_Click);
					panelArray[i]->Controls->Add(button);
				}
			}
		}

		void InsertAnswerIntoDatabase(int questionId, String^ answer)
		{
			try {
				String^ Connection = "Driver={SQL Server};Server=DESKTOP-1GAC8IM\\SQLEXPRESS;Database=exam;";
				OdbcConnection^ conn = gcnew OdbcConnection(Connection);
				conn->Open();
				String^ query_ans = "SELECT answer FROM answers WHERE user_id = ? AND question_id = ?";
				OdbcCommand^ command_ans = gcnew OdbcCommand(query_ans, conn);

				// Bind parameter values
				command_ans->Parameters->AddWithValue("user_id", mail);
				command_ans->Parameters->AddWithValue("question_id", questionId);

				// Execute the query
				OdbcDataReader^ reader_ans = command_ans->ExecuteReader();
				if(reader_ans->Read()){
					reader_ans->Close();
					String^ query = "DELETE FROM answers WHERE question_id = ? AND user_id= ?";
					OdbcCommand^ cmd = gcnew OdbcCommand(query, conn);
					cmd->Parameters->AddWithValue("question_id", questionId);
					cmd->Parameters->AddWithValue("user_id", mail);
					cmd->ExecuteNonQuery();
				}
				else {
					reader_ans->Close();
				}
				
				
				String^ query = "INSERT INTO answers (question_id,user_id, answer) VALUES (?, ?, ?)";
				OdbcCommand^ cmd = gcnew OdbcCommand(query, conn);
				cmd->Parameters->AddWithValue("question_id", questionId);
				cmd->Parameters->AddWithValue("user_id", mail);
				cmd->Parameters->AddWithValue("answer", answer);
				cmd->ExecuteNonQuery();

				conn->Close();
		
			}
			catch (OdbcException^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
		}


		System::Void Button_Click(System::Object^ sender, System::EventArgs^ e) {
            Button^ button = dynamic_cast<Button^>(sender);
			String^ buttonName = button->Name;
			currentQuestionId = Convert::ToInt32(buttonName) - 1;
			print(sec_name, display_order[fetch_sec(sec_name)][currentQuestionId]);     
            //MessageBox::Show("Section selected: " + section);
        }

		int fetch_sec(String^ sec)
		{
			for (int i = 0; i < sections->Count; i++)
			{
				// Check if the current string matches the search string
				if (sections[i] == sec)
				{
					// Return the position (index) if found
					return i;
				}
			}
		}

		void NextButton_Click(Object^ sender, EventArgs^ e)
		{
			currentQuestionId++; // Move to the next question
			int sec = fetch_sec(sec_name);
			print(sec_name, display_order[sec][currentQuestionId]); // Load the next question
		}

		void PrevButton_Click(Object^ sender, EventArgs^ e)
		{
			// Assuming you have a variable to keep track of the current question ID
			// You need to decrement it to move to the previous question
			currentQuestionId--;
			int sec = fetch_sec(sec_name);

			// Call the print function with the updated question ID to load the previous question
			print(sec_name, display_order[sec][currentQuestionId]);
		}

		void ClearButton_Click(Object^ sender, EventArgs^ e)
		{
			String^ selectedAnswer;
			// Clear the selection of all radio buttons
			radioButton1->Checked = false;
			radioButton2->Checked = false;
			radioButton3->Checked = false;
			radioButton4->Checked = false;

			  selectedAnswer = "";
		}

		void FlagButton_Click(Object^ sender, EventArgs^ e)
		{
			int sec = fetch_sec(sec_name);
			String^ button_name = (currentQuestionId+1).ToString();
			Button^ questionButton = dynamic_cast<Button^>(panelArray[sec]->Controls->Find(button_name, true)[0]); // Find the corresponding question button

			// Toggle the color of the question button

			if (questionButton != nullptr) {
				// If the button color is white, change it to violet, and vice versa
				questionButton->BackColor = (questionButton->BackColor == Color::Red) ? Color::Purple : Color::Red;
			}

		}

		void print(String^ sec, int que_id)
		{
			try {
				box->Text = "";
				int sect = fetch_sec(sec_name);
				for(int i = 0; i < sections->Count; i++)
				{
					if(i == sect) panelArray[i]->Visible = true;
					else panelArray[i]->Visible = false;
				}

				if(display_order[sect]->Count == 1)
				{
					prevButton->Visible = false;
					nextButton->Visible = false;
				}
				else if(currentQuestionId == 0)
				{
					prevButton->Visible = false;
					nextButton->Visible = true;
				}
				else if(currentQuestionId == display_order[sect]->Count - 1)
				{
					prevButton->Visible = true;
					nextButton->Visible = false;
				}
				else
				{
					prevButton->Visible = true;
					nextButton->Visible = true;
				}

				String^ button_name = (currentQuestionId+1).ToString();
				Button^ questionButton = dynamic_cast<Button^>(panelArray[sect]->Controls->Find(button_name, true)[0]); // Find the corresponding question button

				// Toggle the color of the question button

				if (questionButton != nullptr) {
					
					//questionButton->BackColor = Color::White;
					// If the button color is white, change it to violet, and vice versa
					if(questionButton->BackColor != Color::Green && questionButton->BackColor != Color::Purple) {questionButton->BackColor = Color::Red;}
				}

				String^ Connection = "Driver={SQL Server};Server=DESKTOP-1GAC8IM\\SQLEXPRESS;Database=exam;";
				OdbcConnection^ conn = gcnew OdbcConnection(Connection);
				conn->Open();

				String^ query_type = "SELECT question_type FROM questions WHERE question_id = ?";
				OdbcCommand^ cmd = gcnew OdbcCommand(query_type, conn);
				cmd->Parameters->AddWithValue("question_id", que_id);
				OdbcDataReader^ reader_type = cmd->ExecuteReader();
				
				

				if(reader_type->Read()){
					type = reader_type[0]->ToString();
					reader_type->Close();
				}
				else{

					reader_type->Close();
				}
				if(type == "mcq")
				{
					radioButton1->Visible = true;
						radioButton2->Visible = true;
						radioButton3->Visible = true;
						radioButton4->Visible = true;
					String^ query = "SELECT question_text, choice1, choice2, choice3, choice4  FROM questions WHERE question_id = ?";
					OdbcCommand^ cmd = gcnew OdbcCommand(query, conn);
					cmd->Parameters->AddWithValue("question_id", que_id);

					// Execute the SELECT query
					OdbcDataReader^ reader = cmd->ExecuteReader();
					String^ data = "....";

					if (reader->Read()) {
						// Retrieve the data from the specified column and row
			
						label1->Text = reader[0]->ToString();
						box->Visible = false;
						radioButton1->Text = reader[1]->ToString();
						radioButton2->Text = reader[2]->ToString();
						radioButton3->Text = reader[3]->ToString();
						radioButton4->Text = reader[4]->ToString();
						// Do something with the retrieved data
						//MessageBox::Show("Data from column '" + columnName + "' in row " + rowNumber + ": " + data);
					} else {
						MessageBox::Show("No data found for row " );
					}

					reader->Close();

					String^ query_ans = "SELECT answer FROM answers WHERE user_id = ? AND question_id = ?";
					OdbcCommand^ command_ans = gcnew OdbcCommand(query_ans, conn);

					// Bind parameter values
					command_ans->Parameters->AddWithValue("user_id", mail);
					command_ans->Parameters->AddWithValue("question_id", que_id);

					// Execute the query
					OdbcDataReader^ reader_ans = command_ans->ExecuteReader();


					radioButton1->Checked = false;
					radioButton2->Checked = false;
					radioButton3->Checked = false;
					radioButton4->Checked = false;

					if (reader_ans->Read()) 
					{
						// Retrieve the answer from the first row
						String^ answer = reader_ans["answer"]->ToString();
					
						if(answer == "a") radioButton1->Checked = true;
						else if(answer == "b") radioButton2->Checked = true;
						else if(answer == "c") radioButton3->Checked = true;
						else if(answer == "d") radioButton4->Checked = true;
					} 

					reader_ans->Close();
				}
				else
				{
					String^ query = "SELECT question_text FROM questions WHERE question_id = ?";
					OdbcCommand^ cmd = gcnew OdbcCommand(query, conn);
					cmd->Parameters->AddWithValue("question_id", que_id);

					// Execute the SELECT query
					OdbcDataReader^ reader = cmd->ExecuteReader();
					String^ data = "....";

					if (reader->Read()) {
						// Retrieve the data from the specified column and row
			
						label1->Text = reader[0]->ToString();
						radioButton1->Visible = false;
						radioButton2->Visible = false;
						radioButton3->Visible = false;
						radioButton4->Visible = false;
						box->Visible = true;
						
						// Do something with the retrieved data
						//MessageBox::Show("Data from column '" + columnName + "' in row " + rowNumber + ": " + data);
					} else {
						MessageBox::Show("No data found for row " );
					}

					reader->Close();

					String^ query_ans = "SELECT answer FROM answers WHERE user_id = ? AND question_id = ?";
					OdbcCommand^ command_ans = gcnew OdbcCommand(query_ans, conn);

					// Bind parameter values
					command_ans->Parameters->AddWithValue("user_id", mail);
					command_ans->Parameters->AddWithValue("question_id", que_id);

					// Execute the query
					OdbcDataReader^ reader_ans = command_ans->ExecuteReader();


					if (reader_ans->Read()) 
					{
						// Retrieve the answer from the first row
						String^ answer = reader_ans["answer"]->ToString();
					
						box->Text = answer;
					} 

					reader_ans->Close();
				}
				
				
				

				/*String^ button_name = (currentQuestionId+1).ToString();
				Button^ Button_color = dynamic_cast<Button^>(panelArray[sect]->Controls->Find(button_name, true)[0]); // Find the corresponding question button
		
				if (Button_color != nullptr)
				{
					if(Button_color->BackColor == Color::White) {Button_color->BackColor = Color::Red; }
					MessageBox::Show((Button_color->BackColor).ToString());
				}*/
				
				conn->Close();      
			}
			catch (OdbcException^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
		}
};
}