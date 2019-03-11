#pragma once
#include <iostream>
#include "Task1.h"
#include "Task2.h"

namespace Lab6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MainMenu^  mainMenu1;
	protected:
	private: System::Windows::Forms::MenuItem^  menuItem1;
	private: System::Windows::Forms::MenuItem^  menuItem2;
	private: System::Windows::Forms::MenuItem^  menuItem3;
	private: System::Windows::Forms::MenuItem^  menuItem4;
	private: System::Windows::Forms::MenuItem^  menuItem5;
	private: System::Windows::Forms::Panel^  Task;




	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;






	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::DataGridView^  dataGridView3;
	private: System::Windows::Forms::Label^  label7;

	private: System::ComponentModel::IContainer^  components;

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
			this->components = (gcnew System::ComponentModel::Container());
			this->mainMenu1 = (gcnew System::Windows::Forms::MainMenu(this->components));
			this->menuItem1 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem2 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem3 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem4 = (gcnew System::Windows::Forms::MenuItem());
			this->menuItem5 = (gcnew System::Windows::Forms::MenuItem());
			this->Task = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Task->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// mainMenu1
			// 
			this->mainMenu1->MenuItems->AddRange(gcnew cli::array< System::Windows::Forms::MenuItem^  >(5) {
				this->menuItem1, this->menuItem2,
					this->menuItem3, this->menuItem4, this->menuItem5
			});
			// 
			// menuItem1
			// 
			this->menuItem1->Index = 0;
			this->menuItem1->Text = L"Задание №1";
			this->menuItem1->Click += gcnew System::EventHandler(this, &MyForm::menuItem1_Click);
			// 
			// menuItem2
			// 
			this->menuItem2->Index = 1;
			this->menuItem2->Text = L"Задание №2";
			this->menuItem2->Click += gcnew System::EventHandler(this, &MyForm::menuItem2_Click);
			// 
			// menuItem3
			// 
			this->menuItem3->Index = 2;
			this->menuItem3->Text = L"Задание №3";
			// 
			// menuItem4
			// 
			this->menuItem4->Index = 3;
			this->menuItem4->Text = L"Задание №4";
			// 
			// menuItem5
			// 
			this->menuItem5->Index = 4;
			this->menuItem5->Text = L"Выход";
			this->menuItem5->Click += gcnew System::EventHandler(this, &MyForm::menuItem5_Click);
			// 
			// Task
			// 
			this->Task->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Task->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Task->Controls->Add(this->label6);
			this->Task->Controls->Add(this->label5);
			this->Task->Controls->Add(this->label4);
			this->Task->Controls->Add(this->label3);
			this->Task->Controls->Add(this->label12);
			this->Task->Controls->Add(this->label11);
			this->Task->Controls->Add(this->dataGridView1);
			this->Task->Controls->Add(this->button1);
			this->Task->Controls->Add(this->label2);
			this->Task->Controls->Add(this->label1);
			this->Task->Location = System::Drawing::Point(32, 12);
			this->Task->Name = L"Task";
			this->Task->Size = System::Drawing::Size(739, 287);
			this->Task->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(441, 159);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 21);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Ответ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(398, 159);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 21);
			this->label5->TabIndex = 17;
			this->label5->Text = L"G =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(613, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 21);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Ответ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(398, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(209, 21);
			this->label3->TabIndex = 15;
			this->label3->Text = L"Среднее арифметическое =";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(475, 67);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(52, 21);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Ответ";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(398, 67);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(71, 21);
			this->label11->TabIndex = 13;
			this->label11->Text = L"a[i][j] =";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->Location = System::Drawing::Point(14, 67);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(346, 213);
			this->dataGridView1->TabIndex = 6;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(610, 238);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 32);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Выпонить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(47, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Исходная матрица";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(285, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Задание №1";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->dataGridView3);
			this->panel1->Controls->Add(this->dataGridView2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Location = System::Drawing::Point(27, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(739, 287);
			this->panel1->TabIndex = 19;
			// 
			// dataGridView3
			// 
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView3->Location = System::Drawing::Point(56, 167);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(644, 113);
			this->dataGridView3->TabIndex = 7;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->GridColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView2->Location = System::Drawing::Point(56, 48);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(644, 113);
			this->dataGridView2->TabIndex = 6;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(615, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(113, 32);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Выпонить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(273, 23);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(141, 21);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Исходная матрица";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(290, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(100, 21);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Задание №2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(270, 140);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(170, 21);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Перевернутая матрица";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(813, 312);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Task);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Menu = this->mainMenu1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Task->ResumeLayout(false);
			this->Task->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void menuItem5_Click(System::Object^  sender, System::EventArgs^  e) {
		exit(0);
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int Matrix[8][3];
		int n = 8, m = 3, sum = 0, size = 0, s, x;
		double a = 0, G = 0;

		Task1 Result;

		dataGridView1->RowCount = n;
		dataGridView1->ColumnCount = m;

		for (int row = 0; row < n; row++)
		{
			for (int column = 0; column < m; column++)
			{
				Matrix[row][column] = 1 + rand() % 99;
				dataGridView1->Rows[row]->Cells[column]->Value = Matrix[row][column];

				a = Result.CalculateA(row,column);

				for (int k = 1; k <= column; k++)
				{
					G = Result.CalculateG(column,k);
				}

				sum += Matrix[row][0];
				size = sizeof(Matrix[row][column]);
				s = Result.CalculateS(sum,size);
	
			}
		}

			label12->Text = a.ToString();
			label4->Text = s.ToString();
			label6->Text = G.ToString();
			
	};
	private: System::Void menuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
		panel1->Visible = true;
		Task->Visible = false;
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Task2 Result;

	int n = 3,
		m = 6;

	int Matrix[3][6] = { {0,0,0,1,0,2},
							{1,0,1,1,1,2},
							{2,0,2,1,2,2} };
	dataGridView2->RowCount = n;
	dataGridView2->ColumnCount = m;

	dataGridView3->RowCount = n;
	dataGridView3->ColumnCount = m;
	 
	for (int row = 0; row < n; row++)
	{
		for (int col = 0; col < m; col++)
		{
			dataGridView2->Rows[row]->Cells[col]->Value = Matrix[row][col];



			dataGridView3->Rows[row]->Cells[col]->Value = Matrix[col][row];
		}
	}
}
private: System::Void menuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	Task->Visible = true;
	panel1->Visible = false;
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	Task->Visible = false;
	panel1->Visible = false;
}
};
}