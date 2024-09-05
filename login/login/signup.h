#pragma once

#include <vcclr.h>
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <Windows.h>
#include <sql.h>
#include <sqlext.h>
#include <sqltypes.h>

namespace LoginApp {

    using namespace System;
    using namespace System::Windows::Forms;
    using namespace System::Data::Odbc;

    public ref class SignUpForm : public System::Windows::Forms::Form
    {
    public:
        SignUpForm(void)
        {
            InitializeComponent();
        }

    protected:
        ~SignUpForm()
        {
            if (components)
            {
                delete components;
            }
        }
	//adding elements to form that are needed
    private: System::Windows::Forms::TextBox^  txtUsername;
    private: System::Windows::Forms::TextBox^  txtPassword;
    private: System::Windows::Forms::Button^  btnSignUp;
	private: System::Windows::Forms::TextBox^  txtEmail;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::ComponentModel::Container ^components;

//UI of the form
#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnSignUp = (gcnew System::Windows::Forms::Button());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtUsername
			// 
			this->txtUsername->Location = System::Drawing::Point(148, 57);
			this->txtUsername->Margin = System::Windows::Forms::Padding(4);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(132, 22);
			this->txtUsername->TabIndex = 0;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(148, 108);
			this->txtPassword->Margin = System::Windows::Forms::Padding(4);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(132, 22);
			this->txtPassword->TabIndex = 1;
			// 
			// btnSignUp
			// 
			this->btnSignUp->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->btnSignUp->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSignUp->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSignUp->ForeColor = System::Drawing::Color::White;
			this->btnSignUp->Location = System::Drawing::Point(96, 209);
			this->btnSignUp->Margin = System::Windows::Forms::Padding(4);
			this->btnSignUp->Name = L"btnSignUp";
			this->btnSignUp->Size = System::Drawing::Size(126, 28);
			this->btnSignUp->TabIndex = 2;
			this->btnSignUp->Text = L"Sign Up";
			this->btnSignUp->UseVisualStyleBackColor = false;
			this->btnSignUp->Click += gcnew System::EventHandler(this, &SignUpForm::btnSignUp_Click);
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(148, 156);
			this->txtEmail->Margin = System::Windows::Forms::Padding(4);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(132, 22);
			this->txtEmail->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(53, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(67, 111);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Email ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(57, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Password";
			// 
			// SignUpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(338, 303);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnSignUp);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->txtEmail);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"SignUpForm";
			this->Text = L"Sign Up";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
    //when signup button is pressed
    private: System::Void btnSignUp_Click(System::Object^  sender, System::EventArgs^  e) {
        // Get username, email, and password from TextBoxes
        String^ username = txtUsername->Text;
        String^ password = txtPassword->Text;
		String^ email = txtEmail->Text;

        // Store credentials in MySQL database using ODBC connectivity
        try {
			// Connect to the database
			String^ Connection = "Driver={SQL Server};Server=SAI-DEEKSHITHA\\SQLEXPRESS01;Database=EXAM;";
            OdbcConnection^ conn = gcnew OdbcConnection(Connection);
            conn->Open();

			// SQL query to insert user details into the Users table
            String^ query = "INSERT INTO Users (Username,Email, Password) VALUES (?, ?, ?)";
            OdbcCommand^ cmd = gcnew OdbcCommand(query, conn);
			// Add parameters to the SQL query
            cmd->Parameters->AddWithValue("@username", username);
            cmd->Parameters->AddWithValue("@password", password);
			cmd->Parameters->AddWithValue("@email", email);
            cmd->ExecuteNonQuery();										// Execute the SQL command

            MessageBox::Show("User signed up successfully");			// Show success message if successful

            conn->Close();												// Close the database connection
        }
        catch (OdbcException^ ex) {
            MessageBox::Show("Error: " + ex->Message);					// Display error message if an exception occurs
        }
		SignUpForm::Close();											// Close the SignUpForm after successful signup
    }
    };
}