#pragma once
#include "PrivacyPolicies.h"
#include "User.h"
#include "User.h"


namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			registorPanel->Hide();
			adminPanel->Hide();
			userPanel->Hide();
			changePassPanel->Hide();
			manageUserPanel->Hide();
			manageRoomPanel->Hide();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ usernameBox;
	private: System::Windows::Forms::TextBox^ passwordBox;
	private: System::Windows::Forms::Button^ loginButton;
	private: System::Windows::Forms::CheckBox^ checkBox1;

	private: System::Windows::Forms::Button^ quitButton;
	private: System::Windows::Forms::Label^ SignupButton;
	private: System::Windows::Forms::Label^ privacyPolicies;
	private: System::Windows::Forms::Panel^ registorPanel;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ registerButton;
	private: System::Windows::Forms::TextBox^ rePasswordTextbox;
	private: System::Windows::Forms::TextBox^ passwordTextbox;
	private: System::Windows::Forms::TextBox^ usernameTextbox;
	private: System::Windows::Forms::TextBox^ lastNameTextbox;
	private: System::Windows::Forms::TextBox^ firstNameTextbox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ firstName;
	private: System::Windows::Forms::Panel^ adminPanel;
	private: System::Windows::Forms::Panel^ adminMenuPanel;

	private: System::Windows::Forms::Button^ adminLogout;
	private: System::Windows::Forms::Button^ adminMenuButton;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ manageRoomButton;
	private: System::Windows::Forms::Button^ manageUserButton;
	private: System::Windows::Forms::Panel^ userPanel;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ userWelcomeLabel;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ userMenuPanel;

	private: System::Windows::Forms::Button^ userChangePassword;
	private: System::Windows::Forms::Button^ userSelectRoom;
	private: System::Windows::Forms::Button^ logoutUserButton;

	private: System::Windows::Forms::Panel^ changePassPanel;

	private: System::Windows::Forms::Button^ cancelChangePass;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ ConfirmButton;
	private: System::Windows::Forms::TextBox^ reEnterNewPassTextBox;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ newPassTextBox;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ oldPassTextBox;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ manageUserPanel;
	private: System::Windows::Forms::Button^ manageUserBackButton;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ realDeleteButton;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ enterUserIDToDelete;
	private: System::Windows::Forms::Label^ listOfUserLabel;
	private: System::Windows::Forms::ListBox^ userListBox;
	private: System::Windows::Forms::Button^ refreshUserButton;
	private: System::Windows::Forms::Panel^ manageRoomPanel;

	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ roomNameTextBox;

	private: System::Windows::Forms::Button^ refreshRoom;
	private: System::Windows::Forms::Button^ backManageRoomButton;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ deleteRoomButton;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ roomIDToDelete;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::ListBox^ roomListBox;
