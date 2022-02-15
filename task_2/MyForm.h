#pragma once

namespace Kovaleva {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	float lines[] = {
		// голова
		0.5f,3.f,1.f,4.5f, // от левой щеки вверх до уха
		1.f,4.5f,0.5f,6.f, // левое ухо слева снизу вверх
		0.5f,6.f,0.5f, 7.5f, // левое ухо слева
		0.5f, 7.5f,1.f,8.f, // левое ухо верх слева
		1.f,8.f,1.5f,8.f, // левое ухо верх середина
		1.5f,8.f,2.f,7.5f, // левое ухо верх справа
		2.f,7.5f,1.5f, 6.f, // левое ухо справа сверху вниз
		1.5f, 6.f,1.5f,4.5f, // левое ухо справа до макушки
		1.5f,4.5f,3.f,4.5f, // макушка
		3.f,4.5f,3.f,6.f, // правое ухо слева снизу вверх
		3.f,6.f,2.5f,7.5f, // правое ухо слева
		2.5f,7.5f,3.f,8.f, // правое ухо верх слева
		3.f,8.f,3.5f,8.f, // правое ухо верх середина
		3.5f,8.f,4.f,7.5f, // правое ухо верх справа
		4.f,7.5f,4.f,6.f, // правое ухо сверху вниз
		4.f,6.f,3.5f,4.5f, // правое ухо справа
		3.5f,4.5f,4.f,3.f, // от правого уха вниз до щеки
		4.f,3.f,3.5f,1.5f, // правая скула
		3.5f,1.5f,2.5f,1.f, // подбородок справа
		2.5f,1.f,2.f,1.f, // подбородок снизу
		2.f,1.f,1.f,1.5f, // подбородок слева
		1.f,1.5f,0.5f,3.f, // левая скула
		// туловище
		4.f,3.f,5.5f,3.5f, // спина от головы вправо
		5.5f,3.5f,7.f,3.5f, // спина верх
		7.f,3.5f,7.5f,2.5f, // спина сверху до хвоста
		7.5f,2.5f,8.f,2.5f, // хвост сверху
		8.f,2.5f,8.f,2.f, // хвост справа
		8.f,2.f,7.5f,2.f, // хвост низ справа налево
		7.5f,2.f,7.5f,0.5f, // задняя нога справа сверху вниз
		7.5f,0.5f,6.5f,0.5f, // задняя нога низ
		6.5f,0.5f,6.5f,1.f, // задняя нога слева
		6.5f,1.f,6.f,1.f, // между задних ног
		6.f,1.f,6.f,0.5f, // левая задняя нога справа
		6.f,0.5f,5.f,0.5f, // левая задняя нога низ
		5.f,0.5f,5.f,1.f, // левая задняя нога слева
		5.f,1.f,4.f,1.f, // между задними и передними ногами
		4.f,1.f,4.f,0.5f, // правая передняя нога справа
		4.f,0.5f,3.f,0.5f, // правая передняя нога низ
		3.f,0.5f,3.f,1.f, // правая передняя нога слева
		3.f,1.f,2.5f,1.f, // между передних ног
		2.5f,1.f,2.5f,0.5f, // передняя нога справа
		2.5f,0.5f,1.5f,0.5f, // передняя нога низ
		1.5f,0.5f,1.5f,1.25f, // передняя нога слева
		// левый глаз
		1.5f,3.5f,1.5f,3.f, // левый глаз слева сверху вниз
		1.5f,3.f,2.f,3.f, // левый глаз низ
		2.f, 3.f,2.f,3.5f, // левый глаз справа
		2.f,3.5f,1.5f,3.5f, // левый глаз верх
		// правый глаз
		2.5f,3.5f,2.5f,3.f, // правый глаз слева
		2.5f,3.f,3.f, 3.f, // правый глаз снизу
		3.f,3.f,3.f,3.5f, // правый глаз справа
		3.f,3.5f,2.5f,3.5f, // правый глаз сверху
		// ушные раковины
		1.f,5.5f,1.f,7.f, // левая ушная раковина
		3.5f,5.5f,3.5f,7.f, // правая ушная раковина
		// нос
		2.f,2.5f,2.5f,2.5f, // нос сверху
		2.5f,2.5f,2.25f,2.f, // нос справа
		2.25f,2.f,2.f,2.5f // нос слева
	};
	float lines_clown[] = {
		// бабочка
		6.0f, 1.0f, 6.0f, 7.0f, // прямая левого тр-ка бабочки
		14.0f, 1.0f, 14.0f, 7.0f, // прямая правого тр-ка бабочки
		6.0f, 1.0f, 10.0f, 5.0f, // линия левого тр-ка бабочки - снизу вверх
		6.0f, 7.0f, 10.0f, 3.0f, // линия левого тр-ка бабочки - сверху вниз
		14.0f, 1.0f, 10.0f, 5.0f, // линия правого тр-ка бабочки - снизу вверх
		14.0f, 7.0f, 10.0f, 3.0f, // линия правого тр-ка бабочки - сверху вниз
		// квадрат внутри левого тр-ка бабочки
		7.0f, 3.0f, 7.0f, 4.0f,
		7.0f, 4.0f, 8.0f, 4.0f,
		7.0f, 3.0f, 8.0f, 3.0f,
		8.0f, 3.0f, 8.0f, 4.0f,
		// верхний тр-к внутри левого тр-ка бабочки
		6.0f, 6.0f, 7.0f, 5.0f,
		7.0f, 5.0f, 6.0f, 4.0f,
		// нижний тр-к внутри левого тр-ка бабочки
		6.0f, 3.0f, 7.0f, 2.0f,
		// квадрат внутри правого тр-ка бабочки
		12.0f, 5.0f, 13.0f, 5.0f,
		13.0f, 5.0f, 13.0f, 4.0f,
		13.0f, 4.0f, 12.0f, 4.0f,
		12.0f, 4.0f, 12.0f, 5.0f,
		// верхний тр-к внутри правого тр-ка бабочки
		14.0f, 5.0f, 13.0f, 6.0f,
		// нижний тр-к внутри правого тр-ка бабочки
		14.0f, 2.0f, 13.0f, 3.0f,
		13.0f, 3.0f, 14.0f, 4.0f,

		// обводка формы лица клоуна
		9.0f, 6.0f, 11.0f, 6.0f, // линия подбородка
		11.0f, 6.0f, 15.0f, 8.0f, // правый угол подбородка
		15.0f, 8.0f, 16.0f, 10.0f, // правая линия от губ
		16.0f, 10.0f, 16.0f, 15.0f, // прямая линия правой щеки
		16.0f, 15.0f, 15.0f, 17.0f, // линия к началу правого глаза
		15.0f, 17.0f, 15.0f, 19.0f, // прямая линия правого глаза
		15.0f, 19.0f, 13.0f, 21.0f, // угол правого глаза 
		13.0f, 21.0f, 11.0f, 21.0f, // прямая линия правого глаза
		11.0f, 21.0f, 10.0f, 18.5f, // правая линия к пересечению глаз
		10.0f, 18.5f, 9.0f, 21.0f, // левая линия от пересечения глаз
		9.0f, 21.0f, 7.0f, 21.0f, // прямая линия левого глаза
		7.0f, 21.0f, 5.0f, 19.0f, // угол левого глаза
		5.0f, 19.0f, 5.0f, 17.0f, // прямая линия левого глаза
		5.0f, 17.0f, 4.0f, 15.0f, // линия к началу левого глаза
		4.0f, 15.0f, 4.0f, 10.0f, // прямая линия левой щеки
		4.0f, 10.0f, 5.0f, 8.0f, // левая линия от губ
		5.0f, 8.0f, 9.0f, 6.0f, // левый угол подбородка

		// левый глаз
		10.0f, 18.5f, 9.0f, 16.0f,
		9.0f, 16.0f, 7.0f, 16.0f,
		7.0f, 16.0f, 5.0f, 17.0f,
		// радужка левого глаза
		7.0f, 16.0f, 6.0f, 17.0f,
		6.0f, 17.0f, 7.0f, 19.0f,
		7.0f, 19.0f, 8.0f, 19.0f,
		8.0f, 19.0f, 9.0f, 17.0f,
		9.0f, 17.0f, 8.0f, 16.0f,
		// левый зрачок
		7.0f, 16.0f, 7.0f, 17.0f,
		7.0f, 17.0f, 8.0f, 17.0f,
		8.0f, 17.0f, 8.0f, 16.0f,

		// правый глаз
		10.0f, 18.5f, 11.0f, 16.0f,
		11.0f, 16.0f, 13.0f, 16.0f,
		13.0f, 16.0f, 15.0f, 17.0f,
		// радужка правого глаза
		12.0f, 16.0f, 11.0f, 17.0f,
		11.0f, 17.0f, 12.0f, 19.0f,
		12.0f, 19.0f, 13.0f, 19.0f,
		13.0f, 19.0f, 14.0f, 17.0f,
		14.0f, 17.0f, 13.0f, 16.0f,
		// правый зрачок
		12.0f, 16.0f, 12.0f, 17.0f,
		12.0f, 17.0f, 13.0f, 17.0f,
		13.0f, 17.0f, 13.0f, 16.0f,

		// нос
		9.0f, 16.0f, 11.0f, 16.0f,
		11.0f, 16.0f, 13.0f, 15.0f,
		13.0f, 15.0f, 14.0f, 13.0f,
		14.0f, 13.0f, 13.0f, 12.0f,
		13.0f, 12.0f, 10.0f, 11.0f,
		10.0f, 11.0f, 7.0f, 12.0f,
		7.0f, 12.0f, 6.0f, 13.0f,
		6.0f, 13.0f, 7.0f, 15.0f,
		7.0f, 15.0f, 9.0f, 16.0f,

		// рот
		14.0f, 13.0f, 15.0f, 13.0f,
		15.0f, 13.0f, 16.0f, 12.0f,
		16.0f, 11.0f, 13.0f, 9.0f,
		13.0f, 9.0f, 10.0f, 8.0f,
		10.0f, 8.0f, 7.0f, 9.0f,
		7.0f, 9.0f, 4.0f, 11.0f,
		4.0f, 12.0f, 5.0f, 13.0f,
		5.0f, 13.0f, 6.0f, 13.0f,

		// улыбка
		6.0f, 11.0f, 7.0f, 10.0f,
		7.0f, 10.0f, 10.0f, 9.0f,
		10.0f, 9.0f, 13.0f, 10.0f,
		13.0f, 10.0f, 14.0f, 11.0f,
		6.0f, 12.0f, 5.0f, 11.0f,
		14.0f, 12.0f, 15.0f, 11.0f,

		// волосы
		4.0f, 10.0f, 2.0f, 12.0f,
		2.0f, 12.0f, 3.0f, 15.0f,
		3.0f, 15.0f, 2.0f, 13.0f,
		2.0f, 13.0f, 1.0f, 14.0f,
		1.0f, 14.0f, 2.0f, 16.0f,
		2.0f, 16.0f, 1.0f, 15.0f,
		1.0f, 15.0f, 1.0f, 17.0f,
		1.0f, 17.0f, 5.0f, 22.0f,
		5.0f, 22.0f, 6.0f, 21.0f,
		6.0f, 21.0f, 8.0f, 22.0f,
		8.0f, 22.0f, 12.0f, 22.0f,
		12.0f, 22.0f, 14.0f, 21.0f,
		14.0f, 21.0f, 15.0f, 22.0f,
		15.0f, 22.0f, 19.0f, 17.0f,
		19.0f, 17.0f, 19.0f, 15.0f,
		19.0f, 15.0f, 18.0f, 16.0f,
		18.0f, 16.0f, 19.0f, 14.0f,
		19.0f, 14.0f, 18.0f, 13.0f,
		18.0f, 13.0f, 17.0f, 15.0f,
		17.0f, 15.0f, 18.0f, 12.0f,
		18.0f, 12.0f, 16.0f, 10.0f,

		// шляпа
		5.0f, 22.0f, 5.0f, 23.0f,
		5.0f, 23.0f, 7.0f, 24.0f,
		7.0f, 24.0f, 6.0f, 26.0f,
		6.0f, 26.0f, 7.0f, 28.0f,
		7.0f, 28.0f, 8.0f, 29.0f,
		8.0f, 29.0f, 12.0f, 29.0f,
		12.0f, 29.0f, 13.0f, 28.0f,
		13.0f, 28.0f, 14.0f, 26.0f,
		14.0f, 26.0f, 13.0f, 24.0f,
		13.0f, 24.0f, 15.0f, 23.0f,
		15.0f, 23.0f, 15.0f, 22.0f,

		// украшение на шляпе
		12.0f, 23.0f, 15.0f, 25.0f,
		15.0f, 25.0f, 16.0f, 25.0f,
		16.0f, 25.0f, 16.0f, 26.0f,
		16.0f, 26.0f, 15.0f, 26.0f,
		15.0f, 26.0f, 15.0f, 25.0f,
		15.0f, 25.0f, 14.0f, 26.0f,
		14.0f, 26.0f, 15.0f, 26.0f,
		15.0f, 26.0f, 16.0f, 27.0f,
		16.0f, 27.0f, 16.0f, 26.0f,
		16.0f, 26.0f, 17.0f, 25.0f,
		17.0f, 25.0f, 16.0f, 25.0f,
		16.0f, 25.0f, 15.0f, 24.0f,
		15.0f, 24.0f, 15.0f, 25.0f,
	};
	float Vx = 8.5f; // размер рисунка по горизонтали
	float Vy = 8.5f; // размер рисунка по вертикали
	float Vx_clown = 20.0f; // размер рисунка по горизонтали
	float Vy_clown = 30.0f; // размер рисунка по вертикали
	unsigned int arrayLength = sizeof(lines) / sizeof(float); // сохраняем кол-во отрезков
	unsigned int arrayLength_clown = sizeof(lines_clown) / sizeof(float); // сохраняем кол-во отрезков

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
			this->SuspendLayout();
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: bool keepAspectRatio; // значение - сохранять ли соотношение сторон рисунка?
	private: bool changeTheDrawing;
	private: System::Void MyForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Graphics^ g = e->Graphics;
		g->Clear(Color::LightBlue);

