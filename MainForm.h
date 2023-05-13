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





	private: System::Windows::Forms::Panel^ modify_panel;
	private: System::Windows::Forms::Panel^ product_info_panel;











	private: System::Windows::Forms::Button^ delete_btn;
	private: System::Windows::Forms::Button^ save_btn;
	private: System::Windows::Forms::Button^ insert_product_btn;
	private: System::Windows::Forms::Button^ select_box_btn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ user_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ user_phonenum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ user_email;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ user_Is_sms;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ user_Is_katalk;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^ user_Is_email;
	private: System::Windows::Forms::Panel^ product_panel;

	private: System::Windows::Forms::Panel^ product_info_panel2;

	private: System::Windows::Forms::TextBox^ wrn_stk;
	private: System::Windows::Forms::TextBox^ wrn_cyc;
	private: System::Windows::Forms::TextBox^ unit_weight;
	private: System::Windows::Forms::TextBox^ crt_stk;
	private: System::Windows::Forms::Label^ unit_label;
	private: System::Windows::Forms::Label^ count_label3;
	private: System::Windows::Forms::Label^ count_label2;
	private: System::Windows::Forms::Label^ count_label1;
	private: System::Windows::Forms::Label^ unit_wgt_label;
	private: System::Windows::Forms::Label^ wrn_cyc_label;
	private: System::Windows::Forms::Label^ wrn_stk_label;
	private: System::Windows::Forms::Label^ crt_stk_label;
	private: System::Windows::Forms::Label^ product_name_label;
	private: System::Windows::Forms::TextBox^ product_name_tb;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ product_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ current_stock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ warning_stock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BinID;
	private: System::Windows::Forms::DataGridViewButtonColumn^ config;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
