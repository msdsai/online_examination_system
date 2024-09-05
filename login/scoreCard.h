#pragma once

#include <string>
#include <msclr\marshal_cppstd.h>

namespace LoginApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Odbc;

	/// <summary>
	/// Summary for scoreCard
	/// </summary>
	public ref class scoreCard : public System::Windows::Forms::Form
	{
		private: String^ mail;
	public:
		scoreCard(String^ email) : mail(email)
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
		~scoreCard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  p1;
	private: System::Windows::Forms::TextBox^  tmn;
	protected: 

	private: System::Windows::Forms::Label^  tm;
	private: System::Windows::Forms::TextBox^  mn;


	private: System::Windows::Forms::Label^  m;
	private: System::Windows::Forms::TextBox^  name;




	private: System::Windows::Forms::Label^  n;


	private: System::Windows::Forms::Label^  sc;
	private: System::Windows::Forms::Panel^  p2;

	private: System::Windows::Forms::Label^  cs;
	private: System::Windows::Forms::TextBox^  gn;

	private: System::Windows::Forms::Label^  g;
	//private: System::Windows::Forms::Button^  print;
	//private: Microsoft::VisualBasic::PowerPacks::Printing::PrintForm^  printForm1;


	private: System::ComponentModel::IContainer^  components;


	private:int score;
	private:int marks;
		


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(scoreCard::typeid));
			this->p1 = (gcnew System::Windows::Forms::Panel());
			//this->print = (gcnew System::Windows::Forms::Button());
			this->gn = (gcnew System::Windows::Forms::TextBox());
			this->g = (gcnew System::Windows::Forms::Label());
			this->tmn = (gcnew System::Windows::Forms::TextBox());
			this->tm = (gcnew System::Windows::Forms::Label());
			this->mn = (gcnew System::Windows::Forms::TextBox());
			this->m = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::TextBox());
			this->n = (gcnew System::Windows::Forms::Label());
			this->sc = (gcnew System::Windows::Forms::Label());
			this->p2 = (gcnew System::Windows::Forms::Panel());
			this->cs = (gcnew System::Windows::Forms::Label());
			this->score=0;
			this->marks=0;
			//this->printForm1 = (gcnew Microsoft::VisualBasic::PowerPacks::Printing::PrintForm(this->components));
			this->p1->SuspendLayout();
			this->p2->SuspendLayout();
			this->SuspendLayout();

			score_calculation();
			// 
			// p1
			// 
			this->p1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->p1->BackColor = System::Drawing::Color::WhiteSmoke;
			//this->p1->Controls->Add(this->print);
			this->p1->Controls->Add(this->gn);
			this->p1->Controls->Add(this->g);
			this->p1->Controls->Add(this->tmn);
			this->p1->Controls->Add(this->tm);
			this->p1->Controls->Add(this->mn);
			this->p1->Controls->Add(this->m);
			this->p1->Controls->Add(this->name);
			this->p1->Controls->Add(this->n);
			this->p1->Controls->Add(this->sc);
			this->p1->Controls->Add(this->p2);
			this->p1->Location = System::Drawing::Point(1, 0);
			this->p1->Name = L"p1";
			this->p1->Size = System::Drawing::Size(1219, 645);
			this->p1->TabIndex = 0;
			this->p1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &scoreCard::p1_Paint);
			// 
			// print
			// 
			/*this->print->BackColor = System::Drawing::Color::Red;
			this->print->Cursor = System::Windows::Forms::Cursors::Hand;
			this->print->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->print->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->print->ForeColor = System::Drawing::Color::White;
			this->print->Location = System::Drawing::Point(843, 511);
			this->print->Name = L"print";
			this->print->Size = System::Drawing::Size(122, 45);
			this->print->TabIndex = 10;
			this->print->Text = L"Print";
			this->print->UseVisualStyleBackColor = false;
			//this->print->Click += gcnew System::EventHandler(this, &scoreCard::print_Click);*/
			// 
			// gn
			// 
			this->gn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->gn->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->gn->Cursor = System::Windows::Forms::Cursors::Default;
			this->gn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->gn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->gn->Location = System::Drawing::Point(220, 344);
			this->gn->Multiline = true;
			this->gn->Name = L"gn";
			this->gn->Size = System::Drawing::Size(130, 38);
			this->gn->TabIndex = 9;
			this->gn->Text = L"BB";
			// 
			// g
			// 
			this->g->AutoSize = true;
			this->g->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->g->ForeColor = System::Drawing::Color::DarkGreen;
			this->g->Location = System::Drawing::Point(129, 342);
			this->g->Name = L"g";
			this->g->Size = System::Drawing::Size(84, 26);
			this->g->TabIndex = 8;
			this->g->Text = L"Grade:";
			// 
			// tmn
			// 
			this->tmn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->tmn->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tmn->Cursor = System::Windows::Forms::Cursors::Default;
			this->tmn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tmn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->tmn->Location = System::Drawing::Point(761, 262);
			this->tmn->Multiline = true;
			this->tmn->Name = L"tmn";
			this->tmn->Size = System::Drawing::Size(130, 38);
			this->tmn->TabIndex = 7;
			this->tmn->Text = marks.ToString();
			// 
			// tm
			// 
			this->tm->AutoSize = true;
			this->tm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tm->ForeColor = System::Drawing::Color::DarkGreen;
			this->tm->Location = System::Drawing::Point(611, 261);
			this->tm->Name = L"tm";
			this->tm->Size = System::Drawing::Size(142, 26);
			this->tm->TabIndex = 6;
			this->tm->Text = L"Total Marks:";
			// 
			// mn
			// 
			this->mn->BackColor = System::Drawing::Color::WhiteSmoke;
			this->mn->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->mn->Cursor = System::Windows::Forms::Cursors::Default;
			this->mn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->mn->Location = System::Drawing::Point(220, 263);
			this->mn->Multiline = true;
			this->mn->Name = L"mn";
			this->mn->Size = System::Drawing::Size(130, 38);
			this->mn->TabIndex = 5;
			this->mn->Text = score.ToString();
			// 
			// m
			// 
			this->m->AutoSize = true;
			this->m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->m->ForeColor = System::Drawing::Color::DarkGreen;
			this->m->Location = System::Drawing::Point(129, 261);
			this->m->Name = L"m";
			this->m->Size = System::Drawing::Size(83, 26);
			this->m->TabIndex = 4;
			this->m->Text = L"Marks:";
			// 
			// name
			// 
			this->name->BackColor = System::Drawing::Color::WhiteSmoke;
			this->name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->name->Cursor = System::Windows::Forms::Cursors::Default;
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->name->Location = System::Drawing::Point(220, 176);
			this->name->Multiline = true;
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(427, 42);
			this->name->TabIndex = 3;
			this->name->Text = mail;
			this->name->TextChanged += gcnew System::EventHandler(this, &scoreCard::name_TextChanged);
			// 
			// n
			// 
			this->n->AutoSize = true;
			this->n->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->n->ForeColor = System::Drawing::Color::DarkGreen;
			this->n->Location = System::Drawing::Point(129, 174);
			this->n->Name = L"n";
			this->n->Size = System::Drawing::Size(89, 26);
			this->n->TabIndex = 2;
			this->n->Text = L"Email: ";
			// 
			// sc
			// 
			this->sc->AutoSize = true;
			this->sc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->sc->ForeColor = System::Drawing::Color::Red;
			this->sc->Location = System::Drawing::Point(500, 83);
			this->sc->Name = L"sc";
			this->sc->Size = System::Drawing::Size(145, 29);
			this->sc->TabIndex = 1;
			this->sc->Text = L"Score Card";
			// 
			// p2
			// 
			this->p2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->p2->BackColor = System::Drawing::Color::SkyBlue;
			this->p2->Controls->Add(this->cs);
			this->p2->Location = System::Drawing::Point(3, -1);
			this->p2->Name = L"p2";
			this->p2->Size = System::Drawing::Size(1213, 52);
			this->p2->TabIndex = 0;
			// 
			// cs
			// 
			this->cs->AutoSize = true;
			this->cs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cs->Location = System::Drawing::Point(482, 10);
			this->cs->Name = L"cs";
			this->cs->Size = System::Drawing::Size(169, 29);
			this->cs->TabIndex = 0;
			this->cs->Text = L"CS346 EXAM";
			this->cs->Click += gcnew System::EventHandler(this, &scoreCard::cs_Click);
			// 
			// printForm1
			// 
			/*this->printForm1->DocumentName = L"document";
			this->printForm1->Form = this;
			this->printForm1->PrintAction = System::Drawing::Printing::PrintAction::PrintToPrinter;
			this->printForm1->PrinterSettings = (cli::safe_cast<System::Drawing::Printing::PrinterSettings^  >(resources->GetObject(L"printForm1.PrinterSettings")));
			this->printForm1->PrintFileName = nullptr;*/
			// 
			// scoreCard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1217, 643);
			this->Controls->Add(this->p1);
			this->Name = L"scoreCard";
			this->Text = L"scoreCard";
			this->p1->ResumeLayout(false);
			this->p1->PerformLayout();
			this->p2->ResumeLayout(false);
			this->p2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		void score_calculation(){
			try {
				String^ Connection = "Driver={SQL Server};Server=DESKTOP-1GAC8IM\\SQLEXPRESS;Database=exam;";
				OdbcConnection^ conn = gcnew OdbcConnection(Connection);
				conn->Open();
				String^ query_ans = "SELECT score FROM scores WHERE user_id = ?";
				OdbcCommand^ command_ans = gcnew OdbcCommand(query_ans, conn);

				// Bind parameter values
				command_ans->Parameters->AddWithValue("user_id", mail);

				// Execute the query
				OdbcDataReader^ reader_ans = command_ans->ExecuteReader();
				if(reader_ans->Read()){
					String^ temp=reader_ans[0]->ToString();
						std::string stdStr = msclr::interop::marshal_as<std::string>(temp);
                        score = System::Convert::ToInt32(gcnew String(stdStr.c_str()));
					
					reader_ans->Close();
				}
				else {
					reader_ans->Close();
				}
				
				String^ query = "SELECT mark FROM questions";
				OdbcCommand^ command = gcnew OdbcCommand(query, conn);

				// Execute the query
				OdbcDataReader^ reader = command->ExecuteReader();
				if(reader->HasRows){
					marks=0;
					while(reader->Read()){
						String^ mark=reader[0]->ToString();
						std::string stdStr = msclr::interop::marshal_as<std::string>(mark);
                        int intValue = System::Convert::ToInt32(gcnew String(stdStr.c_str()));
                        marks+=intValue;	
					}
					reader->Close();
				}
				else {
					reader->Close();
				}
				conn->Close();
		
			}
			catch (OdbcException^ ex) {
				MessageBox::Show("Error: " + ex->Message);
			}
		}
		//private: System::Void print_Click(System::Object^ sender, System::EventArgs^ e) ;
				// void scoreCard::pd_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e);:

	   /*void scoreCard::print_Click(System::Object^ sender, System::EventArgs^ e)
		{
			print->Visible = false;

			// Set up the PrintDocument
			System::Drawing::Printing::PrintDocument^ pd = gcnew System::Drawing::Printing::PrintDocument();
			pd->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &scoreCard::pd_PrintPage);

			// Set up the PrintPreviewDialog
			PrintPreviewDialog^ previewDialog = gcnew PrintPreviewDialog();
			previewDialog->Document = pd;

			// Show the preview dialog
			previewDialog->ShowDialog();

			print->Visible = true;
		}

		void scoreCard::pd_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e)
		{
			// Draw the form on the printout
			System::Drawing::Bitmap^ bitmap = gcnew System::Drawing::Bitmap(p1->Width, p1->Height);
			p1->DrawToBitmap(bitmap, p1->ClientRectangle);
			e->Graphics->DrawImage(bitmap, 0, 0);

        
		}*/











private: System::Void cs_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void p1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void name_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
