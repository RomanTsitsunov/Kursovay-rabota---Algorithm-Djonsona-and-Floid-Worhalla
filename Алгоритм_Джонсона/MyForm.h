#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <chrono>
#include <fstream>
#include "list.h"
#include "Binary_heap.h"
#pragma once


namespace Алгоритм_Джонсона {

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

	private: System::Windows::Forms::PictureBox^ pictureBox1;








	private: System::Windows::Forms::TabPage^ tabPage1;





	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage2;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TabPage^ tabPage3;


	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;


	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
































	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(102, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(368, 333);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(569, 398);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Входные данные";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(332, 213);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 25;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(227, 213);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 24;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(332, 197);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(107, 13);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Максимальный вес";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(225, 197);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(101, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Минимальный вес";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(121, 213);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 21;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(120, 197);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Количество дуг";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(217, 239);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(119, 47);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Сгенерировать случайное множество дуг";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(217, 88);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(119, 53);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Добавить дугу";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(202, 341);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(147, 51);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Задать множество вершин";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(332, 62);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 16;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(226, 62);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 15;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(121, 62);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 14;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(227, 315);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 13;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(355, 46);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(51, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Вес дуги";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(241, 46);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(63, 13);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Конец дуги";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(199, 299);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(150, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Количество вершин в графе";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(136, 46);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(69, 13);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Начало дуги";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(0, 0);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 0;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(577, 424);
			this->tabControl1->TabIndex = 10;
			this->tabControl1->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(569, 398);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Визуализация графа";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(223, 342);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 53);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Рисовать граф";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button7);
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->button4);
			this->tabPage3->Controls->Add(this->label3);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Controls->Add(this->textBox6);
			this->tabPage3->Controls->Add(this->textBox5);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(569, 398);
			this->tabPage3->TabIndex = 3;
			this->tabPage3->Text = L"Отображение результатов применения алгоритмов";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(234, 40);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(88, 62);
			this->button7->TabIndex = 0;
			this->button7->Text = L"Вывести в файл матрицу весов дуг";
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(366, 40);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(131, 62);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Применить алгоритм Джонсона";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(54, 40);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(134, 62);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Применить алгоритм Флойда-Уоршелла";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(81, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Время работы";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(394, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Время работы";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(384, 121);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(71, 121);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(601, 448);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm";
			this->Text = L"Приложение для работы с графовыми алгоритмами";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		int n;
		list* e_;
		const int inf = 2146483646;
		void Initialise(int n, int* v, int s)
		{
			int i;
			for (i = 0; i < n; i++)
				v[i] = inf;
			v[s - 1] = 0;
		}

		void Relax(int u, int& v, int w)
		{
			if (v > u + w)
				v = u + w;
		}

		bool BellmanFord(int n, int* v, int* r, int*** g, int s)
		{
			Initialise(n, v, s);
			int i, j, k;
			for (k = 1; k < n; k++)
				for (i = 0; i < n; i++)
					for (j = 0; j < r[i]; j++)
						Relax(v[i], v[g[i][j][0]], g[i][j][1]);
			for (i = 0; i < n; i++)
				for (j = 0; j < r[i]; j++)
					if (v[g[i][j][0]] > v[i] + g[i][j][1])
						return false;
			return true;
		}

		void Dekstra(int n, int* v, int* r, int*** g, int s)
		{
			Initialise(n, v, s);
			int i, nmin, k = 0;
			Binary_heap q(v, n);
			q.create_heap();
			while (k != n)
			{
				nmin = q.nmin();
				if (v[nmin] < inf)
				{
					q.pop();
					for (i = 0; i < r[nmin]; i++)
					{
						Relax(v[nmin], v[g[nmin][i][0]], g[nmin][i][1]);
						q.Decrease_key(g[nmin][i][0], v[g[nmin][i][0]]);
					}
				}
				else
					k = n - 1;
				k++;
			}
		}
		//Инициализация вершин
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text != "")
		{
			n = Convert::ToInt32(textBox1->Text);
			if (n >= 1 && n <= 2000)
			{
				e_ = new list[n];
				button1->Hide();
				button8->Hide();
				button2->Show();
				button3->Show();
				button4->Show();
				button5->Show();
				button6->Show();
				button7->Show();
				textBox1->ReadOnly = true;
			}
			if (n < 1)
			{
				MessageBox::Show("Данные заполнены неверно", "Ошибка ввода данных",
					MessageBoxButtons::OK,
					MessageBoxIcon::Exclamation);
			}
			if (n > 2000)
			{
				MessageBox::Show("Ограничение в количестве вершин-не больше 2000", "Данные заполнены неверно",
					MessageBoxButtons::OK,
					MessageBoxIcon::Exclamation);
			}
		}
		else
		{
			MessageBox::Show("Заполните, пожалуйста, данные", "Ошибка ввода данных",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
		   //Добавление дуг
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "")
		{
			int i, j, w;
			i = Convert::ToInt32(textBox2->Text);
			j = Convert::ToInt32(textBox3->Text);
			w = Convert::ToInt32(textBox4->Text);
			textBox2->Clear();
			textBox3->Clear();
			textBox4->Clear();
			if (i > 0 && i <= n && j > 0 && j <= n && w <= 1000000 && w >= -1000000)
				e_[i - 1].addfirst(j - 1, w);
			else
			{
				MessageBox::Show("Данные заполнены неверно", "Ошибка ввода данных",
					MessageBoxButtons::OK,
					MessageBoxIcon::Exclamation);
			}
		}
		else
		{
			MessageBox::Show("Заполните, пожалуйста, данные", "Ошибка ввода данных",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
		   //Рисование графа
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int i, j, x, y, x1, y1;
		double a, b;
		int** points = new int* [n];
		if (n != 0)
			a = 2 * M_PI / n;
		else
			a = 0;
		x1 = pictureBox1->Size.Width / 2;
		y1 = pictureBox1->Size.Height / 2;
		for (i = 0; i < n; i++)
		{
			points[i] = new int[2];
			x = x1 - x1 * 0.9 * cos(a * i);
			y = y1 - y1 * 0.9 * sin(a * i);
			points[i][0] = x;
			points[i][1] = y;
			pictureBox1->CreateGraphics()->DrawEllipse(System::Drawing::Pens::Black, x, y, 10, 10);
		}
		for (i = 0; i < n; i++)
			for (j = 0; j < e_[i].size(); j++)
			{
				x = points[i][0] + 5;
				y = points[i][1] + 5;
				x1 = points[e_[i][j]->v][0] + 5;
				y1 = points[e_[i][j]->v][1] + 5;
				pictureBox1->CreateGraphics()->DrawLine(System::Drawing::Pens::Black, x, y, x1, y1);
				b = atan2(points[e_[i][j]->v][1] - points[i][1], points[e_[i][j]->v][0] - points[i][0]);
				x = x + (x1 - x) * 0.8;
				y = y + (y1 - y) * 0.8;
				x1 = x + 10 * cos(b + 3 * M_PI_4);
				y1 = y + 10 * sin(b + 3 * M_PI_4);
				pictureBox1->CreateGraphics()->DrawLine(System::Drawing::Pens::Red, x, y, x1, y1);
				x1 = x + 10 * cos(b - 3 * M_PI_4);
				y1 = y + 10 * sin(b - 3 * M_PI_4);
				pictureBox1->CreateGraphics()->DrawLine(System::Drawing::Pens::Red, x, y, x1, y1);
			}
	}
		   //Алгоритм Флойда-Уоршелла
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int k, i, j;
		int* r = new int[n];
		int*** g = new int** [n];
		int* v = new int[n];
		std::ofstream fout("Результат работы алгоритма Флойда-Уоршелла.txt");
		for (i = 0; i < n; i++)
		{
			r[i] = e_[i].size();
			g[i] = new int* [r[i]];
			for (j = 0; j < r[i]; j++)
			{
				g[i][j] = new int[2];
				g[i][j][0] = e_[i][j]->v;
				g[i][j][1] = e_[i][j]->w;
			}
		}
		auto start_time = std::chrono::high_resolution_clock::now();
		int** D;
		D = new int* [n];
		for (i = 0; i < n; i++)
			D[i] = new int[n];
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				D[i][j] = inf;
		for (i = 0; i < n; i++)
			D[i][i] = 0;
		for (i = 0; i < n; i++)
			for (j = 0; j < r[i]; j++)
				D[i][g[i][j][0]] = g[i][j][1];
		for (k = 0; k < n; k++)
			for (i = 0; i < n; i++)
				for (j = 0; j < n; j++)
					if (D[i][k] + D[k][j] < D[i][j])
						if (D[i][k] < inf && D[k][j] < inf)
							D[i][j] = D[i][k] + D[k][j];
		auto end_time = std::chrono::high_resolution_clock::now();
		textBox5->Text = Convert::ToString
		(std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count());
		textBox5->AppendText(" miksec");
		fout << "Время работы алгоритма Флойда-Уоршелла: " << Convert::ToInt32
		(std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count())
			<< " микросекунд" << std::endl;
		if (n > 0)
		{
			fout << "Матрица весов кратчайших путей между всеми парами вершин:" << std::endl;
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < n; j++)
				{
					fout.width(8);
					if (D[i][j] >= inf)
					{
						fout << "-";
					}
					else
					{
						fout << D[i][j];
					}
					fout << " ";
				}
				fout << std::endl;
			}
			fout.close();
		}
	}
		   //Алгоритм Джонсона
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int i, j, s;
		int* r = new int[n + 1];
		int*** g = new int** [n + 1];
		int* v = new int[n];
		int* v1 = new int[n + 1];
		std::ofstream fout("Результат работы алгоритма Джонсона.txt");
		for (i = 0; i < n; i++)
		{
			r[i] = e_[i].size();
			g[i] = new int* [r[i]];
			for (j = 0; j < r[i]; j++)
			{
				g[i][j] = new int[2];
				g[i][j][0] = e_[i][j]->v;
				g[i][j][1] = e_[i][j]->w;
			}
		}
		auto start_time = std::chrono::high_resolution_clock::now();
		g[n] = new int* [n];
		for (i = 0; i < n; i++)
		{
			g[n][i] = new int[2];
			g[n][i][0] = i;
			g[n][i][1] = 0;
		}
		r[n] = n;
		if (!BellmanFord(n + 1, v1, r, g, n + 1))
		{
			textBox6->Text = "Содержится цикл с отрицательным весом";
			fout << "Содержится цикл с отрицательным весом";
		}
		else
		{
			for (i = 0; i < n; i++)
				for (j = 0; j < r[i]; j++)
					if (g[i][j][1] < inf)
						g[i][j][1] = g[i][j][1] + v1[i] - v1[g[i][j][0]];
			int** d = new int* [n];
			for (i = 0; i < n; i++)
				d[i] = new int[n];
			for (s = 1; s <= n; s++)
			{
				Dekstra(n, v, r, g, s);
				for (i = 0; i < n; i++)
					if (v[i] < inf)
						d[s - 1][i] = v[i] + v1[i] - v1[s - 1];
					else
						d[s - 1][i] = inf;
			}
			auto end_time = std::chrono::high_resolution_clock::now();
			textBox6->Text = Convert::ToString
			(std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count());
			textBox6->AppendText(" miksec");
			fout << "Время работы алгоритма Джонсона: " << Convert::ToInt32
			(std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count())
				<< " микросекунд" << std::endl;
			if (n > 0)
			{
				fout << "Матрица весов кратчайших путей между всеми парами вершин:" << std::endl;
				for (i = 0; i < n; i++)
				{
					for (j = 0; j < n; j++)
					{
						fout.width(8);
						if (d[i][j] >= inf)
						{
							fout << "-";
						}
						else
						{
							fout << d[i][j];
						}
						fout << " ";
					}
					fout << std::endl;
				}
				fout.close();
			}
		}
	}
		   //Случайная генерация дуг
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox7->Text != "" && textBox8->Text != "" && textBox9->Text != "")
		{
			e_ = new list[n];
			int k, w1, w2;
			int i, j, w, t;
			bool** A = new bool* [n];
			for (i = 0; i < n; i++)
			{
				A[i] = new bool[n];
				for (j = 0; j < n; j++)
					A[i][j] = false;
				A[i][i] = true;
			}
			if (Convert::ToInt64(textBox8->Text) < -1000000 ||
				Convert::ToInt64(textBox9->Text) > 1000000)
			{
				MessageBox::Show("Ограничение по весам дуг: не больше 1000000 и не меньше -1000000",
					"Ошибка ввода данных",
					MessageBoxButtons::OK,
					MessageBoxIcon::Exclamation);
			}
			else
			{
				k = Convert::ToInt32(textBox7->Text);
				w1 = Convert::ToInt32(textBox8->Text);
				w2 = Convert::ToInt32(textBox9->Text);
				if (w2 < w1)
				{
					MessageBox::Show("Верхняя граница диапазона должна быть не меньше нижней границы",
						"Ошибка ввода данных",
						MessageBoxButtons::OK,
						MessageBoxIcon::Exclamation);
				}
				else
				{
					if (k < 0 || k > n * (n - 1))
					{
						MessageBox::Show("Ограничение в количестве дуг-не больше n * (n - 1)",
							"Ошибка ввода данных",
							MessageBoxButtons::OK,
							MessageBoxIcon::Exclamation);
					}
					else
					{
						for (t = 0; t < k;)
						{
							i = rand() % n;
							j = rand() % n;
							w = rand() % (w2 - w1 + 1) + w1;
							if (!A[i][j])
							{
								A[i][j] = true;
								e_[i].addfirst(j, w);
								t++;
							}
						}
					}
				}
			}
		}
		else
		{
			MessageBox::Show("Заполните, пожалуйста, данные", "Ошибка ввода данных",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
		   //Вывод матрицы весов дуг в файл
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int i, j;
		int** A = new int* [n];
		for (i = 0; i < n; i++)
			A[i] = new int[n];
		std::ofstream fout("Матрица весов дуг.txt");
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				A[i][j] = inf;
		for (i = 0; i < n; i++)
			for (j = 0; j < e_[i].size(); j++)
				A[i][e_[i][j]->v] = e_[i][j]->w;
		fout << "Матрица весов дуг:" << std::endl;
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				fout.width(8);
				if (A[i][j] >= inf)
					fout << "-";
				else
					fout << A[i][j];
				fout << " ";
			}
			fout << std::endl;
		}
		fout.close();
	}
		   //Создание графа на основе входных данных из файла
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		int a, b, c, x;
		std::ifstream fin("Граф2.txt");
		fin >> x;
		n = x;
		e_ = new list[n];
		button1->Hide();
		button8->Hide();
		button3->Show();
		button4->Show();
		button5->Show();
		button7->Show();
		while (fin >> a >> b >> c)
			e_[a - 1].addfirst(b - 1, c);
	}
};
}