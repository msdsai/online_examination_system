#pragma once

#include "mainform.h"
#ifndef MAINPAGE_ADMIN_H
#define MAINPAGE_ADMIN_H

// Contents of mainpage_admin.h

#endif // MAINPAGE_ADMIN_H


namespace LoginApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
    using namespace System::Data::Odbc;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainpage_admin
	/// </summary>
	public ref class mainpage_admin : public System::Windows::Forms::Form
	{
	public:
		mainpage_admin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		 //event System::EventHandler^ adminFormClosedEvent;


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~mainpage_admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	protected: 
	private: System::Windows::Forms::ColumnHeader^  User;

	private: System::Windows::Forms::ColumnHeader^  Score;
	private: System::Windows::Forms::ListView^  listView2;
	private: System::Windows::Forms::ColumnHeader^  que_text;
	private: System::Windows::Forms::ColumnHeader^  option1;
	private: System::Windows::Forms::ColumnHeader^  option2;
	private: System::Windows::Forms::ColumnHeader^  option3;
	private: System::Windows::Forms::ColumnHeader^  option4;
	private: System::Windows::Forms::ColumnHeader^  correct_ans;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  deleteQuestion;
	private: System::Windows::Forms::ColumnHeader^  ques_ID;
	private: System::Windows::Forms::ColumnHeader^  questionType;
	private: System::Windows::Forms::ColumnHeader^  section;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  labelQuestion;
	private: System::Windows::Forms::Label^  questionTextLabel;





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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->User = (gcnew System::Windows::Forms::ColumnHeader());
			this->Score = (gcnew System::Windows::Forms::ColumnHeader());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->ques_ID = (gcnew System::Windows::Forms::ColumnHeader());
			this->que_text = (gcnew System::Windows::Forms::ColumnHeader());
			this->option1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->option2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->option3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->option4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->correct_ans = (gcnew System::Windows::Forms::ColumnHeader());
			this->questionType = (gcnew System::Windows::Forms::ColumnHeader());
			this->section = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->deleteQuestion = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelQuestion = (gcnew System::Windows::Forms::Label());
			this->questionTextLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->User, this->Score});
			this->listView1->Location = System::Drawing::Point(980, 73);
			this->listView1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(204, 363);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &mainpage_admin::listView1_SelectedIndexChanged);
			// 
			// User
			// 
			this->User->Text = L"User";
			this->User->Width = 62;
			// 
			// Score
			// 
			this->Score->Text = L"Score";
			// 
			// listView2
			// 
			this->listView2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->listView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(9) {this->ques_ID, this->que_text, 
				this->option1, this->option2, this->option3, this->option4, this->correct_ans, this->questionType, this->section});
			this->listView2->FullRowSelect = true;
			this->listView2->Location = System::Drawing::Point(31, 73);
			this->listView2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(888, 363);
			this->listView2->TabIndex = 1;
			this->listView2->UseCompatibleStateImageBehavior = false;
			this->listView2->View = System::Windows::Forms::View::Details;
			this->listView2->ItemSelectionChanged += gcnew System::Windows::Forms::ListViewItemSelectionChangedEventHandler(this, &mainpage_admin::listView2_ItemSelectionChanged);
			this->listView2->SelectedIndexChanged += gcnew System::EventHandler(this, &mainpage_admin::listView2_SelectedIndexChanged);
			// 
			// ques_ID
			// 
			this->ques_ID->Text = L"id";
			// 
			// que_text
			// 
			this->que_text->Text = L"Question";
			this->que_text->Width = 124;
			// 
			// option1
			// 
			this->option1->Text = L"Option-1";
			this->option1->Width = 75;
			// 
			// option2
			// 
			this->option2->Text = L"option 2";
			this->option2->Width = 68;
			// 
			// option3
			// 
			this->option3->Text = L"option 3";
			this->option3->Width = 70;
			// 
			// option4
			// 
			this->option4->Text = L"option 4";
			this->option4->Width = 80;
			// 
			// correct_ans
			// 
			this->correct_ans->Text = L"correct ans.";
			this->correct_ans->Width = 91;
			// 
			// questionType
			// 
			this->questionType->Text = L"type";
			// 
			// section
			// 
			this->section->Text = L"section";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::SeaShell;
			this->button1->Location = System::Drawing::Point(31, 460);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 27);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Add Question";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &mainpage_admin::button1_Click);
			// 
			// deleteQuestion
			// 
			this->deleteQuestion->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->deleteQuestion->BackColor = System::Drawing::SystemColors::ControlLight;
			this->deleteQuestion->Location = System::Drawing::Point(844, 444);
			this->deleteQuestion->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->deleteQuestion->Name = L"deleteQuestion";
			this->deleteQuestion->Size = System::Drawing::Size(75, 27);
			this->deleteQuestion->TabIndex = 3;
			this->deleteQuestion->Text = L"Delete";
			this->deleteQuestion->UseVisualStyleBackColor = false;
			this->deleteQuestion->Click += gcnew System::EventHandler(this, &mainpage_admin::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(574, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 22);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Admin Page";
			this->label1->Click += gcnew System::EventHandler(this, &mainpage_admin::label1_Click);
			// 
			// labelQuestion
			// 
			this->labelQuestion->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->labelQuestion->AutoSize = true;
			this->labelQuestion->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelQuestion->Location = System::Drawing::Point(27, 547);
			this->labelQuestion->Name = L"labelQuestion";
			this->labelQuestion->Size = System::Drawing::Size(378, 28);
			this->labelQuestion->TabIndex = 5;
			this->labelQuestion->Text = L"Select any question to get a preview";
			// 
			// questionTextLabel
			// 
			this->questionTextLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->questionTextLabel->AutoSize = true;
			this->questionTextLabel->Location = System::Drawing::Point(27, 512);
			this->questionTextLabel->Name = L"questionTextLabel";
			this->questionTextLabel->Size = System::Drawing::Size(79, 21);
			this->questionTextLabel->TabIndex = 6;
			this->questionTextLabel->Text = L"Question";
			// 
			// mainpage_admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(1196, 645);
			this->Controls->Add(this->questionTextLabel);
			this->Controls->Add(this->labelQuestion);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->deleteQuestion);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->listView1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"mainpage_admin";
			this->Text = L"mainpage_admin";
			this->Load += gcnew System::EventHandler(this, &mainpage_admin::mainpage_admin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mainpage_admin_Load(System::Object^  sender, System::EventArgs^  e) {
				 PopulateListView();
			 }



void PopulateListView()
{
    OdbcConnection^ conn = nullptr;
    OdbcCommand^ cmdScore = nullptr;
    OdbcDataReader^ reader = nullptr;
	    OdbcCommand^ cmdQue = nullptr;
    OdbcDataReader^ queReader = nullptr;

    try {
        String^ Connection = "Driver={SQL Server};Server=DESKTOP-1GAC8IM\\SQLEXPRESS;Database=exam;";
        conn = gcnew OdbcConnection(Connection);

		try {
    // Open database connection
    Console::WriteLine("Opening database connection...");
    conn->Open();
    Console::WriteLine("Database connection opened successfully.");

    // Your code to execute the query...
} catch (Exception^ ex) {
    // Handle exceptions
    Console::WriteLine("Error opening database connection: " + ex->Message);
	
    MessageBox::Show("Error opening database connection: " + ex->Message);
}


        String^ sqlPopulateQuery = "SELECT user_id, score FROM scores";
        String^ sqlQuePopulateQuery = "SELECT question_id,question_text, choice1, choice2, choice3, choice4, correct_answer,section,question_type FROM questions";

        cmdScore = gcnew OdbcCommand(sqlPopulateQuery, conn);
		cmdQue = gcnew OdbcCommand(sqlQuePopulateQuery, conn);

        if (reader != nullptr) {
            reader->Close();
            reader = nullptr;
        }
        if (queReader != nullptr) {
            queReader->Close();
            queReader = nullptr;
        }


reader = cmdScore->ExecuteReader();

        listView1->Items->Clear();

        while (reader->Read()) {
    ListViewItem^ item = gcnew ListViewItem(reader["user_id"]->ToString());
    item->SubItems->Add(reader["score"]->ToString());
    listView1->Items->Add(item);
        }

	reader->Close();   

	queReader = cmdQue->ExecuteReader();
    while (queReader->Read()) {
        String^ questionText = safe_cast<String^>(queReader["question_text"]);
        String^ choice1 = queReader["choice1"]->ToString();
		String^ choice2 = queReader["choice2"]->ToString();
		String^ choice3 = queReader["choice3"]->ToString();
		String^ choice4 = queReader["choice4"]->ToString();
        /*String^ choice2 = safe_cast<String^>(queReader["choice2"];
        String^ choice3 = safe_cast<String^>(queReader["choice3"]);
        String^ choice4 = safe_cast<String^>(queReader["choice4"]);*/
        String^ correctAnswer = safe_cast<String^>(queReader["correct_answer"]);
        //String^ section = safe_cast<String^>(queReader["section"]);
        String^ questionType = safe_cast<String^>(queReader["question_type"]);
		String^ questionSection = safe_cast<String^>(queReader["section"]);
       
       
        ListViewItem^ item = gcnew ListViewItem(queReader["question_id"]->ToString());
		item->SubItems->Add(questionText);
        item->SubItems->Add(choice1);
        item->SubItems->Add(choice2);
        item->SubItems->Add(choice3);
        item->SubItems->Add(choice4);
        item->SubItems->Add(correctAnswer);
        item->SubItems->Add(questionType);
        item->SubItems->Add(questionSection);
       
        listView2->Items->Add(item);
    }
	queReader->Close();


    } catch (OdbcException^ ex) {
        MessageBox::Show("Error: " + ex->Message);
    } finally {
        // Close the reader
        if (reader != nullptr) {
            reader->Close();
            reader = nullptr;
        }
                if (queReader != nullptr) {
            queReader->Close();
            queReader = nullptr;
        }

        // Close the command
        if (cmdScore != nullptr) {
            cmdScore->~OdbcCommand();
            cmdScore = nullptr;
        }

		if (cmdQue != nullptr) {
            cmdQue->~OdbcCommand();
            cmdQue = nullptr;
        }

        // Close the connection
        if (conn != nullptr) {
            conn->Close();
            conn = nullptr;
        }
    }
}



	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }






