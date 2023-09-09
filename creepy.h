#pragma once
#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <shellapi.h>

// #include "Warning.h"
int GetMonitorRefreshRate()
{
	DEVMODE dm;
	ZeroMemory(&dm, sizeof(dm));
	dm.dmSize = sizeof(dm);

	if (EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &dm))
	{
		return dm.dmDisplayFrequency;
	}
	else
	{
		return 0; // cannot calculate fps
	}
}
/// <summary>
/// POWERED BY VISUAL STUDIO 2022
/// </summary>

namespace Creepylaunch {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	std::wstring Utf8ToUtf16(const std::string& utf8);
	short version = 1;
	int refreshRate = GetMonitorRefreshRate();
	
	
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








	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ fpscounter;




	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ selector;
	private: System::Windows::Forms::Button^ quit;








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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->fpscounter = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->selector = (gcnew System::Windows::Forms::Button());
			this->quit = (gcnew System::Windows::Forms::Button());
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Minecraft", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(2, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(262, 34);
			this->label2->TabIndex = 13;
			this->label2->Text = L"CreepyLauncher v1.3.1";
			// 
			// fpscounter
			// 
			this->fpscounter->AutoSize = true;
			this->fpscounter->BackColor = System::Drawing::Color::Transparent;
			this->fpscounter->Font = (gcnew System::Drawing::Font(L"Minecraft", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fpscounter->ForeColor = System::Drawing::SystemColors::Control;
			this->fpscounter->Location = System::Drawing::Point(2, 43);
			this->fpscounter->Name = L"fpscounter";
			this->fpscounter->Size = System::Drawing::Size(76, 34);
			this->fpscounter->TabIndex = 14;
			//this->fpscounter->Text = L"FPS: 0";
			this->fpscounter-> Text = "FPS: " + refreshRate.ToString();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->panel1->Location = System::Drawing::Point(206, 72);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(789, 109);
			this->panel1->TabIndex = 16;
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
			this->button1->MouseEnter += gcnew System::EventHandler(this, &creepy::launchEnter);
			this->button1->MouseLeave += gcnew System::EventHandler(this, &creepy::launchLeave);
			// 
			// selector
			// 
			this->selector->BackColor = System::Drawing::Color::Transparent;
			this->selector->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"selector.BackgroundImage")));
			this->selector->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->selector->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->selector->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->selector->FlatAppearance->BorderSize = 0;
			this->selector->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->selector->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->selector->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->selector->Font = (gcnew System::Drawing::Font(L"Mojang", 13.8F));
			this->selector->ForeColor = System::Drawing::Color::White;
			this->selector->Location = System::Drawing::Point(430, 357);
			this->selector->Margin = System::Windows::Forms::Padding(4);
			this->selector->Name = L"selector";
			this->selector->Size = System::Drawing::Size(352, 50);
			this->selector->TabIndex = 15;
			this->selector->Text = L"Version:  Alpha 0.0.0";
			this->selector->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->selector->UseMnemonic = false;
			this->selector->UseVisualStyleBackColor = false;
			this->selector->Click += gcnew System::EventHandler(this, &creepy::selector_Click);
			this->selector->MouseEnter += gcnew System::EventHandler(this, &creepy::mouseEnter);
			this->selector->MouseLeave += gcnew System::EventHandler(this, &creepy::mouseLeave);
			// 
			// quit
			// 
			this->quit->BackColor = System::Drawing::Color::Transparent;
			this->quit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"quit.BackgroundImage")));
			this->quit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->quit->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->quit->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->quit->FlatAppearance->BorderSize = 0;
			this->quit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->quit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gainsboro;
			this->quit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->quit->Font = (gcnew System::Drawing::Font(L"Mojang", 13.8F));
			this->quit->ForeColor = System::Drawing::SystemColors::Control;
			this->quit->Location = System::Drawing::Point(430, 430);
			this->quit->Margin = System::Windows::Forms::Padding(4);
			this->quit->Name = L"quit";
			this->quit->Size = System::Drawing::Size(352, 50);
			this->quit->TabIndex = 17;
			this->quit->Text = L"Quit";
			this->quit->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->quit->UseMnemonic = false;
			this->quit->UseVisualStyleBackColor = false;
			this->quit->Click += gcnew System::EventHandler(this, &creepy::quit_Click);
			this->quit->MouseEnter += gcnew System::EventHandler(this, &creepy::quit_Enter);
			this->quit->MouseLeave += gcnew System::EventHandler(this, &creepy::quit_Leave);
			// 
			// creepy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 26);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(67)), static_cast<System::Int32>(static_cast<System::Byte>(66)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1167, 751);
			this->Controls->Add(this->quit);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->selector);
			this->Controls->Add(this->fpscounter);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->wts_new_txt);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Font = (gcnew System::Drawing::Font(L"Minecraft", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1185, 800);
			this->Name = L"creepy";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CreepyLauncher v1.3.1";
			this->Load += gcnew System::EventHandler(this, &creepy::creepy_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void creepy_Load(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void button1_click(System::Object^ sender, System::EventArgs^ e) {
		/*if (version == 1) {
			//MessageBox::Show("ATTENTION: This version has not been tested and may contain viruses! CLICK \"OK\" FOR CONTINUE", "ALERT", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			system("C:\\creepytoast\\java\\ja000\\preload.bat");
		}*/
		switch (version) {
		case 1:
			system("C:\\creepytoast\\java\\ja000\\preload.bat");
			break;
		case 2:
			system("C:\\creepytoast\\java\\ja12303\\preload.bat");
			break;
		case 3:
			system("C:\\creepytoast\\java\\ja12303rem\\preload.bat");
			break;
		case 4:
			system("C:\\creepytoast\\java\\ja12303rel\\preload.bat");
			break;
		case 5:
			system("C:\\creepytoast\\java\\jb171\\preload.bat");
			break;
		case 6:
			MessageBox::Show("ATTENTION: This version has not been tested and may contain viruses! CLICK \"OK\" FOR CONTINUE", "ALERT", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			system("C:\\creepytoast\\java\\jhex01\\preload.bat");
			break;
		case 7:
			MessageBox::Show("ATTENTION: This version has not been tested and may contain viruses! CLICK \"OK\" FOR CONTINUE", "ALERT", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			system("C:\\creepytoast\\java\\err422\\preload.bat");
			break;
		}

	}
		   /*private: System::Void button_selector_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			   this->selector->ForeColor = Color::Yellow;
		   }

		   private: System::Void button_selector_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			   this->selector->ForeColor = Control::DefaultForeColor;
		   }*/


	private: System::Void selector_Click(System::Object^ sender, System::EventArgs^ e) {
		// version = 1;
		/* if (version != 1 && version != 2 && version != 3 && version != 4 && version != 5 && version != 6 && version != 7 && version != 8) {
			this->selector->Text = L"Version:  Alpha 0.0.0";
			this->selector->Font = (gcnew System::Drawing::Font(L"Mojang", 13.8F));
			version = 2;
		} */

		/* this-->fpscounter-->Text = "FPS: " + refreshRate.ToString(); */
		if (version == 7) {
			this->selector->Text = L"Version:  Alpha 0.0.0";
			this->selector->Font = (gcnew System::Drawing::Font(L"Mojang", 13.8F));
			version = 1;
		}
		else if (version == 1) {
			this->selector->Text = L"Version:  Alpha 1.2.3_03";
			version = 2;
		}
		else if (version == 2) {
			this->selector->Text = L"Version:  Alpha 1.2.3_03-Remastered";
			this->selector->Font = (gcnew System::Drawing::Font(L"Mojang", 9.8F));
			version = 3;
		}
		else if (version == 3) {
			this->selector->Text = L"Version:  Alpha 1.2.3_03-Reload";
			this->selector->Font = (gcnew System::Drawing::Font(L"Mojang", 11.8F));
			version = 4;
		}
		else if (version == 4) {
			this->selector->Text = L"Version:  Beta 1.7.1";
			this->selector->Font = (gcnew System::Drawing::Font(L"Mojang", 13.8F));
			version = 5;
		}
		else if (version == 5) {
			this->selector->Text = L"Version:  HEX_01";
			this->selector->Font = (gcnew System::Drawing::Font(L"Mojang", 13.8F));
			version = 6;
		}
		else if (version == 6) {
			this->selector->Text = L"Version:  ERROR 422";
			this->selector->Font = (gcnew System::Drawing::Font(L"Mojang", 13.8F));
			version = 7;
		}

	}
	private: System::Void mouseEnter(System::Object^ sender, System::EventArgs^ e) {

		this->selector->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}
	private: System::Void mouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->selector->ForeColor = System::Drawing::SystemColors::Control;
	}

	private: System::Void launchEnter(System::Object^ sender, System::EventArgs^ e) {
		this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
			static_cast<System::Int32>(static_cast<System::Byte>(128)));
	}

	private: System::Void launchLeave(System::Object^ sender, System::EventArgs^ e) {
		this->button1->ForeColor = System::Drawing::SystemColors::Control;
	}
		   



	
private: System::Void quit_Enter(System::Object^ sender, System::EventArgs^ e) {
	this->quit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
		static_cast<System::Int32>(static_cast<System::Byte>(189)));
}
private: System::Void quit_Leave(System::Object^ sender, System::EventArgs^ e) {
	this->quit->ForeColor = System::Drawing::SystemColors::Control;
}
private: System::Void quit_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult result = System::Windows::Forms::MessageBox::Show("Do you want to quit?", "Info", System::Windows::Forms::MessageBoxButtons::OKCancel, System::Windows::Forms::MessageBoxIcon::Information);

	if (result == System::Windows::Forms::DialogResult::OK) {
		this->Close();
	}
};
};
}
