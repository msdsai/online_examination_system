#pragma once

#include "signup.h"
#include "start_page.h"
#include <Windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>
//#include "resource.h"
#include "Resource.h"

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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::ComponentModel::Container ^components;

			 System::Drawing::Bitmap^ LoadEmbeddedImage()
{
    // Get the assembly where the resource is embedded
    System::Reflection::Assembly^ assembly = System::Reflection::Assembly::GetExecutingAssembly();

    // Specify the image name (make sure to use the correct resource name)
    System::String^ resourceName = "LoginApp.IITG_logo1.jpg";

    // Load the resource stream
    System::IO::Stream^ stream = assembly->GetManifestResourceStream(resourceName);

    // Create a bitmap from the stream
    return gcnew System::Drawing::Bitmap(stream);
}

//UI of the form
#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->btnSignIn = (gcnew System::Windows::Forms::Button());
			this->btnSignUp = (gcnew System::Windows::Forms::Button());
			this->lblOption = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnSignIn
			// 
			this->btnSignIn->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->btnSignIn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSignIn->Font = (gcnew System::Drawing::Font(L"Arial", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSignIn->ForeColor = System::Drawing::Color::White;
			this->btnSignIn->Location = System::Drawing::Point(151, 334);
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
			this->btnSignUp->Location = System::Drawing::Point(254, 403);
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
			this->lblOption->Location = System::Drawing::Point(126, 411);
			this->lblOption->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblOption->Name = L"lblOption";
			this->lblOption->Size = System::Drawing::Size(87, 20);
			this->lblOption->TabIndex = 2;
			this->lblOption->Text = L"New User\?";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(147, 204);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(48, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Email";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(117, 271);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Password";
			// 
			// email
			// 
			this->email->Location = System::Drawing::Point(254, 196);
			this->email->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(112, 26);
			this->email->TabIndex = 5;
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(254, 263);
			this->password->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(112, 26);
			this->password->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::RoyalBlue;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Dock = System::Windows::Forms::DockStyle::Top;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Felix Titling", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label3->Size = System::Drawing::Size(1098, 35);
			this->label3->TabIndex = 7;
			this->label3->Text = L"                     LOGIN                    ";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->groupBox1->Controls->Add(this->email);
			this->groupBox1->Controls->Add(this->btnSignIn);
			this->groupBox1->Controls->Add(this->btnSignUp);
			this->groupBox1->Controls->Add(this->password);
			this->groupBox1->Controls->Add(this->lblOption);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Right;
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->groupBox1->Location = System::Drawing::Point(601, 35);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(497, 679);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sign In";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(94, 126);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(363, 386);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1098, 714);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label3);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"LoginForm";
			this->Text = L"Login Form";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	//when signin button is pressed
    private: System::Void btnSignIn_Click(System::Object^  sender, System::EventArgs^  e) {
        // Open sign-in page
        // You can navigate to another form or handle sign-in logic here

	    // Get email, and password from TextBoxes
        String^ pass = password->Text;
		String^ mail = email->Text;

		// Check credentials in MySQL database using ODBC connectivity
		try {
			// Connect to the database
			String^ Connection = "Driver={SQL Server};Server=SAI-DEEKSHITHA\\SQLEXPRESS01;Database=EXAM;";
            OdbcConnection^ conn = gcnew OdbcConnection(Connection);
            conn->Open();

			// SQL query to exract user details from the Users table
            String^ query = "SELECT Password FROM Users WHERE Email=(?)";
            OdbcCommand^ cmd = gcnew OdbcCommand(query, conn);
			cmd->Parameters->AddWithValue("@email", mail);
			OdbcDataReader^ reader = cmd->ExecuteReader();

			if (reader->Read()) {										// Check if there is a row in the result set
				String^ dbPassword = reader->GetString(0);				// Get the password from the reader
				if (dbPassword == pass) {								//if the mathces with actual password then person can sign in
					MessageBox::Show("User signed in successfully");
					start_page^ Start_page = gcnew start_page();
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
	
	//when signup button is pressed
    private: System::Void btnSignUp_Click(System::Object^  sender, System::EventArgs^  e) {
        // Open sign-up page(another form)
        SignUpForm^ signUpForm = gcnew SignUpForm();
        signUpForm->Show();
    }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}