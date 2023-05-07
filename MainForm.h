#pragma once

namespace bxstd {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ login_btn;
	protected:
	private: System::Windows::Forms::TextBox^ ID_txt;
	private: System::Windows::Forms::TextBox^ PW_txt;
	private: System::Windows::Forms::Panel^ login_panel;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Splitter^ splitter2;
	private: System::Windows::Forms::Splitter^ splitter1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ exit_btn;
	private: System::Windows::Forms::Button^ logout_btn;




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
			this->login_btn = (gcnew System::Windows::Forms::Button());
			this->ID_txt = (gcnew System::Windows::Forms::TextBox());
			this->PW_txt = (gcnew System::Windows::Forms::TextBox());
			this->login_panel = (gcnew System::Windows::Forms::Panel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->splitter2 = (gcnew System::Windows::Forms::Splitter());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->logout_btn = (gcnew System::Windows::Forms::Button());
			this->exit_btn = (gcnew System::Windows::Forms::Button());
			this->login_panel->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// login_btn
			// 
			this->login_btn->Location = System::Drawing::Point(43, 78);
			this->login_btn->Name = L"login_btn";
			this->login_btn->Size = System::Drawing::Size(100, 23);
			this->login_btn->TabIndex = 0;
			this->login_btn->Text = L"login";
			this->login_btn->UseVisualStyleBackColor = true;
			this->login_btn->Click += gcnew System::EventHandler(this, &MainForm::login_btn_Click);
			// 
			// ID_txt
			// 
			this->ID_txt->Location = System::Drawing::Point(43, 26);
			this->ID_txt->Name = L"ID_txt";
			this->ID_txt->Size = System::Drawing::Size(100, 20);
			this->ID_txt->TabIndex = 1;
			// 
			// PW_txt
			// 
			this->PW_txt->Location = System::Drawing::Point(43, 52);
			this->PW_txt->Name = L"PW_txt";
			this->PW_txt->Size = System::Drawing::Size(100, 20);
			this->PW_txt->TabIndex = 2;
			// 
			// login_panel
			// 
			this->login_panel->Controls->Add(this->ID_txt);
			this->login_panel->Controls->Add(this->login_btn);
			this->login_panel->Controls->Add(this->PW_txt);
			this->login_panel->Location = System::Drawing::Point(201, 613);
			this->login_panel->Name = L"login_panel";
			this->login_panel->Size = System::Drawing::Size(187, 118);
			this->login_panel->TabIndex = 3;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(15, 17);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(922, 313);
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->splitter2);
			this->tabPage1->Controls->Add(this->splitter1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(914, 287);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// splitter2
			// 
			this->splitter2->Location = System::Drawing::Point(207, 3);
			this->splitter2->Name = L"splitter2";
			this->splitter2->Size = System::Drawing::Size(211, 281);
			this->splitter2->TabIndex = 1;
			this->splitter2->TabStop = false;
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(3, 3);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(204, 281);
			this->splitter1->TabIndex = 0;
			this->splitter1->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(914, 287);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(914, 287);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(914, 287);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->logout_btn);
			this->panel1->Controls->Add(this->exit_btn);
			this->panel1->Controls->Add(this->tabControl1);
			this->panel1->Location = System::Drawing::Point(40, 34);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(960, 530);
			this->panel1->TabIndex = 0;
			// 
			// logout_btn
			// 
			this->logout_btn->Location = System::Drawing::Point(462, 427);
			this->logout_btn->Name = L"logout_btn";
			this->logout_btn->Size = System::Drawing::Size(75, 23);
			this->logout_btn->TabIndex = 5;
			this->logout_btn->Text = L"로그아웃";
			this->logout_btn->UseVisualStyleBackColor = true;
			// 
			// exit_btn
			// 
			this->exit_btn->Location = System::Drawing::Point(362, 427);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(75, 23);
			this->exit_btn->TabIndex = 4;
			this->exit_btn->Text = L"강제종료";
			this->exit_btn->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2097, 773);
			this->Controls->Add(this->login_panel);
			this->Controls->Add(this->panel1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->login_panel->ResumeLayout(false);
			this->login_panel->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void login_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	};
}