private: System::Windows::Forms::Button^ bin112_btn;
private: System::Windows::Forms::Button^ bin111_btn;
private: System::Windows::Forms::Button^ bin110_btn;
private: System::Windows::Forms::Button^ bin109_btn;
private: System::Windows::Forms::Button^ bin108_btn;
private: System::Windows::Forms::Button^ bin107_btn;
private: System::Windows::Forms::Button^ bin106_btn;
private: System::Windows::Forms::Button^ bin105_btn;
private: System::Windows::Forms::Button^ bin104_btn;
private: System::Windows::Forms::Button^ bin103_btn;
private: System::Windows::Forms::Button^ bin102_btn;
private: System::Windows::Forms::Button^ bin101_btn;

















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
			this->modify_panel = (gcnew System::Windows::Forms::Panel());
			this->select_box_btn2 = (gcnew System::Windows::Forms::Button());
			this->insert_product_btn = (gcnew System::Windows::Forms::Button());
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->delete_btn = (gcnew System::Windows::Forms::Button());
			this->product_info_panel = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->user_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->user_phonenum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->user_email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->user_Is_sms = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->user_Is_katalk = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->user_Is_email = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->product_panel = (gcnew System::Windows::Forms::Panel());
			this->product_name_label = (gcnew System::Windows::Forms::Label());
			this->crt_stk_label = (gcnew System::Windows::Forms::Label());
			this->wrn_stk_label = (gcnew System::Windows::Forms::Label());
			this->wrn_cyc_label = (gcnew System::Windows::Forms::Label());
			this->unit_wgt_label = (gcnew System::Windows::Forms::Label());
			this->count_label1 = (gcnew System::Windows::Forms::Label());
			this->count_label2 = (gcnew System::Windows::Forms::Label());
			this->count_label3 = (gcnew System::Windows::Forms::Label());
			this->unit_label = (gcnew System::Windows::Forms::Label());
			this->crt_stk = (gcnew System::Windows::Forms::TextBox());
			this->unit_weight = (gcnew System::Windows::Forms::TextBox());
			this->wrn_cyc = (gcnew System::Windows::Forms::TextBox());
			this->wrn_stk = (gcnew System::Windows::Forms::TextBox());
			this->product_info_panel2 = (gcnew System::Windows::Forms::Panel());
			this->product_name_tb = (gcnew System::Windows::Forms::TextBox());
			this->product_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->current_stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->warning_stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BinID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->config = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bin101_btn = (gcnew System::Windows::Forms::Button());
			this->bin102_btn = (gcnew System::Windows::Forms::Button());
			this->bin103_btn = (gcnew System::Windows::Forms::Button());
			this->bin104_btn = (gcnew System::Windows::Forms::Button());
			this->bin105_btn = (gcnew System::Windows::Forms::Button());
			this->bin106_btn = (gcnew System::Windows::Forms::Button());
			this->bin107_btn = (gcnew System::Windows::Forms::Button());
			this->bin108_btn = (gcnew System::Windows::Forms::Button());
			this->bin109_btn = (gcnew System::Windows::Forms::Button());
			this->bin110_btn = (gcnew System::Windows::Forms::Button());
			this->bin111_btn = (gcnew System::Windows::Forms::Button());
			this->bin112_btn = (gcnew System::Windows::Forms::Button());
			this->login_panel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->box_main_panel->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->modify_panel->SuspendLayout();
			this->product_info_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->product_panel->SuspendLayout();
			this->product_info_panel2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
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
			this->login_panel->Location = System::Drawing::Point(33, 349);
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
			this->panel1->Size = System::Drawing::Size(304, 285);
			this->panel1->TabIndex = 0;
			// 
			// boxListView
			// 
			this->boxListView->HideSelection = false;
			this->boxListView->Location = System::Drawing::Point(16, 14);
			this->boxListView->Name = L"boxListView";
			this->boxListView->Size = System::Drawing::Size(276, 200);
			this->boxListView->TabIndex = 6;
			this->boxListView->UseCompatibleStateImageBehavior = false;
			// 
			// logout_btn
			// 
			this->logout_btn->Location = System::Drawing::Point(154, 241);
			this->logout_btn->Name = L"logout_btn";
			this->logout_btn->Size = System::Drawing::Size(75, 23);
			this->logout_btn->TabIndex = 5;
			this->logout_btn->Text = L"로그아웃";
			this->logout_btn->UseVisualStyleBackColor = true;
			// 
			// exit_btn
			// 
			this->exit_btn->Location = System::Drawing::Point(73, 241);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(75, 23);
			this->exit_btn->TabIndex = 4;
			this->exit_btn->Text = L"강제종료";
			this->exit_btn->UseVisualStyleBackColor = true;
			// 
			// box_main_panel
			// 
			this->box_main_panel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->box_main_panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->box_main_panel->Controls->Add(this->panel2);
			this->box_main_panel->Controls->Add(this->dataGridView1);
			this->box_main_panel->Controls->Add(this->select_box_btn);
			this->box_main_panel->Location = System::Drawing::Point(367, 38);
			this->box_main_panel->Name = L"box_main_panel";
			this->box_main_panel->Size = System::Drawing::Size(457, 270);
			this->box_main_panel->TabIndex = 7;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->panel2->Controls->Add(this->checked_time);
			this->panel2->Controls->Add(this->refresh);
			this->panel2->Controls->Add(this->checked_date);
			this->panel2->Controls->Add(this->text_lastModifed);
			this->panel2->Location = System::Drawing::Point(213, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(239, 55);
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
			this->refresh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->refresh->Location = System::Drawing::Point(147, 27);
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
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->product_name,
					this->current_stock, this->warning_stock, this->BinID, this->config
			});
			this->dataGridView1->Location = System::Drawing::Point(3, 64);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(449, 201);
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
			// modify_panel
			// 
			this->modify_panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->modify_panel->Controls->Add(this->product_info_panel);
			this->modify_panel->Controls->Add(this->delete_btn);
			this->modify_panel->Controls->Add(this->save_btn);
			this->modify_panel->Controls->Add(this->insert_product_btn);
			this->modify_panel->Controls->Add(this->select_box_btn2);
			this->modify_panel->Location = System::Drawing::Point(853, 34);
			this->modify_panel->Name = L"modify_panel";
			this->modify_panel->Size = System::Drawing::Size(630, 388);
			this->modify_panel->TabIndex = 8;
			// 
			// select_box_btn2
			// 
			this->select_box_btn2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->select_box_btn2->Location = System::Drawing::Point(3, 3);
			this->select_box_btn2->Name = L"select_box_btn2";
			this->select_box_btn2->Size = System::Drawing::Size(180, 48);
			this->select_box_btn2->TabIndex = 12;
			this->select_box_btn2->Text = L"제 1공장 1번 박스";
			this->select_box_btn2->UseVisualStyleBackColor = false;
			// 
			// insert_product_btn
			// 
			this->insert_product_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->insert_product_btn->Location = System::Drawing::Point(228, 24);
			this->insert_product_btn->Name = L"insert_product_btn";
			this->insert_product_btn->Size = System::Drawing::Size(78, 28);
			this->insert_product_btn->TabIndex = 13;
			this->insert_product_btn->Text = L"제품 추가";
			this->insert_product_btn->UseVisualStyleBackColor = false;
			// 
			// save_btn
			// 
			this->save_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->save_btn->Location = System::Drawing::Point(463, 25);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(66, 26);
			this->save_btn->TabIndex = 14;
			this->save_btn->Text = L"저장";
			this->save_btn->UseVisualStyleBackColor = false;
			// 
			// delete_btn
			// 
			this->delete_btn->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->delete_btn->Location = System::Drawing::Point(535, 25);
			this->delete_btn->Name = L"delete_btn";
			this->delete_btn->Size = System::Drawing::Size(66, 26);
			this->delete_btn->TabIndex = 15;
			this->delete_btn->Text = L"삭제";
			this->delete_btn->UseVisualStyleBackColor = false;
			// 
			// product_info_panel
			// 
			this->product_info_panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->product_info_panel->Controls->Add(this->tableLayoutPanel1);
			this->product_info_panel->Controls->Add(this->product_panel);
			this->product_info_panel->Controls->Add(this->dataGridView2);
			this->product_info_panel->Location = System::Drawing::Point(3, 57);
			this->product_info_panel->Name = L"product_info_panel";
			this->product_info_panel->Size = System::Drawing::Size(622, 326);
			this->product_info_panel->TabIndex = 9;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->user_name,
					this->user_phonenum, this->user_email, this->user_Is_sms, this->user_Is_katalk, this->user_Is_email
			});
			this->dataGridView2->Location = System::Drawing::Point(3, 198);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(614, 123);
			this->dataGridView2->TabIndex = 7;
			// 
			// user_name
			// 
			this->user_name->HeaderText = L"이름";
			this->user_name->Name = L"user_name";
			// 
			// user_phonenum
			// 
			this->user_phonenum->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->user_phonenum->HeaderText = L"전화번호";
			this->user_phonenum->Name = L"user_phonenum";
			// 
			// user_email
			// 
			this->user_email->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->user_email->HeaderText = L"이메일 주소";
			this->user_email->Name = L"user_email";
			// 
			// user_Is_sms
			// 
			this->user_Is_sms->HeaderText = L"문자";
			this->user_Is_sms->Name = L"user_Is_sms";
			this->user_Is_sms->Width = 50;
			// 
			// user_Is_katalk
			// 
			this->user_Is_katalk->HeaderText = L"카톡";
			this->user_Is_katalk->Name = L"user_Is_katalk";
			this->user_Is_katalk->Width = 50;
			// 
			// user_Is_email
			// 
			this->user_Is_email->HeaderText = L"이메일";
			this->user_Is_email->Name = L"user_Is_email";
			this->user_Is_email->Width = 50;
			// 
			// product_panel
			// 
			this->product_panel->Controls->Add(this->product_name_tb);
			this->product_panel->Controls->Add(this->product_info_panel2);
			this->product_panel->Controls->Add(this->product_name_label);
			this->product_panel->Location = System::Drawing::Point(3, 6);
			this->product_panel->Name = L"product_panel";
			this->product_panel->Size = System::Drawing::Size(313, 186);
			this->product_panel->TabIndex = 8;
			this->product_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel3_Paint);
			// 
			// product_name_label
			// 
			this->product_name_label->AutoSize = true;
			this->product_name_label->Location = System::Drawing::Point(29, 32);
			this->product_name_label->Name = L"product_name_label";
			this->product_name_label->Size = System::Drawing::Size(40, 13);
			this->product_name_label->TabIndex = 0;
			this->product_name_label->Text = L"제품명";
			// 
			// crt_stk_label
			// 
			this->crt_stk_label->AutoSize = true;
			this->crt_stk_label->Location = System::Drawing::Point(13, 13);
			this->crt_stk_label->Name = L"crt_stk_label";
			this->crt_stk_label->Size = System::Drawing::Size(54, 13);
			this->crt_stk_label->TabIndex = 1;
			this->crt_stk_label->Text = L"현재 재고";
			// 
			// wrn_stk_label
			// 
			this->wrn_stk_label->AutoSize = true;
			this->wrn_stk_label->Location = System::Drawing::Point(13, 37);
			this->wrn_stk_label->Name = L"wrn_stk_label";
			this->wrn_stk_label->Size = System::Drawing::Size(54, 13);
			this->wrn_stk_label->TabIndex = 2;
			this->wrn_stk_label->Text = L"안전 재고";
			// 
			// wrn_cyc_label
			// 
			this->wrn_cyc_label->AutoSize = true;
			this->wrn_cyc_label->Location = System::Drawing::Point(13, 60);
			this->wrn_cyc_label->Name = L"wrn_cyc_label";
			this->wrn_cyc_label->Size = System::Drawing::Size(54, 13);
			this->wrn_cyc_label->TabIndex = 3;
			this->wrn_cyc_label->Text = L"경고 주기";
			// 
			// unit_wgt_label
			// 
			this->unit_wgt_label->AutoSize = true;
			this->unit_wgt_label->Location = System::Drawing::Point(13, 82);
			this->unit_wgt_label->Name = L"unit_wgt_label";
			this->unit_wgt_label->Size = System::Drawing::Size(54, 13);
			this->unit_wgt_label->TabIndex = 4;
			this->unit_wgt_label->Text = L"단위 무게";
			// 
			// count_label1
			// 
			this->count_label1->AutoSize = true;
			this->count_label1->Location = System::Drawing::Point(165, 13);
			this->count_label1->Name = L"count_label1";
			this->count_label1->Size = System::Drawing::Size(18, 13);
			this->count_label1->TabIndex = 5;
			this->count_label1->Text = L"개";
			// 
			// count_label2
			// 
			this->count_label2->AutoSize = true;
			this->count_label2->Location = System::Drawing::Point(165, 37);
			this->count_label2->Name = L"count_label2";
			this->count_label2->Size = System::Drawing::Size(18, 13);
			this->count_label2->TabIndex = 6;
			this->count_label2->Text = L"개";
			// 
			// count_label3
			// 
			this->count_label3->AutoSize = true;
			this->count_label3->Location = System::Drawing::Point(165, 60);
			this->count_label3->Name = L"count_label3";
			this->count_label3->Size = System::Drawing::Size(18, 13);
			this->count_label3->TabIndex = 7;
			this->count_label3->Text = L"분";
			// 
			// unit_label
			// 
			this->unit_label->AutoSize = true;
			this->unit_label->Location = System::Drawing::Point(170, 82);
			this->unit_label->Name = L"unit_label";
			this->unit_label->Size = System::Drawing::Size(13, 13);
			this->unit_label->TabIndex = 8;
			this->unit_label->Text = L"g";
			// 
			// crt_stk
			// 
			this->crt_stk->Location = System::Drawing::Point(82, 10);
			this->crt_stk->Name = L"crt_stk";
			this->crt_stk->Size = System::Drawing::Size(61, 20);
			this->crt_stk->TabIndex = 9;
			// 
			// unit_weight
			// 
			this->unit_weight->Location = System::Drawing::Point(82, 79);
			this->unit_weight->Name = L"unit_weight";
			this->unit_weight->Size = System::Drawing::Size(61, 20);
			this->unit_weight->TabIndex = 10;
			// 
			// wrn_cyc
			// 
			this->wrn_cyc->Location = System::Drawing::Point(82, 57);
			this->wrn_cyc->Name = L"wrn_cyc";
			this->wrn_cyc->Size = System::Drawing::Size(61, 20);
			this->wrn_cyc->TabIndex = 11;
			// 
			// wrn_stk
			// 
			this->wrn_stk->Location = System::Drawing::Point(82, 34);
			this->wrn_stk->Name = L"wrn_stk";
			this->wrn_stk->Size = System::Drawing::Size(61, 20);
			this->wrn_stk->TabIndex = 12;
			// 
			// product_info_panel2
			// 
			this->product_info_panel2->Controls->Add(this->crt_stk_label);
			this->product_info_panel2->Controls->Add(this->wrn_stk);
			this->product_info_panel2->Controls->Add(this->wrn_stk_label);
			this->product_info_panel2->Controls->Add(this->wrn_cyc);
			this->product_info_panel2->Controls->Add(this->wrn_cyc_label);
			this->product_info_panel2->Controls->Add(this->unit_weight);
			this->product_info_panel2->Controls->Add(this->unit_wgt_label);
			this->product_info_panel2->Controls->Add(this->crt_stk);
			this->product_info_panel2->Controls->Add(this->count_label1);
			this->product_info_panel2->Controls->Add(this->unit_label);
			this->product_info_panel2->Controls->Add(this->count_label2);
			this->product_info_panel2->Controls->Add(this->count_label3);
			this->product_info_panel2->Location = System::Drawing::Point(44, 55);
			this->product_info_panel2->Name = L"product_info_panel2";
			this->product_info_panel2->Size = System::Drawing::Size(206, 106);
			this->product_info_panel2->TabIndex = 13;
			// 
			// product_name_tb
			// 
			this->product_name_tb->Location = System::Drawing::Point(84, 29);
			this->product_name_tb->Name = L"product_name_tb";
			this->product_name_tb->Size = System::Drawing::Size(120, 20);
			this->product_name_tb->TabIndex = 13;
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
			this->config->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->config->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->Controls->Add(this->bin112_btn, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->bin111_btn, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->bin110_btn, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->bin109_btn, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->bin108_btn, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->bin107_btn, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->bin106_btn, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->bin105_btn, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->bin104_btn, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->bin103_btn, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->bin102_btn, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->bin101_btn, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(322, 6);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(295, 186);
			this->tableLayoutPanel1->TabIndex = 14;
			// 
			// bin101_btn
			// 
			this->bin101_btn->Location = System::Drawing::Point(3, 3);
			this->bin101_btn->Name = L"bin101_btn";
			this->bin101_btn->Size = System::Drawing::Size(67, 56);
			this->bin101_btn->TabIndex = 9;
			this->bin101_btn->Text = L"101";
			this->bin101_btn->UseVisualStyleBackColor = true;
			// 
			// bin102_btn
			// 
			this->bin102_btn->Location = System::Drawing::Point(76, 3);
			this->bin102_btn->Name = L"bin102_btn";
			this->bin102_btn->Size = System::Drawing::Size(67, 56);
			this->bin102_btn->TabIndex = 10;
			this->bin102_btn->Text = L"102";
			this->bin102_btn->UseVisualStyleBackColor = true;
			// 
			// bin103_btn
			// 
			this->bin103_btn->Location = System::Drawing::Point(149, 3);
			this->bin103_btn->Name = L"bin103_btn";
			this->bin103_btn->Size = System::Drawing::Size(67, 56);
			this->bin103_btn->TabIndex = 11;
			this->bin103_btn->Text = L"103";
			this->bin103_btn->UseVisualStyleBackColor = true;
			// 
			// bin104_btn
			// 
			this->bin104_btn->Location = System::Drawing::Point(222, 3);
			this->bin104_btn->Name = L"bin104_btn";
			this->bin104_btn->Size = System::Drawing::Size(67, 56);
			this->bin104_btn->TabIndex = 12;
			this->bin104_btn->Text = L"104";
			this->bin104_btn->UseVisualStyleBackColor = true;
			// 
			// bin105_btn
			// 
			this->bin105_btn->Location = System::Drawing::Point(3, 65);
			this->bin105_btn->Name = L"bin105_btn";
			this->bin105_btn->Size = System::Drawing::Size(67, 56);
			this->bin105_btn->TabIndex = 13;
			this->bin105_btn->Text = L"105";
			this->bin105_btn->UseVisualStyleBackColor = true;
			// 
			// bin106_btn
			// 
			this->bin106_btn->Location = System::Drawing::Point(76, 65);
			this->bin106_btn->Name = L"bin106_btn";
			this->bin106_btn->Size = System::Drawing::Size(67, 56);
			this->bin106_btn->TabIndex = 14;
			this->bin106_btn->Text = L"106";
			this->bin106_btn->UseVisualStyleBackColor = true;
			// 
			// bin107_btn
			// 
			this->bin107_btn->Location = System::Drawing::Point(149, 65);
			this->bin107_btn->Name = L"bin107_btn";
			this->bin107_btn->Size = System::Drawing::Size(67, 56);
			this->bin107_btn->TabIndex = 15;
			this->bin107_btn->Text = L"107";
			this->bin107_btn->UseVisualStyleBackColor = true;
			// 
			// bin108_btn
			// 
			this->bin108_btn->Location = System::Drawing::Point(222, 65);
			this->bin108_btn->Name = L"bin108_btn";
			this->bin108_btn->Size = System::Drawing::Size(67, 56);
			this->bin108_btn->TabIndex = 16;
			this->bin108_btn->Text = L"108";
			this->bin108_btn->UseVisualStyleBackColor = true;
			// 
			// bin109_btn
			// 
			this->bin109_btn->Location = System::Drawing::Point(3, 127);
			this->bin109_btn->Name = L"bin109_btn";
			this->bin109_btn->Size = System::Drawing::Size(67, 56);
			this->bin109_btn->TabIndex = 17;
			this->bin109_btn->Text = L"109";
			this->bin109_btn->UseVisualStyleBackColor = true;
			// 
			// bin110_btn
			// 
			this->bin110_btn->Location = System::Drawing::Point(76, 127);
			this->bin110_btn->Name = L"bin110_btn";
			this->bin110_btn->Size = System::Drawing::Size(67, 56);
			this->bin110_btn->TabIndex = 18;
			this->bin110_btn->Text = L"110";
			this->bin110_btn->UseVisualStyleBackColor = true;
			// 
			// bin111_btn
			// 
			this->bin111_btn->Location = System::Drawing::Point(149, 127);
			this->bin111_btn->Name = L"bin111_btn";
			this->bin111_btn->Size = System::Drawing::Size(67, 56);
			this->bin111_btn->TabIndex = 19;
			this->bin111_btn->Text = L"111";
			this->bin111_btn->UseVisualStyleBackColor = true;
			// 
			// bin112_btn
			// 
			this->bin112_btn->Location = System::Drawing::Point(222, 127);
			this->bin112_btn->Name = L"bin112_btn";
			this->bin112_btn->Size = System::Drawing::Size(67, 56);
			this->bin112_btn->TabIndex = 20;
			this->bin112_btn->Text = L"112";
			this->bin112_btn->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->ClientSize = System::Drawing::Size(1501, 495);
			this->Controls->Add(this->modify_panel);
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
			this->modify_panel->ResumeLayout(false);
			this->product_info_panel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->product_panel->ResumeLayout(false);
			this->product_panel->PerformLayout();
			this->product_info_panel2->ResumeLayout(false);
			this->product_info_panel2->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
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
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
