#pragma once
#include <iostream>
#include <list>
using namespace std;
namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	int domyslnaplansza[9][9] = { { 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
	{ 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
	int SudokuWype³nione[9][9] = {
			{ 6, 9, 5, 2, 7, 4, 3, 1, 8 },
			{ 4, 7, 8, 1, 3, 5, 9, 6, 2 },
			{ 2, 3, 1, 9, 6, 8, 4, 5, 7 },
			{ 8, 2, 3, 5, 4, 1, 7, 9, 6 },
			{ 5, 1, 4, 7, 9, 6, 2, 8, 3 },
			{ 7, 6, 9, 8, 2, 3, 5, 4, 1 },
			{ 3, 5, 6, 4, 1, 2, 8, 7, 9 },
			{ 9, 8, 2, 6, 5, 7, 1, 3, 4 },
			{ 1, 4, 7, 3, 8, 9, 6, 2, 5 } };
	int tablica0[9];
	int tablica1[9];
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;













	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::Button^  button1;













	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;










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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle19 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle20 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle21 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle22 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle23 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle24 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle25 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle26 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle27 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::HotTrack;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 18;
			this->dataGridView1->Size = System::Drawing::Size(290, 210);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			dataGridViewCellStyle19->BackColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle19->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Column1->DefaultCellStyle = dataGridViewCellStyle19;
			this->Column1->HeaderText = L"";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 30;
			// 
			// Column2
			// 
			dataGridViewCellStyle20->BackColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle20->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Column2->DefaultCellStyle = dataGridViewCellStyle20;
			this->Column2->HeaderText = L"";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 30;
			// 
			// Column3
			// 
			dataGridViewCellStyle21->BackColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle21->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Column3->DefaultCellStyle = dataGridViewCellStyle21;
			this->Column3->HeaderText = L"";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 30;
			// 
			// Column4
			// 
			dataGridViewCellStyle22->BackColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle22->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Column4->DefaultCellStyle = dataGridViewCellStyle22;
			this->Column4->HeaderText = L"";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 30;
			// 
			// Column5
			// 
			dataGridViewCellStyle23->BackColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle23->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Column5->DefaultCellStyle = dataGridViewCellStyle23;
			this->Column5->HeaderText = L"";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 30;
			// 
			// Column6
			// 
			dataGridViewCellStyle24->BackColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle24->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Column6->DefaultCellStyle = dataGridViewCellStyle24;
			this->Column6->HeaderText = L"";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 30;
			// 
			// Column7
			// 
			dataGridViewCellStyle25->BackColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle25->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Column7->DefaultCellStyle = dataGridViewCellStyle25;
			this->Column7->HeaderText = L"";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 30;
			// 
			// Column8
			// 
			dataGridViewCellStyle26->BackColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle26->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Column8->DefaultCellStyle = dataGridViewCellStyle26;
			this->Column8->HeaderText = L"";
			this->Column8->Name = L"Column8";
			this->Column8->Width = 30;
			// 
			// Column9
			// 
			dataGridViewCellStyle27->BackColor = System::Drawing::Color::Yellow;
			dataGridViewCellStyle27->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Column9->DefaultCellStyle = dataGridViewCellStyle27;
			this->Column9->HeaderText = L"";
			this->Column9->Name = L"Column9";
			this->Column9->Width = 30;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(313, 143);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(174, 57);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Zeruj niektóre wartosci w Sudoku";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(449, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(38, 20);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(449, 65);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(38, 20);
			this->textBox2->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->label3->Location = System::Drawing::Point(318, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Podaj numer wiersza";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->label4->Location = System::Drawing::Point(318, 65);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Podaj numer wiersza";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(508, 27);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(105, 61);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Zamieñ podane wiersze";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Red;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(316, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(595, 25);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Zamieniaæ WIERSZE MO¯NA TYLKO W GRUPACH (0-2, 3-5, 6-8)";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(179, 270);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(32, 20);
			this->textBox3->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(179, 305);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(32, 20);
			this->textBox4->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(27, 273);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Podaj numer kolumny";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(27, 305);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Podaj numet kolumny";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Red;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label6->ForeColor = System::Drawing::Color::Honeydew;
			this->label6->Location = System::Drawing::Point(12, 233);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(501, 22);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Zamieniaæ kolumny mo¿na tylko w grupach (0-2, 3-5, 6-8)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Blue;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label7->ForeColor = System::Drawing::Color::Yellow;
			this->label7->Location = System::Drawing::Point(-5, 379);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(975, 25);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Wybór wartoœæ z dwóch ró¿nych grup nie gwarantuje utworzenia poprawnej planszy Su"
				L"doku";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(240, 266);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 59);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Zamieñ podane kolumny";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(578, 143);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(578, 174);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(35, 13);
			this->label9->TabIndex = 20;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(578, 209);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(41, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(578, 242);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 13);
			this->label11->TabIndex = 22;
			this->label11->Text = L"label11";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(578, 277);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 13);
			this->label12->TabIndex = 23;
			this->label12->Text = L"label12";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(578, 312);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 24;
			this->label13->Text = L"label13";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(972, 508);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Form1";
			this->Text = L"Generator Plansz";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		Form^ PlanszaDoGenerowaniaSudoku = gcnew Form;//dopisane
		dataGridView1->ColumnCount = 9;
		dataGridView1->RowCount = 9;
		/*	dataGridView2->ColumnCount = 9;
		dataGridView2->RowCount = 9;*/
		for (System::Int32 i = 0; i < 9; i++)
		{
			dataGridView1->Columns[i]->SortMode = DataGridViewColumnSortMode::NotSortable;
			dataGridView1->SelectionMode = DataGridViewSelectionMode::CellSelect;
		}

		for (System::Int32 j = 0; j < 9; j++)
		{
			for (System::Int32 i = 0; i < 9; i++)
			{
				dataGridView1->Rows[j]->Cells[i]->Value = SudokuWype³nione[j][i];//Sudoku[j][i]
			}
		}
		label8->Text = "!!!!!!!!!INSTRUKCJA!!!!!!!!!";
		label9->Text = "1 Aby utworzyæ planszê Sudoku musimy mieæ jedn¹ prawid³owo rozwi¹zan¹ planszê";
		label10->Text = "2 Na wype³nionej planszy mo¿emy przestawiaæ wiersze i kolumny w obrêbie grup";
		label11->Text = "3 Po takich przestawieniach nasza plansza ma inny uk³ad wartoœci";
		label12->Text = "4 Z takiej planszy wystarczy usuwaæ losowo wybrane wartosci";
		label13->Text = "5 Po usuniêciu wielu wartoœci mamy planszê Sudoku , która ma conajmniej jedno rozwi¹zanie";
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		for (System::Int32 j = 0; j < 60; j++)
		{
			int losowana1 = (rand() % 9);
			int losowana2 = (rand() % 9);
			dataGridView1->Rows[losowana1]->Cells[losowana2]->Value = 0;
			SudokuWype³nione[losowana1][losowana2] = Convert::ToSingle(dataGridView1->Rows[losowana1]->Cells[losowana2]->Value);
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		for (int i = 0; i < 9; i++)
		{
			tablica0[i] = Convert::ToInt16(dataGridView1->Rows[0]->Cells[i]->Value);
			tablica1[i] = Convert::ToInt16(dataGridView1->Rows[1]->Cells[i]->Value);
			dataGridView1->Rows[0]->Cells[i]->Value = tablica1[i];
			dataGridView1->Rows[1]->Cells[i]->Value = tablica0[i];
		}

	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		int a;
		int b;
		a = Convert::ToInt16(textBox1->Text);
		b = Convert::ToInt16(textBox2->Text);

		for (int i = 0; i < 9; i++)
		{
			tablica0[i] = Convert::ToInt16(dataGridView1->Rows[a]->Cells[i]->Value);
			tablica1[i] = Convert::ToInt16(dataGridView1->Rows[b]->Cells[i]->Value);
			dataGridView1->Rows[a]->Cells[i]->Value = tablica1[i];
			dataGridView1->Rows[b]->Cells[i]->Value = tablica0[i];
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		int a;
		int b;
		a = Convert::ToInt16(textBox3->Text);
		b = Convert::ToInt16(textBox4->Text);

		for (int i = 0; i < 9; i++)
		{
			tablica0[i] = Convert::ToInt16(dataGridView1->Rows[i]->Cells[a]->Value);
			tablica1[i] = Convert::ToInt16(dataGridView1->Rows[i]->Cells[b]->Value);
			dataGridView1->Rows[i]->Cells[a]->Value = tablica1[i];
			dataGridView1->Rows[i]->Cells[b]->Value = tablica0[i];
		}
	}
	};
}