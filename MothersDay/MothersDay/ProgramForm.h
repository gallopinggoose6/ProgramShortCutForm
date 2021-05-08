#pragma once

#include <stdlib.h>

namespace MothersDay {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ProgramForm
	/// </summary>
	public ref class ProgramForm : public System::Windows::Forms::Form
	{
	public:
		ProgramForm(void)
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
		~ProgramForm()
		{
			if (components)
			{
				delete components;
			}
		}

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProgramForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(99, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 42);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Outlook Mail";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ProgramForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(99, 116);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 42);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Facebook";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ProgramForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(99, 164);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(108, 42);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Word";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ProgramForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(85, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Happy Mother\'s Day, Mom!";
			// 
			// ProgramForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(308, 261);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ProgramForm";
			this->Text = L"Activity Launcher";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		system("\"\"C:\\Program Files\\Mozilla Firefox\\firefox.exe\" \"login.live.com\"\"");
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		system("\"C:\\Program Files\\Microsoft Office 15\\root\\office15\\winword.exe\"");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		system("\"\"C:\\Program Files\\Mozilla Firefox\\firefox.exe\" \"facebook.com\"\"");
	}

	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;
	};
}
