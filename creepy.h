#pragma once
#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <shellapi.h>
// #include "Warning.h"

namespace Creepylaunch {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	std::wstring Utf8ToUtf16(const std::string& utf8);
	short version = 0;
	/// <summary>
	/// Сводка для creepy
	/// </summary>
	public ref class creepy : public System::Windows::Forms::Form
	{
	public:
		creepy(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~creepy()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ version_label;
	private: System::Windows::Forms::Label^ label_1;

	private: System::Windows::Forms::Button^ hex_01;
	private: System::Windows::Forms::Button^ b_171;
	private: System::Windows::Forms::Label^ wts_new;
	private: System::Windows::Forms::Label^ wts_new_txt;
	private: System::Windows::Forms::Button^ e_422;
	private: System::Windows::Forms::Button^ upd_check;
	private: System::Windows::Forms::Button^ a_000;
	private: System::Windows::Forms::ComboBox^ s_version;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;


	private:



	private:

	private:

















	protected:

	protected:

	protected:

	protected:

	protected:
	private: System::ComponentModel::IContainer^ components;
	public:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(creepy::typeid));
			this->version_label = (gcnew System::Windows::Forms::Label());
			this->label_1 = (gcnew System::Windows::Forms::Label());
			this->hex_01 = (gcnew System::Windows::Forms::Button());
			this->b_171 = (gcnew System::Windows::Forms::Button());
			this->wts_new = (gcnew System::Windows::Forms::Label());
			this->wts_new_txt = (gcnew System::Windows::Forms::Label());
			this->e_422 = (gcnew System::Windows::Forms::Button());
			this->upd_check = (gcnew System::Windows::Forms::Button());
			this->a_000 = (gcnew System::Windows::Forms::Button());
			this->s_version = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// version_label
			// 
			this->version_label->AutoSize = true;
			this->version_label->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->version_label->ForeColor = System::Drawing::Color::Yellow;
			this->version_label->Location = System::Drawing::Point(467, 9);
			this->version_label->Name = L"version_label";
			this->version_label->Size = System::Drawing::Size(216, 21);
			this->version_label->TabIndex = 0;
			this->version_label->Text = L"Версия лаунчера: pre-1.3_01\r\n";
			// 
			// label_1
			// 
			this->label_1->AutoSize = true;
			this->label_1->Font = (gcnew System::Drawing::Font(L"Calibri", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_1->Location = System::Drawing::Point(368, 30);
			this->label_1->Name = L"label_1";
			this->label_1->Size = System::Drawing::Size(418, 40);
			this->label_1->TabIndex = 1;
			this->label_1->Text = L"Выберите версию из списка";
			// 
			// hex_01
			// 
			this->hex_01->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->hex_01->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->hex_01->Cursor = System::Windows::Forms::Cursors::Hand;
			this->hex_01->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->hex_01->FlatAppearance->BorderSize = 0;
			this->hex_01->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->hex_01->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->hex_01->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->hex_01->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->hex_01->ForeColor = System::Drawing::Color::White;
			this->hex_01->Location = System::Drawing::Point(581, 112);
			this->hex_01->Name = L"hex_01";
			this->hex_01->Size = System::Drawing::Size(205, 34);
			this->hex_01->TabIndex = 3;
			this->hex_01->Text = L"Запустить Hex 01\r\n";
			this->hex_01->UseVisualStyleBackColor = false;
			this->hex_01->Click += gcnew System::EventHandler(this, &creepy::hex_01_Click);
			// 
			// b_171
			// 
			this->b_171->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->b_171->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->b_171->Cursor = System::Windows::Forms::Cursors::Hand;
			this->b_171->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->b_171->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->b_171->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->b_171->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_171->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b_171->ForeColor = System::Drawing::Color::White;
			this->b_171->Location = System::Drawing::Point(287, 112);
			this->b_171->Name = L"b_171";
			this->b_171->Size = System::Drawing::Size(205, 34);
			this->b_171->TabIndex = 4;
			this->b_171->Text = L"Запустить Beta 1.7.1\r\n\r\n";
			this->b_171->UseVisualStyleBackColor = false;
			this->b_171->Click += gcnew System::EventHandler(this, &creepy::b_171_Click);
			// 
			// wts_new
			// 
			this->wts_new->AutoSize = true;
			this->wts_new->Cursor = System::Windows::Forms::Cursors::Hand;
			this->wts_new->Font = (gcnew System::Drawing::Font(L"Calibri", 14.2F));
			this->wts_new->Location = System::Drawing::Point(56, 286);
			this->wts_new->Name = L"wts_new";
			this->wts_new->Size = System::Drawing::Size(208, 29);
			this->wts_new->TabIndex = 5;
			this->wts_new->Text = L"[+] Что нового в 1.3";
			this->wts_new->Click += gcnew System::EventHandler(this, &creepy::wts_new_Click);
			// 
			// wts_new_txt
			// 
			this->wts_new_txt->AutoSize = true;
			this->wts_new_txt->Font = (gcnew System::Drawing::Font(L"Calibri", 12.2F));
			this->wts_new_txt->ForeColor = System::Drawing::Color::White;
			this->wts_new_txt->Location = System::Drawing::Point(56, 347);
			this->wts_new_txt->Name = L"wts_new_txt";
			this->wts_new_txt->Size = System::Drawing::Size(0, 26);
			this->wts_new_txt->TabIndex = 6;
			// 
			// e_422
			// 
			this->e_422->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->e_422->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->e_422->Cursor = System::Windows::Forms::Cursors::Hand;
			this->e_422->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->e_422->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->e_422->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->e_422->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->e_422->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->e_422->Location = System::Drawing::Point(287, 178);
			this->e_422->Name = L"e_422";
			this->e_422->Size = System::Drawing::Size(205, 34);
			this->e_422->TabIndex = 7;
			this->e_422->Text = L"Запустить ERROR 422";
			this->e_422->UseVisualStyleBackColor = false;
			this->e_422->Click += gcnew System::EventHandler(this, &creepy::e_422_Click);
			// 
			// upd_check
			// 
			this->upd_check->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->upd_check->Cursor = System::Windows::Forms::Cursors::Hand;
			this->upd_check->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->upd_check->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->upd_check->Font = (gcnew System::Drawing::Font(L"Calibri", 13.2F, System::Drawing::FontStyle::Bold));
			this->upd_check->ForeColor = System::Drawing::SystemColors::Window;
			this->upd_check->Location = System::Drawing::Point(29, 517);
			this->upd_check->Name = L"upd_check";
			this->upd_check->Size = System::Drawing::Size(248, 84);
			this->upd_check->TabIndex = 8;
			this->upd_check->Text = L"Проверить обновления";
			this->upd_check->UseVisualStyleBackColor = false;
			this->upd_check->Click += gcnew System::EventHandler(this, &creepy::upd_check_Click);
			// 
			// a_000
			// 
			this->a_000->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->a_000->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->a_000->Cursor = System::Windows::Forms::Cursors::Hand;
			this->a_000->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->a_000->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Silver;
			this->a_000->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->a_000->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->a_000->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->a_000->Location = System::Drawing::Point(581, 178);
			this->a_000->Name = L"a_000";
			this->a_000->Size = System::Drawing::Size(205, 34);
			this->a_000->TabIndex = 9;
			this->a_000->Text = L"start.Alpha 0.0.0";
			this->a_000->UseVisualStyleBackColor = false;
			this->a_000->Click += gcnew System::EventHandler(this, &creepy::a_000_Click);
			// 
			// s_version
			// 
			this->s_version->AccessibleDescription = L"";
			this->s_version->AccessibleName = L"";
			this->s_version->BackColor = System::Drawing::Color::White;
			this->s_version->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->s_version->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->s_version->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->s_version->FormattingEnabled = true;
			this->s_version->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->s_version->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"beta 1.7.1", L"hex 01", L"error 422", L"alpha 0.0.0" });
			this->s_version->Location = System::Drawing::Point(508, 550);
			this->s_version->Name = L"s_version";
			this->s_version->Size = System::Drawing::Size(206, 29);
			this->s_version->TabIndex = 0;
			this->s_version->SelectedIndexChanged += gcnew System::EventHandler(this, &creepy::s_version_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(252)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(154)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(14)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 17, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(791, 517);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(230, 84);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Войти в игру\r\n";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &creepy::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(347, 552);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 27);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Выберите версию";
			// 
			// creepy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->ClientSize = System::Drawing::Size(1051, 613);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->s_version);
			this->Controls->Add(this->a_000);
			this->Controls->Add(this->upd_check);
			this->Controls->Add(this->e_422);
			this->Controls->Add(this->wts_new_txt);
			this->Controls->Add(this->wts_new);
			this->Controls->Add(this->b_171);
			this->Controls->Add(this->hex_01);
			this->Controls->Add(this->label_1);
			this->Controls->Add(this->version_label);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1069, 655);
			this->Name = L"creepy";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CreepyLaunch";
			this->Load += gcnew System::EventHandler(this, &creepy::creepy_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void creepy_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void b_171_Click(System::Object^ sender, System::EventArgs^ e) {
	this->b_171->Text = "Открытие...";
	this->Refresh();
	system("C:\\creepytoast\\java\\jb171\\preload.bat");
	Sleep(2000);
	this->b_171->Text = "Запустить Beta 1.7.1";

}
private: System::Void hex_01_Click(System::Object^ sender, System::EventArgs^ e) {
	this->hex_01->Text = "Открытие...";
	this->Refresh();
	system("C:\\creepytoast\\java\\jhex01\\preload.bat");
	Sleep(2000);
	this->hex_01->Text = "Запустить Hex 01";
	
}


private: bool isShown = false; // флаг-переключатель, изначально скрыто

	   System::Void wts_new_Click(System::Object^ sender, System::EventArgs^ e) {
		   if (isShown) { // если показано, скрыть
			   this->wts_new->Text = "[+] Что нового в 1.2";
			   this->wts_new_txt->Text = " ";
			   isShown = false; // изменить состояние на скрыто
		   }
		   else { // если скрыто, показать
			   this->wts_new->Text = "[-] Что нового в 1.2";
			   this->wts_new_txt->Text = "- Added Alpha 0.0.0\n- Added dropdown menu";
			   isShown = true; // изменить состояние на показано
		   }
	   }



private: System::Void e_422_Click(System::Object^ sender, System::EventArgs^ e) {
	// Warning^ DlgFrm = gcnew Warning;
	// DlgFrm->ShowDialog();
	
	this->e_422->Text = "Открытие...";
	this->Refresh();
	system("C:\\creepytoast\\java\\err422\\preload.bat");
	Sleep(2000);
	this->e_422->Text = "Запустить ERROR 422";
	
}
private: System::Void upd_check_Click(System::Object^ sender, System::EventArgs^ e) {
	
	system("start http://fgdgdps.ru/creepylaunch/sources");
	
}


private: System::Void a_000_Click(System::Object^ sender, System::EventArgs^ e) {
	this->a_000->Text = "Открытие...";
	this->Refresh();
	system("C:\\creepytoast\\java\\ja000\\preload.bat");
	Sleep(2000);
	this->a_000->Text = "Запустить Alpha 0.0.0";
}



private: System::Void s_version_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {


	if (this->s_version->SelectedItem == "beta 1.7.1") {
		version = 1;
	}
	else if (this->s_version->SelectedItem == "hex 01") {
		version = 2;
	}
	else if (this->s_version->SelectedItem == "error 422") {
		version = 3;
	}
	else if (this->s_version->SelectedItem == "alpha 0.0.0") {
		version = 4;
	}
	else {
		version = 0;
	}
}



private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (version == 1) {
		system("C:\\creepytoast\\java\\jb171\\preload.bat");
	}
	else if (version == 2) {
		system("C:\\creepytoast\\java\\jhex01\\preload.bat");
	}
	else if (version == 3) {
		system("C:\\creepytoast\\java\\err422\\preload.bat");
	}
	else if (version == 4) {
		system("C:\\creepytoast\\java\\ja000\\preload.bat");
	}
	else if (version == 0) {
		std::cout << version;
	}
}
};
}