private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    LoginApp::mainform^ addQuestionForm = gcnew LoginApp::mainform();

    // Subscribe to the FormClosed event of addQuestionForm
    addQuestionForm->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &mainpage_admin::mainform_FormClosed);

    // Show the addQuestionForm
    addQuestionForm->Show();
}


private: System::Void mainform_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
    // Update the list after the addQuestionForm is closed
			 
    listView2->Items->Clear();
    PopulateListView();
}


private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			/* 
		 */
			 if (listView2->SelectedItems->Count > 0) {
				   ListViewItem^ selectedItem = listView2->SelectedItems[0];

        // Get the question text from the selected item
        String^ questionId = selectedItem->Text;

        // Prompt the user to confirm deletion
        if (MessageBox::Show("Are you sure you want to delete this question?", "Confirm Deletion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
            // Delete the question from the database
            if (DeleteQuestionFromDatabase(questionId)) {
                // Remove the selected item from listView2
                listView2->Items->Remove(selectedItem);
                MessageBox::Show("Question deleted successfully.", "Deletion Successful", MessageBoxButtons::OK, MessageBoxIcon::Information);
            } else {
                MessageBox::Show("Failed to delete the question from the database.", "Deletion Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }
			 }
           
		 }

bool DeleteQuestionFromDatabase(String^ questionIdStr) {
    try {
        // Convert the questionIdStr to integer
        int questionId = Int32::Parse(questionIdStr);

        // Open connection to the database
		String^ Connection = "Driver={SQL Server};Server=DESKTOP-1GAC8IM\\SQLEXPRESS;Database=exam;";
      
        OdbcConnection^ conn = gcnew OdbcConnection(Connection);
        conn->Open();

        // Construct SQL query to delete the question
        String^ sqlQuery = "DELETE FROM questions WHERE question_id = ?";

        // Create command
        OdbcCommand^ cmd = gcnew OdbcCommand(sqlQuery, conn);
        // Add questionId as parameter
        cmd->Parameters->AddWithValue("@questionId", questionId);

        // Execute query
        int rowsAffected = cmd->ExecuteNonQuery();

        // Close the connection
        conn->Close();

        // Check if any rows were affected
        if (rowsAffected > 0) {
            return true; // Deletion successful
        } else {
            return false; // No rows affected, deletion unsuccessful
        }
    } catch (FormatException^ ex) {
        // Handle format exception (if questionIdStr cannot be converted to int)
        MessageBox::Show("Question ID must be a valid integer.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return false; // Deletion unsuccessful
    } catch (OdbcException^ ex) {
        // Handle any exceptions (e.g., database connection error)
        MessageBox::Show("Error deleting question: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        return false; // Deletion unsuccessful
    }
}

private: System::Void listView2_ItemSelectionChanged(System::Object^ sender, System::Windows::Forms::ListViewItemSelectionChangedEventArgs^ e) {
 // Clear previous selections
        for each (ListViewItem^ item in listView2->Items) {
        item->BackColor = System::Drawing::SystemColors::Window;
        item->ForeColor = System::Drawing::SystemColors::WindowText;
    }

    // Highlight the selected row
    if (e->IsSelected) {
        ListViewItem^ selectedItem = e->Item;
		//MessageBox::Show("selected this row");
        for each (ListViewItem::ListViewSubItem^ subItem in selectedItem->SubItems) {
            subItem->BackColor = System::Drawing::SystemColors::Highlight;
            subItem->ForeColor = System::Drawing::SystemColors::HighlightText;
        }
    }
}


private: System::Void listView2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			  if (listView2->SelectedItems->Count > 0) {
        ListViewItem^ selectedQuestion = listView2->SelectedItems[0];

        // Get the question text from the selected item's subitem
        String^ questionText = selectedQuestion->SubItems[1]->Text;

        // Update the Label's text
        labelQuestion->Text = questionText;

        // Show the Label
        labelQuestion->Visible = true;
    } else {
        // Hide the Label if no row is selected
        labelQuestion->Visible = false;
    }
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
