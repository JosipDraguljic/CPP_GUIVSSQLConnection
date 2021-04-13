#pragma once
#include "Functions.h"

namespace SQLConnectionGUIVS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für InsertData
	/// </summary>
	public ref class InsertData : public System::Windows::Forms::Form
	{
	public:
		InsertData(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~InsertData()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtName;
	protected:
	private: System::Windows::Forms::Button^ btnInsertName;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->btnInsertName = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(185, 106);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(163, 20);
			this->txtName->TabIndex = 0;
			// 
			// btnInsertName
			// 
			this->btnInsertName->Location = System::Drawing::Point(185, 141);
			this->btnInsertName->Name = L"btnInsertName";
			this->btnInsertName->Size = System::Drawing::Size(163, 23);
			this->btnInsertName->TabIndex = 1;
			this->btnInsertName->Text = L"Insert Name";
			this->btnInsertName->UseVisualStyleBackColor = true;
			this->btnInsertName->Click += gcnew System::EventHandler(this, &InsertData::btnInsertName_Click);
			// 
			// InsertData
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(524, 310);
			this->Controls->Add(this->btnInsertName);
			this->Controls->Add(this->txtName);
			this->Name = L"InsertData";
			this->Text = L"InsertData";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnInsertName_Click(System::Object^ sender, System::EventArgs^ e) {
		Functions f;
		f.Insert(txtName->Text);
	}
	};
}