		if (changeTheDrawing)
		{
			Pen^ blackPen = gcnew Pen(Color::Black, 2);

			float Wx = ClientRectangle.Width; // размер окна по горизонтали
			float Wy = ClientRectangle.Height; // размер окна по вертикали

			float aspectFig = Vx_clown / Vy_clown; // соотношение сторон рисунка
			float aspectForm = Wx / Wy; // соотношение сторон окна рисования

			// делаем, чтобы изображение изменялось по осям
			float Sx, Sy;
			if (keepAspectRatio) {
				// коэффициентs увеличения при сохранении исходного соотношения сторон
				Sx = Sy = aspectFig < aspectForm ? Wy / Vy_clown : Wx / Vx_clown;
			}
			else {
				Sx = Wx / Vx_clown; // коэффициент увеличения по оси Ox
				Sy = Wy / Vy_clown; // коэффициент увеличения по оси Oy
			}
			float Ty = Sy * Vy_clown; // смещение в положительную сторону по оси Oy после смены знака
			for (int i = 0; i < arrayLength_clown; i += 4) {
				g->DrawLine(blackPen, Sx * lines_clown[i], Ty - Sy * lines_clown[i + 1],
					Sx * lines_clown[i + 2], Ty - Sy * lines_clown[i + 3]);
			}
		}
		else
		{
			Pen^ blackPen = gcnew Pen(Color::Black, 2);

			float Wx = ClientRectangle.Width; // размер окна по горизонтали
			float Wy = ClientRectangle.Height; // размер окна по вертикали

			float aspectFig = Vx / Vy; // соотношение сторон рисунка
			float aspectForm = Wx / Wy; // соотношение сторон окна рисования

			// делаем, чтобы изображение изменялось по осям
			float Sx, Sy;
			if (keepAspectRatio) {
				// коэффициентs увеличения при сохранении исходного соотношения сторон
				Sx = Sy = aspectFig < aspectForm ? Wy / Vy : Wx / Vx;
			}
			else {
				Sx = Wx / Vx; // коэффициент увеличения по оси Ox
				Sy = Wy / Vy; // коэффициент увеличения по оси Oy
			}
			float Ty = Sy * Vy; // смещение в положительную сторону по оси Oy после смены знака
			for (int i = 0; i < arrayLength; i += 4) {
				g->DrawLine(blackPen, Sx * lines[i], Ty - Sy * lines[i + 1],
					Sx * lines[i + 2], Ty - Sy * lines[i + 3]);
			}
		}

	}
	private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e) {
		Refresh();
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		keepAspectRatio = true; // начальное значение: сохранять соотношение сторон рисунка
	}
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		switch (e->KeyCode) {
		case Keys::M:
			keepAspectRatio = !keepAspectRatio;
			break;
		case Keys::N:
			changeTheDrawing = !changeTheDrawing;
			break;
		default:
			break;
		}

		Refresh();
	}
	};
}