private: System::Windows::Forms::Button^ roomAddButton;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ roomOwnerTextBox;


	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->usernameBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordBox = (gcnew System::Windows::Forms::TextBox());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->quitButton = (gcnew System::Windows::Forms::Button());
			this->SignupButton = (gcnew System::Windows::Forms::Label());
			this->privacyPolicies = (gcnew System::Windows::Forms::Label());
			this->registorPanel = (gcnew System::Windows::Forms::Panel());
			this->adminPanel = (gcnew System::Windows::Forms::Panel());
			this->manageRoomPanel = (gcnew System::Windows::Forms::Panel());
			this->roomAddButton = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->roomOwnerTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->roomNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->refreshRoom = (gcnew System::Windows::Forms::Button());
			this->backManageRoomButton = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->deleteRoomButton = (gcnew System::Windows::Forms::Button());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->roomIDToDelete = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->roomListBox = (gcnew System::Windows::Forms::ListBox());
			this->userPanel = (gcnew System::Windows::Forms::Panel());
			this->changePassPanel = (gcnew System::Windows::Forms::Panel());
			this->cancelChangePass = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ConfirmButton = (gcnew System::Windows::Forms::Button());
			this->reEnterNewPassTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->newPassTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->oldPassTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->userWelcomeLabel = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->userMenuPanel = (gcnew System::Windows::Forms::Panel());
			this->userChangePassword = (gcnew System::Windows::Forms::Button());
			this->userSelectRoom = (gcnew System::Windows::Forms::Button());
			this->logoutUserButton = (gcnew System::Windows::Forms::Button());
			this->manageUserPanel = (gcnew System::Windows::Forms::Panel());
			this->refreshUserButton = (gcnew System::Windows::Forms::Button());
			this->manageUserBackButton = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->realDeleteButton = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->enterUserIDToDelete = (gcnew System::Windows::Forms::TextBox());
			this->listOfUserLabel = (gcnew System::Windows::Forms::Label());
			this->userListBox = (gcnew System::Windows::Forms::ListBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->adminMenuButton = (gcnew System::Windows::Forms::Button());
			this->adminMenuPanel = (gcnew System::Windows::Forms::Panel());
			this->manageRoomButton = (gcnew System::Windows::Forms::Button());
			this->manageUserButton = (gcnew System::Windows::Forms::Button());
			this->adminLogout = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->registerButton = (gcnew System::Windows::Forms::Button());
			this->rePasswordTextbox = (gcnew System::Windows::Forms::TextBox());
			this->passwordTextbox = (gcnew System::Windows::Forms::TextBox());
			this->usernameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->lastNameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->firstNameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->firstName = (gcnew System::Windows::Forms::Label());
			this->registorPanel->SuspendLayout();
			this->adminPanel->SuspendLayout();
			this->manageRoomPanel->SuspendLayout();
			this->userPanel->SuspendLayout();
			this->changePassPanel->SuspendLayout();
			this->panel2->SuspendLayout();
			this->userMenuPanel->SuspendLayout();
			this->manageUserPanel->SuspendLayout();
			this->adminMenuPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// usernameBox
			// 
			this->usernameBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->usernameBox->BackColor = System::Drawing::SystemColors::Control;
			this->usernameBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->usernameBox->Font = (gcnew System::Drawing::Font(L"#9Slide03 Montserrat Medium", 20, System::Drawing::FontStyle::Bold));
			this->usernameBox->ForeColor = System::Drawing::Color::Silver;
			this->usernameBox->Location = System::Drawing::Point(1494, 712);
			this->usernameBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->usernameBox->Name = L"usernameBox";
			this->usernameBox->Size = System::Drawing::Size(622, 74);
			this->usernameBox->TabIndex = 0;
			this->usernameBox->Text = L" Username";
			this->usernameBox->Click += gcnew System::EventHandler(this, &MyForm::usernameBox_Click);
			// 
			// passwordBox
			// 
			this->passwordBox->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->passwordBox->BackColor = System::Drawing::SystemColors::Control;
			this->passwordBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passwordBox->Font = (gcnew System::Drawing::Font(L"#9Slide03 Montserrat Medium", 20, System::Drawing::FontStyle::Bold));
			this->passwordBox->ForeColor = System::Drawing::Color::Silver;
			this->passwordBox->Location = System::Drawing::Point(1494, 829);
			this->passwordBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->passwordBox->Name = L"passwordBox";
			this->passwordBox->Size = System::Drawing::Size(622, 74);
			this->passwordBox->TabIndex = 1;
			this->passwordBox->Text = L" Password";
			this->passwordBox->Click += gcnew System::EventHandler(this, &MyForm::passwordBox_Click);
			// 
			// loginButton
			// 
			this->loginButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->loginButton->BackColor = System::Drawing::Color::Transparent;
			this->loginButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"loginButton.BackgroundImage")));
			this->loginButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->loginButton->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->loginButton->Enabled = false;
			this->loginButton->FlatAppearance->BorderSize = 0;
			this->loginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginButton->Font = (gcnew System::Drawing::Font(L"#9Slide03 Montserrat SemiBold", 18, System::Drawing::FontStyle::Bold));
			this->loginButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->loginButton->Location = System::Drawing::Point(1486, 1088);
			this->loginButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(630, 92);
			this->loginButton->TabIndex = 2;
			this->loginButton->Text = L"LOGIN";
			this->loginButton->UseVisualStyleBackColor = false;
			this->loginButton->Click += gcnew System::EventHandler(this, &MyForm::loginButton_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"#9Slide03 Montserrat Medium", 8, System::Drawing::FontStyle::Bold));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ActiveBorder;
			this->checkBox1->Location = System::Drawing::Point(1486, 989);
			this->checkBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(148, 31);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"Agree to our";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// quitButton
			// 
			this->quitButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->quitButton->Font = (gcnew System::Drawing::Font(L"#9Slide03 FS Neusa Bold", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quitButton->ForeColor = System::Drawing::Color::Teal;
			this->quitButton->Location = System::Drawing::Point(2150, 1436);
			this->quitButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->quitButton->Name = L"quitButton";
			this->quitButton->Size = System::Drawing::Size(152, 50);
			this->quitButton->TabIndex = 5;
			this->quitButton->Text = L"Quit";
			this->quitButton->UseVisualStyleBackColor = true;
			this->quitButton->Click += gcnew System::EventHandler(this, &MyForm::quitButton_Click);
			// 
			// SignupButton
			// 
			this->SignupButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->SignupButton->AutoSize = true;
			this->SignupButton->BackColor = System::Drawing::Color::Transparent;
			this->SignupButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SignupButton->Font = (gcnew System::Drawing::Font(L"#9Slide03 Montserrat Medium", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->SignupButton->ForeColor = System::Drawing::Color::Teal;
			this->SignupButton->Location = System::Drawing::Point(1736, 1202);
			this->SignupButton->Name = L"SignupButton";
			this->SignupButton->Size = System::Drawing::Size(137, 47);
			this->SignupButton->TabIndex = 6;
			this->SignupButton->Text = L"Sign-up";
			this->SignupButton->Click += gcnew System::EventHandler(this, &MyForm::SignupButton_Click);
			// 
			// privacyPolicies
			// 
			this->privacyPolicies->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->privacyPolicies->AutoSize = true;
			this->privacyPolicies->BackColor = System::Drawing::Color::Transparent;
			this->privacyPolicies->Cursor = System::Windows::Forms::Cursors::Hand;
			this->privacyPolicies->Font = (gcnew System::Drawing::Font(L"#9Slide03 Montserrat Medium", 8, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->privacyPolicies->ForeColor = System::Drawing::Color::Teal;
			this->privacyPolicies->Location = System::Drawing::Point(1640, 989);
			this->privacyPolicies->Name = L"privacyPolicies";
			this->privacyPolicies->Size = System::Drawing::Size(152, 27);
			this->privacyPolicies->TabIndex = 7;
			this->privacyPolicies->Text = L"Privacy Policies";
			this->privacyPolicies->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// registorPanel
			// 
			this->registorPanel->BackColor = System::Drawing::Color::White;
			this->registorPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"registorPanel.BackgroundImage")));
			this->registorPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->registorPanel->Controls->Add(this->adminPanel);
			this->registorPanel->Controls->Add(this->button1);
			this->registorPanel->Controls->Add(this->registerButton);
			this->registorPanel->Controls->Add(this->rePasswordTextbox);
			this->registorPanel->Controls->Add(this->passwordTextbox);
			this->registorPanel->Controls->Add(this->usernameTextbox);
			this->registorPanel->Controls->Add(this->lastNameTextbox);
			this->registorPanel->Controls->Add(this->firstNameTextbox);
			this->registorPanel->Controls->Add(this->label4);
			this->registorPanel->Controls->Add(this->label3);
			this->registorPanel->Controls->Add(this->label2);
			this->registorPanel->Controls->Add(this->label1);
			this->registorPanel->Controls->Add(this->firstName);
			this->registorPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->registorPanel->Location = System::Drawing::Point(0, 0);
			this->registorPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->registorPanel->Name = L"registorPanel";
			this->registorPanel->Size = System::Drawing::Size(2210, 1363);
			this->registorPanel->TabIndex = 0;
			// 
			// adminPanel
			// 
			this->adminPanel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->adminPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"adminPanel.BackgroundImage")));
			this->adminPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->adminPanel->Controls->Add(this->manageRoomPanel);
			this->adminPanel->Controls->Add(this->userPanel);
			this->adminPanel->Controls->Add(this->manageUserPanel);
			this->adminPanel->Controls->Add(this->label7);
			this->adminPanel->Controls->Add(this->label6);
			this->adminPanel->Controls->Add(this->label5);
			this->adminPanel->Controls->Add(this->adminMenuButton);
			this->adminPanel->Controls->Add(this->adminMenuPanel);
			this->adminPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->adminPanel->Location = System::Drawing::Point(0, 0);
			this->adminPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->adminPanel->Name = L"adminPanel";
			this->adminPanel->Size = System::Drawing::Size(2210, 1363);
			this->adminPanel->TabIndex = 8;
			// 
			// manageRoomPanel
			// 
			this->manageRoomPanel->Controls->Add(this->roomAddButton);
			this->manageRoomPanel->Controls->Add(this->label21);
			this->manageRoomPanel->Controls->Add(this->roomOwnerTextBox);
			this->manageRoomPanel->Controls->Add(this->label19);
			this->manageRoomPanel->Controls->Add(this->label20);
			this->manageRoomPanel->Controls->Add(this->roomNameTextBox);
			this->manageRoomPanel->Controls->Add(this->refreshRoom);
			this->manageRoomPanel->Controls->Add(this->backManageRoomButton);
			this->manageRoomPanel->Controls->Add(this->label16);
			this->manageRoomPanel->Controls->Add(this->deleteRoomButton);
			this->manageRoomPanel->Controls->Add(this->label17);
			this->manageRoomPanel->Controls->Add(this->roomIDToDelete);
			this->manageRoomPanel->Controls->Add(this->label18);
			this->manageRoomPanel->Controls->Add(this->roomListBox);
			this->manageRoomPanel->Location = System::Drawing::Point(482, 85);
			this->manageRoomPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->manageRoomPanel->Name = L"manageRoomPanel";
			this->manageRoomPanel->Size = System::Drawing::Size(1565, 1211);
			this->manageRoomPanel->TabIndex = 11;
			// 
			// roomAddButton
			// 
			this->roomAddButton->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 10, System::Drawing::FontStyle::Bold));
			this->roomAddButton->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->roomAddButton->Location = System::Drawing::Point(783, 942);
			this->roomAddButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->roomAddButton->Name = L"roomAddButton";
			this->roomAddButton->Size = System::Drawing::Size(115, 46);
			this->roomAddButton->TabIndex = 14;
			this->roomAddButton->Text = L"Add";
			this->roomAddButton->UseVisualStyleBackColor = true;
			this->roomAddButton->Click += gcnew System::EventHandler(this, &MyForm::roomAddButton_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 12, System::Drawing::FontStyle::Bold));
			this->label21->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label21->Location = System::Drawing::Point(464, 904);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(236, 29);
			this->label21->TabIndex = 13;
			this->label21->Text = L"Enter Room\'s owner:";
			// 
			// roomOwnerTextBox
			// 
			this->roomOwnerTextBox->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomOwnerTextBox->Location = System::Drawing::Point(469, 942);
			this->roomOwnerTextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->roomOwnerTextBox->Name = L"roomOwnerTextBox";
			this->roomOwnerTextBox->Size = System::Drawing::Size(275, 46);
			this->roomOwnerTextBox->TabIndex = 12;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(153, 849);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(206, 39);
			this->label19->TabIndex = 11;
			this->label19->Text = L"Add A Room:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 12, System::Drawing::FontStyle::Bold));
			this->label20->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label20->Location = System::Drawing::Point(155, 904);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(229, 29);
			this->label20->TabIndex = 10;
			this->label20->Text = L"Enter Room\'s name:";
			this->label20->Click += gcnew System::EventHandler(this, &MyForm::label20_Click);
			// 
			// roomNameTextBox
			// 
			this->roomNameTextBox->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomNameTextBox->Location = System::Drawing::Point(160, 942);
			this->roomNameTextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->roomNameTextBox->Name = L"roomNameTextBox";
			this->roomNameTextBox->Size = System::Drawing::Size(275, 46);
			this->roomNameTextBox->TabIndex = 9;
			// 
			// refreshRoom
			// 
			this->refreshRoom->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 10, System::Drawing::FontStyle::Bold));
			this->refreshRoom->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->refreshRoom->Location = System::Drawing::Point(1242, 69);
			this->refreshRoom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->refreshRoom->Name = L"refreshRoom";
			this->refreshRoom->Size = System::Drawing::Size(115, 38);
			this->refreshRoom->TabIndex = 8;
			this->refreshRoom->Text = L"Refresh";
			this->refreshRoom->UseVisualStyleBackColor = true;
			this->refreshRoom->Click += gcnew System::EventHandler(this, &MyForm::refreshRoom_Click);
			// 
			// backManageRoomButton
			// 
			this->backManageRoomButton->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 10, System::Drawing::FontStyle::Bold));
			this->backManageRoomButton->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->backManageRoomButton->Location = System::Drawing::Point(1395, 1146);
			this->backManageRoomButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->backManageRoomButton->Name = L"backManageRoomButton";
			this->backManageRoomButton->Size = System::Drawing::Size(115, 38);
			this->backManageRoomButton->TabIndex = 7;
			this->backManageRoomButton->Text = L"Back";
			this->backManageRoomButton->UseVisualStyleBackColor = true;
			this->backManageRoomButton->Click += gcnew System::EventHandler(this, &MyForm::backManageRoomButton_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(153, 998);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(239, 39);
			this->label16->TabIndex = 6;
			this->label16->Text = L"Delete A Room:";
			// 
			// deleteRoomButton
			// 
			this->deleteRoomButton->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 10, System::Drawing::FontStyle::Bold));
			this->deleteRoomButton->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->deleteRoomButton->Location = System::Drawing::Point(469, 1091);
			this->deleteRoomButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->deleteRoomButton->Name = L"deleteRoomButton";
			this->deleteRoomButton->Size = System::Drawing::Size(115, 46);
			this->deleteRoomButton->TabIndex = 5;
			this->deleteRoomButton->Text = L"Delete";
			this->deleteRoomButton->UseVisualStyleBackColor = true;
			this->deleteRoomButton->Click += gcnew System::EventHandler(this, &MyForm::deleteRoomButton_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 12, System::Drawing::FontStyle::Bold));
			this->label17->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label17->Location = System::Drawing::Point(155, 1052);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(192, 29);
			this->label17->TabIndex = 4;
			this->label17->Text = L"Enter Room\'s ID:";
			// 
			// roomIDToDelete
			// 
			this->roomIDToDelete->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->roomIDToDelete->Location = System::Drawing::Point(160, 1091);
			this->roomIDToDelete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->roomIDToDelete->Name = L"roomIDToDelete";
			this->roomIDToDelete->Size = System::Drawing::Size(275, 46);
			this->roomIDToDelete->TabIndex = 3;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(153, 65);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(223, 39);
			this->label18->TabIndex = 1;
			this->label18->Text = L"List of Rooms:";
			// 
			// roomListBox
			// 
			this->roomListBox->Font = (gcnew System::Drawing::Font(L"#9Slide02 Noi dung dai", 16));
			this->roomListBox->FormattingEnabled = true;
			this->roomListBox->ItemHeight = 39;
			this->roomListBox->Location = System::Drawing::Point(160, 122);
			this->roomListBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->roomListBox->Name = L"roomListBox";
			this->roomListBox->Size = System::Drawing::Size(1196, 667);
			this->roomListBox->TabIndex = 0;
			// 
			// userPanel
			// 
			this->userPanel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->userPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"userPanel.BackgroundImage")));
			this->userPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->userPanel->Controls->Add(this->changePassPanel);
			this->userPanel->Controls->Add(this->label8);
			this->userPanel->Controls->Add(this->userWelcomeLabel);
			this->userPanel->Controls->Add(this->label10);
			this->userPanel->Controls->Add(this->button3);
			this->userPanel->Controls->Add(this->userMenuPanel);
			this->userPanel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->userPanel->Location = System::Drawing::Point(0, 0);
			this->userPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->userPanel->Name = L"userPanel";
			this->userPanel->Size = System::Drawing::Size(2210, 1363);
			this->userPanel->TabIndex = 9;
			// 
			// changePassPanel
			// 
			this->changePassPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->changePassPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"changePassPanel.BackgroundImage")));
			this->changePassPanel->Controls->Add(this->cancelChangePass);
			this->changePassPanel->Controls->Add(this->label9);
			this->changePassPanel->Controls->Add(this->panel2);
			this->changePassPanel->Location = System::Drawing::Point(421, 79);
			this->changePassPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->changePassPanel->Name = L"changePassPanel";
			this->changePassPanel->Size = System::Drawing::Size(1320, 1312);
			this->changePassPanel->TabIndex = 6;
			// 
			// cancelChangePass
			// 
			this->cancelChangePass->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancelChangePass->ForeColor = System::Drawing::Color::CadetBlue;
			this->cancelChangePass->Location = System::Drawing::Point(588, 1141);
			this->cancelChangePass->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cancelChangePass->Name = L"cancelChangePass";
			this->cancelChangePass->Size = System::Drawing::Size(130, 50);
			this->cancelChangePass->TabIndex = 9;
			this->cancelChangePass->Text = L"Cancel";
			this->cancelChangePass->UseVisualStyleBackColor = true;
			this->cancelChangePass->Click += gcnew System::EventHandler(this, &MyForm::cancelChangePass_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de rat dai 01", 40, System::Drawing::FontStyle::Bold));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(266, 108);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(781, 97);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Change Your Password";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->ConfirmButton);
			this->panel2->Controls->Add(this->reEnterNewPassTextBox);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->newPassTextBox);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->oldPassTextBox);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Location = System::Drawing::Point(379, 244);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(562, 800);
			this->panel2->TabIndex = 0;
			// 
			// ConfirmButton
			// 
			this->ConfirmButton->BackColor = System::Drawing::Color::CadetBlue;
			this->ConfirmButton->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de rat dai 01", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConfirmButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->ConfirmButton->Location = System::Drawing::Point(152, 656);
			this->ConfirmButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ConfirmButton->Name = L"ConfirmButton";
			this->ConfirmButton->Size = System::Drawing::Size(243, 76);
			this->ConfirmButton->TabIndex = 8;
			this->ConfirmButton->Text = L"Confirm";
			this->ConfirmButton->UseVisualStyleBackColor = false;
			this->ConfirmButton->Click += gcnew System::EventHandler(this, &MyForm::ConfirmButton_Click);
			// 
			// reEnterNewPassTextBox
			// 
			this->reEnterNewPassTextBox->Font = (gcnew System::Drawing::Font(L"#9Slide02 Noi dung dai", 18));
			this->reEnterNewPassTextBox->Location = System::Drawing::Point(40, 529);
			this->reEnterNewPassTextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->reEnterNewPassTextBox->Name = L"reEnterNewPassTextBox";
			this->reEnterNewPassTextBox->Size = System::Drawing::Size(475, 51);
			this->reEnterNewPassTextBox->TabIndex = 7;
			this->reEnterNewPassTextBox->UseSystemPasswordChar = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label13->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de rat dai 01", 20, System::Drawing::FontStyle::Bold));
			this->label13->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label13->Location = System::Drawing::Point(32, 458);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(403, 49);
			this->label13->TabIndex = 6;
			this->label13->Text = L"Re-enter New Password";
			// 
			// newPassTextBox
			// 
			this->newPassTextBox->Font = (gcnew System::Drawing::Font(L"#9Slide02 Noi dung dai", 18));
			this->newPassTextBox->Location = System::Drawing::Point(40, 322);
			this->newPassTextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->newPassTextBox->Name = L"newPassTextBox";
			this->newPassTextBox->Size = System::Drawing::Size(475, 51);
			this->newPassTextBox->TabIndex = 5;
			this->newPassTextBox->UseSystemPasswordChar = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label12->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de rat dai 01", 20, System::Drawing::FontStyle::Bold));
			this->label12->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label12->Location = System::Drawing::Point(32, 251);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(255, 49);
			this->label12->TabIndex = 4;
			this->label12->Text = L"New Password";
			// 
			// oldPassTextBox
			// 
			this->oldPassTextBox->Font = (gcnew System::Drawing::Font(L"#9Slide02 Noi dung dai", 18));
			this->oldPassTextBox->Location = System::Drawing::Point(40, 124);
			this->oldPassTextBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->oldPassTextBox->Name = L"oldPassTextBox";
			this->oldPassTextBox->Size = System::Drawing::Size(475, 51);
			this->oldPassTextBox->TabIndex = 3;
			this->oldPassTextBox->UseSystemPasswordChar = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label11->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de rat dai 01", 20, System::Drawing::FontStyle::Bold));
			this->label11->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label11->Location = System::Drawing::Point(32, 52);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(241, 49);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Old Password";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"#9Slide02 Noi dung dai", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DimGray;
			this->label8->Location = System::Drawing::Point(634, 529);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(1217, 136);
			this->label8->TabIndex = 5;
			this->label8->Text = resources->GetString(L"label8.Text");
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// userWelcomeLabel
			// 
			this->userWelcomeLabel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->userWelcomeLabel->AutoSize = true;
			this->userWelcomeLabel->BackColor = System::Drawing::Color::Transparent;
			this->userWelcomeLabel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->userWelcomeLabel->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 46, System::Drawing::FontStyle::Bold));
			this->userWelcomeLabel->ForeColor = System::Drawing::Color::Gray;
			this->userWelcomeLabel->Location = System::Drawing::Point(673, 382);
			this->userWelcomeLabel->Name = L"userWelcomeLabel";
			this->userWelcomeLabel->Size = System::Drawing::Size(684, 111);
			this->userWelcomeLabel->TabIndex = 4;
			this->userWelcomeLabel->Text = L"Welcome Back!";
			this->userWelcomeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"#9Slide03 Montserrat Medium", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label10->Location = System::Drawing::Point(104, 9);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(975, 68);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Home Appliance Control using Hand Gesture";
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->button3->Location = System::Drawing::Point(23, 12);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 52);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// userMenuPanel
			// 
			this->userMenuPanel->BackColor = System::Drawing::Color::Gainsboro;
			this->userMenuPanel->Controls->Add(this->userChangePassword);
			this->userMenuPanel->Controls->Add(this->userSelectRoom);
			this->userMenuPanel->Controls->Add(this->logoutUserButton);
			this->userMenuPanel->Location = System::Drawing::Point(0, 80);
			this->userMenuPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->userMenuPanel->Name = L"userMenuPanel";
			this->userMenuPanel->Size = System::Drawing::Size(307, 1285);
			this->userMenuPanel->TabIndex = 1;
			this->userMenuPanel->Visible = false;
			// 
			// userChangePassword
			// 
			this->userChangePassword->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->userChangePassword->FlatAppearance->BorderSize = 0;
			this->userChangePassword->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->userChangePassword->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 13, System::Drawing::FontStyle::Bold));
			this->userChangePassword->ForeColor = System::Drawing::Color::DimGray;
			this->userChangePassword->Location = System::Drawing::Point(22, 112);
			this->userChangePassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->userChangePassword->Name = L"userChangePassword";
			this->userChangePassword->Size = System::Drawing::Size(256, 60);
			this->userChangePassword->TabIndex = 2;
			this->userChangePassword->Text = L"Change Password";
			this->userChangePassword->UseVisualStyleBackColor = false;
			this->userChangePassword->Click += gcnew System::EventHandler(this, &MyForm::userChangePassword_Click);
			// 
			// userSelectRoom
			// 
			this->userSelectRoom->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->userSelectRoom->FlatAppearance->BorderSize = 0;
			this->userSelectRoom->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->userSelectRoom->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userSelectRoom->ForeColor = System::Drawing::Color::DimGray;
			this->userSelectRoom->Location = System::Drawing::Point(22, 26);
			this->userSelectRoom->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->userSelectRoom->Name = L"userSelectRoom";
			this->userSelectRoom->Size = System::Drawing::Size(256, 60);
			this->userSelectRoom->TabIndex = 1;
			this->userSelectRoom->Text = L"Select Room";
			this->userSelectRoom->UseVisualStyleBackColor = false;
			// 
			// logoutUserButton
			// 
			this->logoutUserButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->logoutUserButton->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->logoutUserButton->Font = (gcnew System::Drawing::Font(L"#9Slide01 Tieu de ngan", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logoutUserButton->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->logoutUserButton->Location = System::Drawing::Point(3, 1208);
			this->logoutUserButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->logoutUserButton->Name = L"logoutUserButton";
			this->logoutUserButton->Size = System::Drawing::Size(302, 74);
			this->logoutUserButton->TabIndex = 0;
			this->logoutUserButton->Text = L"Logout";
			this->logoutUserButton->UseVisualStyleBackColor = false;
			this->logoutUserButton->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// manageUserPanel
			// 
			this->manageUserPanel->Controls->Add(this->refreshUserButton);
			this->manageUserPanel->Controls->Add(this->manageUserBackButton);
			this->manageUserPanel->Controls->Add(this->label15);
			this->manageUserPanel->Controls->Add(this->realDeleteButton);
			this->manageUserPanel->Controls->Add(this->label14);
			this->manageUserPanel->Controls->Add(this->enterUserIDToDelete);
			this->manageUserPanel->Controls->Add(this->listOfUserLabel);
			this->manageUserPanel->Controls->Add(this->userListBox);
			this->manageUserPanel->Location = System::Drawing::Point(494, 85);
			this->manageUserPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->manageUserPanel->Name = L"manageUserPanel";
			this->manageUserPanel->Size = System::Drawing::Size(1541, 1211);
			this->manageUserPanel->TabIndex = 10;
			// 
			// refreshUserButton
			// 
			this->refreshUserButton->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 10, System::Drawing::FontStyle::Bold));
			this->refreshUserButton->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->refreshUserButton->Location = System::Drawing::Point(1242, 69);
			this->refreshUserButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->refreshUserButton->Name = L"refreshUserButton";
			this->refreshUserButton->Size = System::Drawing::Size(115, 38);
			this->refreshUserButton->TabIndex = 8;
			this->refreshUserButton->Text = L"Refresh";
			this->refreshUserButton->UseVisualStyleBackColor = true;
			this->refreshUserButton->Click += gcnew System::EventHandler(this, &MyForm::refreshUserButton_Click);
			// 
			// manageUserBackButton
			// 
			this->manageUserBackButton->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 10, System::Drawing::FontStyle::Bold));
			this->manageUserBackButton->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->manageUserBackButton->Location = System::Drawing::Point(1395, 1146);
			this->manageUserBackButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->manageUserBackButton->Name = L"manageUserBackButton";
			this->manageUserBackButton->Size = System::Drawing::Size(115, 38);
			this->manageUserBackButton->TabIndex = 7;
			this->manageUserBackButton->Text = L"Back";
			this->manageUserBackButton->UseVisualStyleBackColor = true;
			this->manageUserBackButton->Click += gcnew System::EventHandler(this, &MyForm::manageUserBackButton_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(153, 998);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(221, 39);
			this->label15->TabIndex = 6;
			this->label15->Text = L"Delete A User:";
			// 
			// realDeleteButton
			// 
			this->realDeleteButton->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 10, System::Drawing::FontStyle::Bold));
			this->realDeleteButton->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->realDeleteButton->Location = System::Drawing::Point(469, 1091);
			this->realDeleteButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->realDeleteButton->Name = L"realDeleteButton";
			this->realDeleteButton->Size = System::Drawing::Size(115, 46);
			this->realDeleteButton->TabIndex = 5;
			this->realDeleteButton->Text = L"Delete";
			this->realDeleteButton->UseVisualStyleBackColor = true;
			this->realDeleteButton->Click += gcnew System::EventHandler(this, &MyForm::realDeleteButton_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 12, System::Drawing::FontStyle::Bold));
			this->label14->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label14->Location = System::Drawing::Point(155, 1052);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(178, 29);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Enter User\'s ID:";
			// 
			// enterUserIDToDelete
			// 
			this->enterUserIDToDelete->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->enterUserIDToDelete->Location = System::Drawing::Point(160, 1091);
			this->enterUserIDToDelete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->enterUserIDToDelete->Name = L"enterUserIDToDelete";
			this->enterUserIDToDelete->Size = System::Drawing::Size(275, 46);
			this->enterUserIDToDelete->TabIndex = 3;
			// 
			// listOfUserLabel
			// 
			this->listOfUserLabel->AutoSize = true;
			this->listOfUserLabel->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listOfUserLabel->Location = System::Drawing::Point(153, 65);
			this->listOfUserLabel->Name = L"listOfUserLabel";
			this->listOfUserLabel->Size = System::Drawing::Size(205, 39);
			this->listOfUserLabel->TabIndex = 1;
			this->listOfUserLabel->Text = L"List of Users:";
			// 
			// userListBox
			// 
			this->userListBox->Font = (gcnew System::Drawing::Font(L"#9Slide02 Noi dung dai", 16));
			this->userListBox->FormattingEnabled = true;
			this->userListBox->ItemHeight = 39;
			this->userListBox->Location = System::Drawing::Point(160, 122);
			this->userListBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->userListBox->Name = L"userListBox";
			this->userListBox->Size = System::Drawing::Size(1196, 784);
			this->userListBox->TabIndex = 0;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"#9Slide02 Noi dung dai", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DimGray;
			this->label7->Location = System::Drawing::Point(634, 529);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(1217, 136);
			this->label7->TabIndex = 5;
			this->label7->Text = resources->GetString(L"label7.Text");
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 46, System::Drawing::FontStyle::Bold));
			this->label6->ForeColor = System::Drawing::Color::Gray;
			this->label6->Location = System::Drawing::Point(752, 382);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(999, 111);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Welcome Back, Admin!";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"#9Slide03 Montserrat Medium", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label5->Location = System::Drawing::Point(104, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(975, 68);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Home Appliance Control using Hand Gesture";
			// 
			// adminMenuButton
			// 
			this->adminMenuButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->adminMenuButton->BackColor = System::Drawing::Color::Transparent;
			this->adminMenuButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"adminMenuButton.BackgroundImage")));
			this->adminMenuButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->adminMenuButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->adminMenuButton->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlDark;
			this->adminMenuButton->Location = System::Drawing::Point(23, 12);
			this->adminMenuButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->adminMenuButton->Name = L"adminMenuButton";
			this->adminMenuButton->Size = System::Drawing::Size(75, 52);
			this->adminMenuButton->TabIndex = 2;
			this->adminMenuButton->UseVisualStyleBackColor = false;
			this->adminMenuButton->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// adminMenuPanel
			// 
			this->adminMenuPanel->BackColor = System::Drawing::Color::Gainsboro;
			this->adminMenuPanel->Controls->Add(this->manageRoomButton);
			this->adminMenuPanel->Controls->Add(this->manageUserButton);
			this->adminMenuPanel->Controls->Add(this->adminLogout);
			this->adminMenuPanel->Location = System::Drawing::Point(0, 80);
			this->adminMenuPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->adminMenuPanel->Name = L"adminMenuPanel";
			this->adminMenuPanel->Size = System::Drawing::Size(307, 1285);
			this->adminMenuPanel->TabIndex = 1;
			this->adminMenuPanel->Visible = false;
			// 
			// manageRoomButton
			// 
			this->manageRoomButton->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->manageRoomButton->FlatAppearance->BorderSize = 0;
			this->manageRoomButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->manageRoomButton->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->manageRoomButton->ForeColor = System::Drawing::Color::DimGray;
			this->manageRoomButton->Location = System::Drawing::Point(22, 112);
			this->manageRoomButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->manageRoomButton->Name = L"manageRoomButton";
			this->manageRoomButton->Size = System::Drawing::Size(256, 60);
			this->manageRoomButton->TabIndex = 2;
			this->manageRoomButton->Text = L"Manage Room";
			this->manageRoomButton->UseVisualStyleBackColor = false;
			this->manageRoomButton->Click += gcnew System::EventHandler(this, &MyForm::manageRoomButton_Click);
			// 
			// manageUserButton
			// 
			this->manageUserButton->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->manageUserButton->FlatAppearance->BorderSize = 0;
			this->manageUserButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->manageUserButton->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de dai", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->manageUserButton->ForeColor = System::Drawing::Color::DimGray;
			this->manageUserButton->Location = System::Drawing::Point(22, 26);
			this->manageUserButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->manageUserButton->Name = L"manageUserButton";
			this->manageUserButton->Size = System::Drawing::Size(256, 60);
			this->manageUserButton->TabIndex = 1;
			this->manageUserButton->Text = L"Manage User";
			this->manageUserButton->UseVisualStyleBackColor = false;
			this->manageUserButton->Click += gcnew System::EventHandler(this, &MyForm::manageUserButton_Click);
			// 
			// adminLogout
			// 
			this->adminLogout->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->adminLogout->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->adminLogout->Font = (gcnew System::Drawing::Font(L"#9Slide01 Tieu de ngan", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminLogout->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->adminLogout->Location = System::Drawing::Point(3, 1208);
			this->adminLogout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->adminLogout->Name = L"adminLogout";
			this->adminLogout->Size = System::Drawing::Size(302, 74);
			this->adminLogout->TabIndex = 0;
			this->adminLogout->Text = L"Logout";
			this->adminLogout->UseVisualStyleBackColor = false;
			this->adminLogout->Click += gcnew System::EventHandler(this, &MyForm::adminLogout_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"#9Slide01 Tieu de ngan", 8.999999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(36, 1261);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 44);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// registerButton
			// 
			this->registerButton->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->registerButton->Font = (gcnew System::Drawing::Font(L"#9Slide03 Montserrat SemiBold", 24, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->registerButton->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->registerButton->Location = System::Drawing::Point(380, 1135);
			this->registerButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->registerButton->Name = L"registerButton";
			this->registerButton->Size = System::Drawing::Size(436, 128);
			this->registerButton->TabIndex = 10;
			this->registerButton->Text = L"Register";
			this->registerButton->UseVisualStyleBackColor = false;
			this->registerButton->Click += gcnew System::EventHandler(this, &MyForm::registerButton_Click);
			// 
			// rePasswordTextbox
			// 
			this->rePasswordTextbox->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de rat dai 01", 21, System::Drawing::FontStyle::Bold));
			this->rePasswordTextbox->Location = System::Drawing::Point(163, 1002);
			this->rePasswordTextbox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->rePasswordTextbox->Name = L"rePasswordTextbox";
			this->rePasswordTextbox->PasswordChar = '*';
			this->rePasswordTextbox->Size = System::Drawing::Size(912, 58);
			this->rePasswordTextbox->TabIndex = 9;
			this->rePasswordTextbox->UseSystemPasswordChar = true;
			// 
			// passwordTextbox
			// 
			this->passwordTextbox->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de rat dai 01", 21, System::Drawing::FontStyle::Bold));
			this->passwordTextbox->Location = System::Drawing::Point(163, 814);
			this->passwordTextbox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->passwordTextbox->Name = L"passwordTextbox";
			this->passwordTextbox->PasswordChar = '*';
			this->passwordTextbox->Size = System::Drawing::Size(912, 58);
			this->passwordTextbox->TabIndex = 8;
			this->passwordTextbox->UseSystemPasswordChar = true;
			// 
			// usernameTextbox
			// 
			this->usernameTextbox->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de rat dai 01", 21, System::Drawing::FontStyle::Bold));
			this->usernameTextbox->Location = System::Drawing::Point(163, 638);
			this->usernameTextbox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->usernameTextbox->Name = L"usernameTextbox";
			this->usernameTextbox->Size = System::Drawing::Size(912, 58);
			this->usernameTextbox->TabIndex = 7;
			// 
			// lastNameTextbox
			// 
			this->lastNameTextbox->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de rat dai 01", 21, System::Drawing::FontStyle::Bold));
			this->lastNameTextbox->Location = System::Drawing::Point(664, 460);
			this->lastNameTextbox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lastNameTextbox->Name = L"lastNameTextbox";
			this->lastNameTextbox->Size = System::Drawing::Size(404, 58);
			this->lastNameTextbox->TabIndex = 6;
			// 
			// firstNameTextbox
			// 
			this->firstNameTextbox->Font = (gcnew System::Drawing::Font(L"#9Slide02 Tieu de rat dai 01", 21, System::Drawing::FontStyle::Bold));
			this->firstNameTextbox->Location = System::Drawing::Point(163, 460);
			this->firstNameTextbox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->firstNameTextbox->Name = L"firstNameTextbox";
			this->firstNameTextbox->Size = System::Drawing::Size(404, 58);
			this->firstNameTextbox->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"#9Slide03 Montserrat Medium", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(155, 949);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(304, 47);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Re-enter Password";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"#9Slide03 Montserrat Medium", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(155, 764);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 47);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"#9Slide03 Montserrat Medium", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(155, 584);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 47);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Username";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"#9Slide03 Montserrat Medium", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(656, 406);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 47);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Last Name";
			// 
			// firstName
			// 
			this->firstName->AutoSize = true;
			this->firstName->BackColor = System::Drawing::Color::Transparent;
			this->firstName->Font = (gcnew System::Drawing::Font(L"#9Slide03 Montserrat Medium", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->firstName->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->firstName->Location = System::Drawing::Point(155, 406);
			this->firstName->Name = L"firstName";
			this->firstName->Size = System::Drawing::Size(183, 47);
			this->firstName->TabIndex = 0;
			this->firstName->Text = L"First Name";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(2210, 1363);
			this->Controls->Add(this->registorPanel);
			this->Controls->Add(this->privacyPolicies);
			this->Controls->Add(this->SignupButton);
			this->Controls->Add(this->quitButton);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->passwordBox);
			this->Controls->Add(this->usernameBox);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"Home Appliance Control Using Hand Gestures";
			this->registorPanel->ResumeLayout(false);
			this->registorPanel->PerformLayout();
			this->adminPanel->ResumeLayout(false);
			this->adminPanel->PerformLayout();
			this->manageRoomPanel->ResumeLayout(false);
			this->manageRoomPanel->PerformLayout();
			this->userPanel->ResumeLayout(false);
			this->userPanel->PerformLayout();
			this->changePassPanel->ResumeLayout(false);
			this->changePassPanel->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->userMenuPanel->ResumeLayout(false);
			this->manageUserPanel->ResumeLayout(false);
			this->manageUserPanel->PerformLayout();
			this->adminMenuPanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: User^ user = nullptr;
	
	public: List<User^>^ userList = gcnew List<User^>();

	private: System::Void quitButton_Click(System::Object^ sender, System::EventArgs^ e) {

		Application::Exit();

	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {

	PrivacyPolicies^ pp = gcnew PrivacyPolicies;
	pp->ShowDialog();

}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	if (checkBox1->Checked)
	{
		loginButton->Enabled = true;
	}
	else {
		loginButton->Enabled = false;
	}

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	registorPanel->Hide();

}
private: System::Void SignupButton_Click(System::Object^ sender, System::EventArgs^ e) {

	registorPanel->Show();

	//adminPanel->Hide();
	//registorPanel->Hide();
	adminPanel->Hide();
	userPanel->Hide();
	changePassPanel->Hide();
	manageUserPanel->Hide();

}
private: System::Void usernameBox_Click(System::Object^ sender, System::EventArgs^ e) {

	if (usernameBox->Text == " Username") {
		usernameBox->Text = "";
	}

	usernameBox->ForeColor = System::Drawing::Color::Black;
}
//private: System::Void passwordBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
//
//	if (passwordBox->Text == " Password")
//	{
//		passwordBox->Text = "";
//	}
//
//	if (passwordBox->UseSystemPasswordChar == true)
//	{
//		passwordBox->UseSystemPasswordChar = false;
//	}
//
//	passwordBox->ForeColor = System::Drawing::Color::Black;
//
//}
private: System::Void adminLogout_Click(System::Object^ sender, System::EventArgs^ e) {
	registorPanel->Hide();
	adminPanel->Hide();

}

	/* 
	////////////////------------- LOGIN BUTTON CLICK
	*/
private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (usernameBox->Text == " Username" ||
		usernameBox->Text == "" ||
		passwordBox->Text == " Password" ||
		passwordBox->Text == "")
	{
		MessageBox::Show("Please enter username and password!", "Username or Password Empty", 
			MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	// For admin
	if (usernameBox->Text == "admin" && passwordBox->Text == "admin")
	{
		
		registorPanel->Show();
		adminPanel->Show();
		////adminPanel->Hide();
		//userPanel->Hide();
		//changePassPanel->Hide();
		//manageUserPanel->Hide();
		return;
	}

	// For user
	String^ username = this->usernameBox->Text;
	String^ password = this->passwordBox->Text;

	String^ connString = "Data Source=DESKTOP-NIF9LL9\\SQLEXPRESS;Initial Catalog=HandGesture;Integrated Security=True";
	SqlConnection sqlConn(connString);
	sqlConn.Open();

	String^ sqlQuery = "SELECT * FROM users WHERE username=@username AND password=@password;";
	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@username", username);
	command.Parameters->AddWithValue("@password", password);

	SqlDataReader^ reader = command.ExecuteReader();
	if (reader->Read())
	{

		user = gcnew User;
		user->id = reader->GetInt32(0);
		user->firstName = reader->GetString(1);
		user->lastName = reader->GetString(2);
		user->username = reader->GetString(3);
		user->password = reader->GetString(4);

	}
	else
	{
		MessageBox::Show("Username or password is incorrect",
			"Username or Password Error", MessageBoxButtons::OK);
		return;
	}

	//registorPanel->Hide();
	registorPanel->Show();
	adminPanel->Show();
	userPanel->Show();
	
	userWelcomeLabel->Text = "Welcome Back, " + user->firstName + " " + user->lastName + "!";

}

private: System::Void passwordBox_Click(System::Object^ sender, System::EventArgs^ e) {

	if (passwordBox->Text == " Password")
	{
		passwordBox->Text = "";
	}

	if (passwordBox->UseSystemPasswordChar == false)
	{
		passwordBox->UseSystemPasswordChar = true;
		//passwordBox->SizeChanged();
	}

	passwordBox->ForeColor = System::Drawing::Color::Black;

}

	   // admin menu panel
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (adminMenuPanel->Visible)
	{
		adminMenuPanel->Visible = false;
	}
	else {
		adminMenuPanel->Visible = true;
	}
}

	   // user menu panel
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (userMenuPanel->Visible)
	{
		userMenuPanel -> Visible = false;
	}
	else {
		userMenuPanel->Visible = true;
	}

}

	// user log out button
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	adminPanel->Hide();
	registorPanel->Hide();
	userPanel->Hide();

}

	   // register button in sign up panel 
private: System::Void registerButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (passwordTextbox->Text != rePasswordTextbox->Text)
	{
		MessageBox::Show("The password confirmation does not match.", "Re-enter password confirmation!",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);

		return;
	}

	String^ firstName = firstNameTextbox->Text;
	String^ lastName = lastNameTextbox->Text;
	String^ username = usernameTextbox->Text;
	String^ password = passwordTextbox->Text;

	if (firstName->Length == 0 || 
		lastName->Length == 0 || 
		username->Length == 0 || 
		password->Length == 0)
	{
		MessageBox::Show("Please enter all fields", "One or more fields are empty!", 
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

		return;
	}

	try
	{

		String^ connString = "Data Source=DESKTOP-NIF9LL9\\SQLEXPRESS;Initial Catalog=HandGesture;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		// Check if the username is already taken
		String^ query = "SELECT COUNT(*) FROM users WHERE username=@username;";
		SqlCommand cmd(query, % sqlConn);
		cmd.Parameters->AddWithValue("@username", username);

		int count = Convert::ToInt32(cmd.ExecuteScalar());
		if (count > 0)
		{
			MessageBox::Show("Username is already taken. Please choose a different username.", "Username Taken", MessageBoxButtons::OK);
			return;
		}

		// Thêm acc vào database 
		String^ sqlQuery = "INSERT INTO users " +
			"(firstName, lastName, username, password) VALUES" +
			"(@firstName, @lastName, @username, @password);";


		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@firstName", firstName);
		command.Parameters->AddWithValue("lastName", lastName);
		command.Parameters->AddWithValue("@username", username);
		command.Parameters->AddWithValue("@password", password);

		SqlDataReader^ reader = command.ExecuteReader();

		user = gcnew User;
		user->firstName = firstName;
		user->lastName = lastName;
		user->username = username;
		user->password = password;

		MessageBox::Show("Success!", "New User has been added!",
			MessageBoxButtons::OK);

		registorPanel->Hide();

		firstNameTextbox->Text = "";
		lastNameTextbox->Text = "";
		usernameTextbox->Text = "";
		passwordTextbox->Text = "";
		rePasswordTextbox->Text = "";

	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Failed!", "Failed to register new user.",
			MessageBoxButtons::OK);
	}

}
private: System::Void userChangePassword_Click(System::Object^ sender, System::EventArgs^ e) {

	changePassPanel->Show();
	button3->Enabled = false;
	userSelectRoom->Enabled = false;
	logoutUserButton->Enabled = false;
}
private: System::Void ConfirmButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (oldPassTextBox->Text == "" ||
		newPassTextBox->Text == "" ||
		reEnterNewPassTextBox->Text == "")
	{
		MessageBox::Show("Please enter all fields", "One or more fields are empty!",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

		return;
	}

	if (newPassTextBox->Text != reEnterNewPassTextBox->Text)
	{
		MessageBox::Show("The password confirmation does not match.", "Re-enter password confirmation!",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);

		return;
	}

	if (newPassTextBox->Text == oldPassTextBox->Text)
	{
		MessageBox::Show("The new password is the same with the old one.", "Re-enter new password!",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);

		return;
	}

	int userId = user->id;
	String^ username = user->username;
	String^ oldPassword = user->password;
	String^ newPassword = newPassTextBox->Text;

	// First, establish a connection to the database using the connection string
	String^ connString = "Data Source=DESKTOP-NIF9LL9\\SQLEXPRESS;Initial Catalog=HandGesture;Integrated Security=True";
	SqlConnection sqlConn(connString);
	sqlConn.Open();

	// Then, create a SQL query to update the password for the user with the given ID
	String^ sqlQuery = "UPDATE users SET password=@newPassword WHERE id=@userId AND username=@username AND password=@oldPassword;";

	// Create a SqlCommand object and add the necessary parameters
	SqlCommand command(sqlQuery, % sqlConn);
	command.Parameters->AddWithValue("@userId", userId);
	command.Parameters->AddWithValue("@username", username);
	command.Parameters->AddWithValue("@oldPassword", oldPassword);
	command.Parameters->AddWithValue("@newPassword", newPassword);

	// Execute the command and get the number of rows affected
	int rowsAffected = command.ExecuteNonQuery();

	// Check if the password was successfully updated
	if (rowsAffected > 0)
	{
		MessageBox::Show("Password successfully updated!", "Success", MessageBoxButtons::OK);
	}
	else
	{
		MessageBox::Show("Unable to update password. Please check your input and try again.", "Error", MessageBoxButtons::OK);
	}

	// Close the database connection
	sqlConn.Close();
	changePassPanel->Hide();

}
private: System::Void cancelChangePass_Click(System::Object^ sender, System::EventArgs^ e) {
	
	button3->Enabled = true;
	userSelectRoom->Enabled = true;
	logoutUserButton->Enabled = true;
	
	changePassPanel->Hide();

}
private: System::Void manageUserButton_Click(System::Object^ sender, System::EventArgs^ e) {

	manageUserPanel->Show();

	manageRoomButton->Enabled = false;
	adminLogout->Enabled = false;
	adminMenuButton->Enabled = false;

	/*userListBox->DataSource = nullptr;
	userListBox->Items->Clear();*/

	userListBox->DataSource = nullptr;
	userListBox->Items->Clear();

	String^ connString = "Data Source=DESKTOP-NIF9LL9\\SQLEXPRESS;Initial Catalog=HandGesture;Integrated Security=True";
	SqlConnection sqlConn(connString);
	sqlConn.Open();

	String^ sqlQuery = "SELECT * FROM users;";
	SqlCommand command(sqlQuery, % sqlConn);

	SqlDataReader^ reader = command.ExecuteReader();

	while (reader->Read())
	{
		// Fetch user information from the database
		int userID = reader->GetInt32(0);
		String^ firstName = reader->GetString(1);
		String^ lastName = reader->GetString(2);
		String^ username = reader->GetString(3);

		userListBox->Items->Add("ID: " + userID + " || " + "Name: " + firstName + " " + lastName + " || " + "Username: " + username);
	}


	// Close the database connection
	sqlConn.Close();


}
private: System::Void manageUserBackButton_Click(System::Object^ sender, System::EventArgs^ e) {

	manageUserPanel->Hide();

	manageRoomButton->Enabled = true;
	adminLogout->Enabled = true;
	adminMenuButton->Enabled = true;

}
private: System::Void refreshUserButton_Click(System::Object^ sender, System::EventArgs^ e) {

	userListBox->DataSource = nullptr;
	userListBox->Items->Clear();

	String^ connString = "Data Source=DESKTOP-NIF9LL9\\SQLEXPRESS;Initial Catalog=HandGesture;Integrated Security=True";
	SqlConnection sqlConn(connString);
	sqlConn.Open();

	String^ sqlQuery = "SELECT * FROM users;";
	SqlCommand command(sqlQuery, % sqlConn);

	SqlDataReader^ reader = command.ExecuteReader();

	while (reader->Read())
	{
		// Fetch user information from the database
		int userID = reader->GetInt32(0);
		String^ firstName = reader->GetString(1);
		String^ lastName = reader->GetString(2);
		String^ username = reader->GetString(3);

		userListBox->Items->Add("ID: " + userID + " || " + "Name: " + firstName + " " + lastName + " || " + "Username: " + username);
	}


	// Close the database connection
	sqlConn.Close();
}
private: System::Void realDeleteButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (enterUserIDToDelete->Text == "")
	{
		MessageBox::Show("Enter the user's ID!", "User's ID is empty!", MessageBoxButtons::OK);
	}

	if (MessageBox::Show("Are you sure to delete this user?", "Delete User?", MessageBoxButtons::YesNo, MessageBoxIcon::Question)
		== System::Windows::Forms::DialogResult::No)
	{
		return;
	}

	// Get the user ID of the account to be deleted
	int userId = System::Convert::ToInt32(enterUserIDToDelete->Text);

	// Create a connection to the database
	String^ connString = "Data Source=DESKTOP-NIF9LL9\\SQLEXPRESS;Initial Catalog=HandGesture;Integrated Security=True";
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	sqlConn->Open();

	// Define the SQL query to delete the user from the database
	String^ sqlQuery = "DELETE FROM users WHERE id = @userId;";
	SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
	command->Parameters->AddWithValue("@userId", userId);

	// Execute the SQL command to delete the user
	int rowsAffected = command->ExecuteNonQuery();

	// Check if any rows were affected by the deletion operation
	if (rowsAffected > 0) {
		// Display a success message
		MessageBox::Show("User account deleted successfully.", "Successful!", MessageBoxButtons::OK); 
	}
	else {
		// Display an error message
		MessageBox::Show("Failed to delete user account.", "Failed!", MessageBoxButtons::OK);
	}

	// Close the database connection
	sqlConn->Close();


}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void manageRoomButton_Click(System::Object^ sender, System::EventArgs^ e) {

	manageRoomPanel->Show();

	manageUserButton->Enabled = false;
	adminLogout->Enabled = false;
	adminMenuButton->Enabled = false;


	roomListBox->DataSource = nullptr;
	roomListBox->Items->Clear();

	String^ connString = "Data Source=DESKTOP-NIF9LL9\\SQLEXPRESS;Initial Catalog=HandGesture;Integrated Security=True";
	SqlConnection sqlConn(connString);
	sqlConn.Open();

	String^ sqlQuery = "SELECT * FROM rooms;";
	SqlCommand command(sqlQuery, % sqlConn);

	SqlDataReader^ reader = command.ExecuteReader();

	while (reader->Read())
	{
		// Fetch user information from the database
		int roomID = reader->GetInt32(0);
		String^ roomName = reader->GetString(1);
		String^ roomOwner = reader->GetString(2);

		roomListBox->Items->Add("ID: " + roomID + " || " + "Room Name: " + roomName + " || " + "Room Owner: " + roomOwner);
	}


	// Close the database connection
	sqlConn.Close();
}
private: System::Void deleteRoomButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (roomIDToDelete->Text == "")
	{
		MessageBox::Show("Enter the room's ID!", "Room's ID is empty!", MessageBoxButtons::OK);
	}

	if (MessageBox::Show("Are you sure to delete this room?", "Delete Room?", MessageBoxButtons::YesNo, MessageBoxIcon::Question)
		== System::Windows::Forms::DialogResult::No)
	{
		return;
	}

	// Get the room ID of the account to be deleted
	int roomID = System::Convert::ToInt32(roomIDToDelete->Text);

	// Create a connection to the database
	String^ connString = "Data Source=DESKTOP-NIF9LL9\\SQLEXPRESS;Initial Catalog=HandGesture;Integrated Security=True";
	SqlConnection^ sqlConn = gcnew SqlConnection(connString);
	sqlConn->Open();

	// Define the SQL query to delete the room from the database
	String^ sqlQuery = "DELETE FROM rooms WHERE id = @roomID;";
	SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
	command->Parameters->AddWithValue("@roomID", roomID);

	// Execute the SQL command to delete the room
	int rowsAffected = command->ExecuteNonQuery();

	// Check if any rows were affected by the deletion operation
	if (rowsAffected > 0) {
		// Display a success message
		MessageBox::Show("Room deleted successfully.", "Successful!", MessageBoxButtons::OK);
		roomIDToDelete->Text == "";
	}
	else {
		// Display an error message
		MessageBox::Show("Failed to room.", "Failed!", MessageBoxButtons::OK);
	}

	// Close the database connection
	sqlConn->Close();

}
private: System::Void roomAddButton_Click(System::Object^ sender, System::EventArgs^ e) {


	String^ roomName = roomNameTextBox->Text;
	String^ roomOwner = roomOwnerTextBox->Text;
	//int id = 2;

	if (roomName->Length == 0 ||
		roomOwner->Length == 0)
	{
		MessageBox::Show("Please enter all fields", "One or more fields are empty!",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

		return;
	}

	try
	{

		String^ connString = "Data Source=DESKTOP-NIF9LL9\\SQLEXPRESS;Initial Catalog=HandGesture;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();


		// Thêm room vào database 
		String^ sqlQuery = "INSERT INTO rooms " +
			"(roomName, roomOwner) VALUES" +
			"(@roomName, @roomOwner);";

		//MessageBox::Show(sqlQuery, "Query", MessageBoxButtons::OK);


		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@roomName", roomName);
		command.Parameters->AddWithValue("@roomOwner", roomOwner);

		SqlDataReader^ reader = command.ExecuteReader();


		MessageBox::Show("Success!", "New room has been added!",
			MessageBoxButtons::OK);

		sqlConn.Close();

		roomNameTextBox->Text = "";
		roomOwnerTextBox->Text = "";


	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Failed!", "Failed to add new room.",
			MessageBoxButtons::OK);
	}

}
private: System::Void refreshRoom_Click(System::Object^ sender, System::EventArgs^ e) {

	roomListBox->DataSource = nullptr;
	roomListBox->Items->Clear();

	String^ connString = "Data Source=DESKTOP-NIF9LL9\\SQLEXPRESS;Initial Catalog=HandGesture;Integrated Security=True";
	SqlConnection sqlConn(connString);
	sqlConn.Open();

	String^ sqlQuery = "SELECT * FROM rooms;";
	SqlCommand command(sqlQuery, % sqlConn);

	SqlDataReader^ reader = command.ExecuteReader();

	while (reader->Read())
	{
		// Fetch user information from the database
		int roomID = reader->GetInt32(0);
		String^ roomName = reader->GetString(1);
		String^ roomOwner = reader->GetString(2);

		roomListBox->Items->Add("ID: " + roomID + " || " + "Room Name: " + roomName + " || " + "Room Owner: " + roomOwner);
	}


	// Close the database connection
	sqlConn.Close();

}
private: System::Void backManageRoomButton_Click(System::Object^ sender, System::EventArgs^ e) {

	manageRoomPanel->Hide();

	manageUserButton->Enabled = true;
	adminLogout->Enabled = true;
	adminMenuButton->Enabled = true;

}
};
}
