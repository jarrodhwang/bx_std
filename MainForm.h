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







	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ exit_btn;
	private: System::Windows::Forms::Button^ logout_btn;
	private: System::Windows::Forms::ListView^ boxListView;
	private: System::Windows::Forms::Panel^ box_main_panel;
	private: System::Windows::Forms::Button^ select_box_btn;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ text_lastModifed;
	private: System::Windows::Forms::Button^ refresh;







	private: System::Windows::Forms::Label^ checked_time;
	private: System::Windows::Forms::Label^ checked_date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ product_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ current_stock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ warning_stock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BinID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ config;

















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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->boxListView = (gcnew System::Windows::Forms::ListView());
			this->logout_btn = (gcnew System::Windows::Forms::Button());
			this->exit_btn = (gcnew System::Windows::Forms::Button());
			this->box_main_panel = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->checked_time = (gcnew System::Windows::Forms::Label());
			this->refresh = (gcnew System::Windows::Forms::Button());
			this->checked_date = (gcnew System::Windows::Forms::Label());
			this->text_lastModifed = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->select_box_btn = (gcnew System::Windows::Forms::Button());
			this->product_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->current_stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->warning_stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BinID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->config = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->login_panel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->box_main_panel->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
			this->login_panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->login_panel->Controls->Add(this->ID_txt);
			this->login_panel->Controls->Add(this->login_btn);
			this->login_panel->Controls->Add(this->PW_txt);
			this->login_panel->Location = System::Drawing::Point(242, 566);
			this->login_panel->Name = L"login_panel";
			this->login_panel->Size = System::Drawing::Size(187, 118);
			this->login_panel->TabIndex = 3;
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->boxListView);
			this->panel1->Controls->Add(this->logout_btn);
			this->panel1->Controls->Add(this->exit_btn);
			this->panel1->Location = System::Drawing::Point(33, 34);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(658, 497);
			this->panel1->TabIndex = 0;
			// 
			// boxListView
			// 
			this->boxListView->HideSelection = false;
			this->boxListView->Location = System::Drawing::Point(16, 14);
			this->boxListView->Name = L"boxListView";
			this->boxListView->Size = System::Drawing::Size(621, 368);
			this->boxListView->TabIndex = 6;
			this->boxListView->UseCompatibleStateImageBehavior = false;
			// 
			// logout_btn
			// 
			this->logout_btn->Location = System::Drawing::Point(320, 446);
			this->logout_btn->Name = L"logout_btn";
			this->logout_btn->Size = System::Drawing::Size(75, 23);
			this->logout_btn->TabIndex = 5;
			this->logout_btn->Text = L"로그아웃";
			this->logout_btn->UseVisualStyleBackColor = true;
			// 
			// exit_btn
			// 
			this->exit_btn->Location = System::Drawing::Point(239, 446);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(75, 23);
			this->exit_btn->TabIndex = 4;
			this->exit_btn->Text = L"강제종료";
			this->exit_btn->UseVisualStyleBackColor = true;
			// 
			// box_main_panel
			// 
			this->box_main_panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->box_main_panel->Controls->Add(this->panel2);
			this->box_main_panel->Controls->Add(this->dataGridView1);
			this->box_main_panel->Controls->Add(this->select_box_btn);
			this->box_main_panel->Location = System::Drawing::Point(732, 34);
			this->box_main_panel->Name = L"box_main_panel";
			this->box_main_panel->Size = System::Drawing::Size(971, 497);
			this->box_main_panel->TabIndex = 7;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->checked_time);
			this->panel2->Controls->Add(this->refresh);
			this->panel2->Controls->Add(this->checked_date);
			this->panel2->Controls->Add(this->text_lastModifed);
			this->panel2->Location = System::Drawing::Point(692, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(274, 55);
			this->panel2->TabIndex = 11;
			// 
			// checked_time
			// 
			this->checked_time->AutoSize = true;
			this->checked_time->Location = System::Drawing::Point(6, 37);
			this->checked_time->Name = L"checked_time";
			this->checked_time->Size = System::Drawing::Size(49, 13);
			this->checked_time->TabIndex = 12;
			this->checked_time->Text = L"16:00:04";
			// 
			// refresh
			// 
			this->refresh->Location = System::Drawing::Point(173, 21);
			this->refresh->Name = L"refresh";
			this->refresh->Size = System::Drawing::Size(89, 23);
			this->refresh->TabIndex = 9;
			this->refresh->Text = L"다시 불러오기";
			this->refresh->UseVisualStyleBackColor = true;
			// 
			// checked_date
			// 
			this->checked_date->AutoSize = true;
			this->checked_date->Location = System::Drawing::Point(5, 21);
			this->checked_date->Name = L"checked_date";
			this->checked_date->Size = System::Drawing::Size(94, 13);
			this->checked_date->TabIndex = 11;
			this->checked_date->Text = L"2023년 05월 07일";
			// 
			// text_lastModifed
			// 
			this->text_lastModifed->AutoSize = true;
			this->text_lastModifed->Location = System::Drawing::Point(3, 4);
			this->text_lastModifed->Name = L"text_lastModifed";
			this->text_lastModifed->Size = System::Drawing::Size(90, 13);
			this->text_lastModifed->TabIndex = 10;
			this->text_lastModifed->Text = L"마지막 확인 시간";
			this->text_lastModifed->Click += gcnew System::EventHandler(this, &MainForm::text_lastModifed_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->product_name,
					this->current_stock, this->warning_stock, this->BinID, this->config
			});
			this->dataGridView1->Location = System::Drawing::Point(3, 64);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(963, 428);
			this->dataGridView1->TabIndex = 8;
			// 
			// select_box_btn
			// 
			this->select_box_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->select_box_btn->Location = System::Drawing::Point(3, 3);
			this->select_box_btn->Name = L"select_box_btn";
			this->select_box_btn->Size = System::Drawing::Size(180, 48);
			this->select_box_btn->TabIndex = 0;
			this->select_box_btn->Text = L"제 1공장 1번 박스";
			this->select_box_btn->UseVisualStyleBackColor = false;
			// 
			// product_name
			// 
			this->product_name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->product_name->HeaderText = L"제품명";
			this->product_name->Name = L"product_name";
			this->product_name->ReadOnly = true;
			// 
			// current_stock
			// 
			this->current_stock->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->current_stock->HeaderText = L"보유 재고";
			this->current_stock->Name = L"current_stock";
			this->current_stock->ReadOnly = true;
			// 
			// warning_stock
			// 
			this->warning_stock->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->warning_stock->HeaderText = L"안전 재고";
			this->warning_stock->Name = L"warning_stock";
			this->warning_stock->ReadOnly = true;
			// 
			// BinID
			// 
			this->BinID->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->BinID->HeaderText = L"빈 넘버";
			this->BinID->Name = L"BinID";
			this->BinID->ReadOnly = true;
			// 
			// config
			// 
			this->config->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->config->HeaderText = L"설정";
			this->config->Name = L"config";
			this->config->ReadOnly = true;
			// 
			// MainForm
			// 
			this->ClientSize = System::Drawing::Size(1736, 722);
			this->Controls->Add(this->box_main_panel);
			this->Controls->Add(this->login_panel);
			this->Controls->Add(this->panel1);
			this->Name = L"MainForm";
			this->Text = L"Boxcon Standard";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->login_panel->ResumeLayout(false);
			this->login_panel->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->box_main_panel->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void login_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void text_lastModifed_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
