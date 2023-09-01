#pragma once
#include <iostream>
#include <windows.h>
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
	short version;
	
	/// <summary>
	/// Сводка для creepy
	/// </summary>
	/// 
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






	private: System::Windows::Forms::Label^ wts_new_txt;







	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ s_version;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;








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
			this->wts_new_txt = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->s_version = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// wts_new_txt
			// 
			this->wts_new_txt->AutoSize = true;
			this->wts_new_txt->Font = (gcnew System::Drawing::Font(L"Calibri", 12.2F));
			this->wts_new_txt->ForeColor = System::Drawing::Color::White;
			this->wts_new_txt->Location = System::Drawing::Point(63, 430);
			this->wts_new_txt->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->wts_new_txt->Name = L"wts_new_txt";
			this->wts_new_txt->Size = System::Drawing::Size(0, 26);
			this->wts_new_txt->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Minecraft", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(373, 676);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 34);
			this->label1->TabIndex = 12;
			this->label1->Text = L"Выберите версию";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Minecraft", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(2, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(323, 34);
			this->label2->TabIndex = 13;
			this->label2->Text = L"CreepyLauncher pre-1.3_03";
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
			this->s_version->Location = System::Drawing::Point(564, 680);
			this->s_version->Margin = System::Windows::Forms::Padding(4);
			this->s_version->Name = L"s_version";
			this->s_version->Size = System::Drawing::Size(228, 34);
			this->s_version->TabIndex = 0;
			this->s_version->SelectedIndexChanged += gcnew System::EventHandler(this, &creepy::s_version_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Minecraft", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(2, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 34);
			this->label3->TabIndex = 14;
			this->label3->Text = L"FPS: 0";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Mojang", 13.8F));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(430, 281);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(352, 50);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Launch  Game";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button1->UseMnemonic = false;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &creepy::button1_click);
			// 
			// creepy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 26);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1167, 751);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->s_version);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->wts_new_txt);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Font = (gcnew System::Drawing::Font(L"Minecraft", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1185, 800);
			this->Name = L"creepy";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CreepyLauncher pre-1.3_03";
			this->Load += gcnew System::EventHandler(this, &creepy::creepy_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void creepy_Load(System::Object^ sender, System::EventArgs^ e) {
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



	
	private: System::Void button1_click(System::Object^ sender, System::EventArgs^ e) {
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
		else {
			std::cout << 0;
		}
	}
};
}
