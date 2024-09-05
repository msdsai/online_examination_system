#pragma once

#include "signup.h"
#include "start_page.h"
#include "mainpage_admin.h"
#include <Windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>

namespace LoginApp {

    using namespace System;
    using namespace System::Windows::Forms;
    using namespace System::Data::Odbc;

    public ref class LoginForm : public System::Windows::Forms::Form
    {
    public:
        LoginForm(void)
        {
            InitializeComponent();
			password->PasswordChar='*';
        }

    protected:
        ~LoginForm()
        {
            if (components)
            {
                delete components;
            }
        }
	//adding elements to form that are needed
    private: System::Windows::Forms::Button^  btnSignIn;
    private: System::Windows::Forms::Button^  btnSignUp;
    private: System::Windows::Forms::Label^  lblOption;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::TextBox^  password;
	private: System::Windows::Forms::Label^  label3;
	private: System::ComponentModel::Container ^components;
	 private: String^ mail;
//UI of the form
#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
			this->btnSignIn = (gcnew System::Windows::Forms::Button());
			this->btnSignUp = (gcnew System::Windows::Forms::Button());
			this->lblOption = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnSignIn
			// 
			this->btnSignIn->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->btnSignIn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSignIn->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSignIn->ForeColor = System::Drawing::Color::White;
			this->btnSignIn->Location = System::Drawing::Point(45, 221);
			this->btnSignIn->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSignIn->Name = L"btnSignIn";
			this->btnSignIn->Size = System::Drawing::Size(194, 35);
			this->btnSignIn->TabIndex = 0;
			this->btnSignIn->Text = L"Sign In";
			this->btnSignIn->UseVisualStyleBackColor = false;
			this->btnSignIn->Click += gcnew System::EventHandler(this, &LoginForm::btnSignIn_Click);
			// 
			// btnSignUp
			// 
			this->btnSignUp->BackColor = System::Drawing::Color::RoyalBlue;
			this->btnSignUp->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSignUp->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSignUp->ForeColor = System::Drawing::Color::White;
			this->btnSignUp->Location = System::Drawing::Point(120, 288);
			this->btnSignUp->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSignUp->Name = L"btnSignUp";
			this->btnSignUp->Size = System::Drawing::Size(112, 35);
			this->btnSignUp->TabIndex = 1;
			this->btnSignUp->Text = L"Sign Up";
			this->btnSignUp->UseVisualStyleBackColor = false;
			this->btnSignUp->Click += gcnew System::EventHandler(this, &LoginForm::btnSignUp_Click);
			// 
			// lblOption
			// 
			this->lblOption->AutoSize = true;
			this->lblOption->Location = System::Drawing::Point(25, 296);
			this->lblOption->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblOption->Name = L"lblOption";
			this->lblOption->Size = System::Drawing::Size(87, 20);
			this->lblOption->TabIndex = 2;
			this->lblOption->Text = L"New User\?";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Email";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 158);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password";
			// 
			// email
			// 
			this->email->Location = System::Drawing::Point(136, 75);
			this->email->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(112, 26);
			this->email->TabIndex = 5;
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(136, 151);
			this->password->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(112, 26);
			this->password->TabIndex = 6;
			//this->password->TextChanged += gcnew System::EventHandler(this, &LoginForm::password_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::RoyalBlue;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(34, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(223, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"                     LOGIN                    ";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(313, 409);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->password);
			this->Controls->Add(this->email);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lblOption);
			this->Controls->Add(this->btnSignUp);
			this->Controls->Add(this->btnSignIn);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"LoginForm";
			this->Text = L"Login Form";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//when signin button is pressed

	public: void SubscribeToMainPageClosed(mainpage_admin^ mainPageForm) {
		mainPageForm->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &LoginForm::mainpage_FormClosed);
	}

    private: System::Void btnSignIn_Click(System::Object^  sender, System::EventArgs^  e) {
        // Open sign-in page
        // You can navigate to another form or handle sign-in logic here

	    // Get email, and password from TextBoxes
        String^ pass = password->Text;
		mail = email->Text;

		// Check credentials in MySQL database using ODBC connectivity
		try {
			// Connect to the database
			String^ Connection = "Driver={SQL Server};Server=DESKTOP-1GAC8IM\\SQLEXPRESS;Database=exam;";
            OdbcConnection^ conn = gcnew OdbcConnection(Connection);
            conn->Open();

			// SQL query to exract user details from the Users table
            String^ query = "SELECT Password FROM Users WHERE Email=(?)";
            OdbcCommand^ cmd = gcnew OdbcCommand(query, conn);
			cmd->Parameters->AddWithValue("@email", mail);
			OdbcDataReader^ reader = cmd->ExecuteReader();

			if (reader->Read()) {										// Check if there is a row in the result set
				String^ dbPassword = reader->GetString(0);				// Get the password from the reader
				if(String::Equals(mail,"admin@iitg.ac.in") && dbPassword == pass)
				{
					// Create an instance of the mainpage_admin class using gcnew
					// Create an instance of the mainpage_admin form
					mainpage_admin^ adminpage = gcnew mainpage_admin();

					// Create an instance of the LoginForm form
					LoginForm^ loginFormInstance = gcnew LoginForm();

					// Subscribe to the FormClosed event of mainpage_admin in the LoginForm instance
					LoginForm::SubscribeToMainPageClosed(adminpage);

					// Show the adminpage form
					adminpage->Show();

					// Hide the login page form
					LoginForm::Hide();

				}
				else if (dbPassword == pass) {								//if the mathces with actual password then person can sign in
					//MessageBox::Show("User signed in successfully");
					start_page^ Start_page = gcnew start_page(mail);
					//LoginForm::SubscribeToMainPageClosed(Start_page);
					Start_page->Show();
					LoginForm::Hide();
				}
				else {													//else showing a msg box for incorrect password
					MessageBox::Show("Incorrect password");
				}
			}
			else {														//when a user is not present 
				MessageBox::Show("User with the provided email not found");
			}
            
			reader->Close();
            conn->Close();
        }
        catch (OdbcException^ ex) {
            MessageBox::Show("Error: " + ex->Message);					// Display error message if an exception occurs
        }
        
    }


private: System::Void mainpage_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
    // Close the LoginForm when mainpage is closed
			 LoginForm::Close();
    this->Close();
}

private: System::Void Form1_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
 		 
    this->Close();
}

	
	//when signup button is pressed
    private: System::Void btnSignUp_Click(System::Object^  sender, System::EventArgs^  e) {
        // Open sign-up page(another form)
        SignUpForm^ signUpForm = gcnew SignUpForm();
        signUpForm->Show();
    }
private: System::Void LoginForm_Load(System::Object^  sender, System::EventArgs^  e) {
		 }

};
}